using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GridGenerator : MonoBehaviour
{
    [SerializeField] private GameObject _matrixPrefab;
    [SerializeField] private GameObject _cellPrefab;
    [SerializeField] private GameObject _gameOverPanel;
    [SerializeField] private GameObject _finishGame;
    [SerializeField] private GameObject _numbersPanel;
    [SerializeField] private UnityAds _unityAds;
    [SerializeField] private List<GameObject> _numberButtonList = new List<GameObject>();
    [SerializeField] private int _hp;

    private GameObject _mainGrid;
    private GameObject _soundManager;

    private Dictionary<int, Cell[]> _cellsGrid = new Dictionary<int, Cell[]>()
    {
        {0, new  Cell[9]},
        {1, new  Cell[9]},
        {2, new  Cell[9]},
        {3, new  Cell[9]},
        {4, new  Cell[9]},
        {5, new  Cell[9]},
        {6, new  Cell[9]},
        {7, new  Cell[9]},
        {8, new  Cell[9]}
    };
    private Dictionary<int, GameObject[]> _matrices = new Dictionary<int, GameObject[]>()
    {
        {0, new GameObject[3]},
        {1, new GameObject[3]},
        {2, new GameObject[3]}
    };


    private int _openCountCells;

    private void Start()
    {
        _mainGrid = GameObject.FindGameObjectWithTag("MainGrid");
        _soundManager = GameObject.FindGameObjectWithTag("SoundManager");

        GenerateNumbers(_cellsGrid);
        RenderingMatrixGame(_matrices, _matrixPrefab);
        RandomOpenCells(_cellsGrid, MenuManager.lvl);
        PoolMatrix(_matrices);
        SpawnNumberButtonList(_numberButtonList);
    }

    public void BackToMainMenu() => SceneManager.LoadScene(0);
    public void SetOpenCountCells()
    {
        _openCountCells++;

        if(GetOpenCountCells() == 81)
        {
            _unityAds.PlayInterstitialAd();
            FinishGame();
        }
    }
    public void SetDamage()
    {
        _hp--;

        if (GetHP() == 0)
        {
            GameOver();
            _unityAds.PlayInterstitialAd();
        }
    }
    public int GetHP() => _hp;
    public int GetOpenCountCells() => _openCountCells;


    private void GameOver()
    {
        _numbersPanel.SetActive(false);
        _gameOverPanel.SetActive(true);
        _soundManager.GetComponent<AudioFX>().PlayAudioGameOver();
    }
    private void FinishGame()
    {
        _numbersPanel.SetActive(false);
        _finishGame.SetActive(true);
        _soundManager.GetComponent<AudioFX>().PlayAudioFinishGame();

        GameEvents.setBestScore.Invoke();
    }
    private void SpawnMatrix(Dictionary<int, GameObject[]> matrices, GameObject matrixPrefab, int indexRow, int indexMatrix)
    {
        GameObject cellPrefab = Instantiate(matrixPrefab, new Vector3(), Quaternion.identity);
        cellPrefab.transform.SetParent(_mainGrid.transform, false);
        matrices[indexRow][indexMatrix] = cellPrefab;
    }
    private void RenderingMatrixGame(Dictionary<int, GameObject[]> matrices, GameObject matrixPrefab)
    {
        for (int indexRow = 0; indexRow < _matrices.Count; indexRow++)
        {
            for (int indexMatrix = 0; indexMatrix < _matrices[0].Length; indexMatrix++)
            {
                SpawnMatrix(matrices, matrixPrefab, indexRow, indexMatrix);
            }
        }
    }
    private Cell[] GenerationRandomRow(Dictionary<int, Cell[]> cellsGrid)
    {
        Cell[] result = new Cell[cellsGrid.Count];

        for (int i = 0; i < cellsGrid.Count; i++)
        { 
            result[i] = new Cell(i + 1);
        }
        
        for (int i = 0; i < result.Length; i++)
        {
            int index1 = Random.Range(0, 9);
            int index2 = Random.Range(0, 9);
            Cell temp = result[index1];

            result[index1] = result[index2];
            result[index2] = temp;
        }
        
        return result;
    }
    private void GenerateNumbers(Dictionary<int, Cell[]> cellsGrid)
    {
        cellsGrid[0] = GenerationRandomRow(cellsGrid);

        for (int indexRowFrom = 0, indexRowTo = 1; indexRowFrom < 2; indexRowFrom++, indexRowTo++)
        {
            for (int indexNumber = 3; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
            {
                cellsGrid[indexRowTo][indexNumber - 3] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
            }

            for (int indexNumber = 0; indexNumber < 3; indexNumber++)
            {
                cellsGrid[indexRowTo][indexNumber + 6] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
            }
        }

        for (int indexRowFrom = 0, indexRowTo = 3; indexRowFrom < 6; indexRowFrom++, indexRowTo++)
        {
            for (int indexNumber = 1; indexNumber < cellsGrid[indexRowFrom].Length; indexNumber++)
            {
                cellsGrid[indexRowTo][indexNumber - 1] = new Cell(cellsGrid[indexRowFrom][indexNumber].GetTrueNumber());
                cellsGrid[indexRowTo][8] = new Cell(cellsGrid[indexRowFrom][0].GetTrueNumber());
            }
        }

        MatrixShuffle(cellsGrid);
    }
    private void MatrixShuffle(Dictionary<int, Cell[]> cellsGrid)
    {
        Cell[] tempRow = new Cell[9];
        Cell tempColumn;


        tempRow = cellsGrid[3];
        cellsGrid[3] = cellsGrid[5];
        cellsGrid[5] = tempRow;

        tempRow = cellsGrid[1];
        cellsGrid[1] = cellsGrid[2];
        cellsGrid[2] = tempRow;

        tempRow = cellsGrid[6];
        cellsGrid[6] = cellsGrid[8];
        cellsGrid[8] = tempRow;

        for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
        {
            tempColumn = cellsGrid[indexRow][0];
            cellsGrid[indexRow][0] = cellsGrid[indexRow][2];
            cellsGrid[indexRow][2] = tempColumn;

            tempColumn = cellsGrid[indexRow][3];
            cellsGrid[indexRow][3] = cellsGrid[indexRow][5];
            cellsGrid[indexRow][5] = tempColumn;

            tempColumn = cellsGrid[indexRow][6];
            cellsGrid[indexRow][6] = cellsGrid[indexRow][7];
            cellsGrid[indexRow][7] = tempColumn;
        }

    }
    private void SpawnCell(GameObject matrixPrefab, int indexRowNumbers, int indexNumber)
    {
        GameObject cellPrefab = Instantiate(_cellPrefab, new Vector3(), Quaternion.identity);

        cellPrefab.transform.SetParent(matrixPrefab.transform, false);
        cellPrefab.GetComponent<Cell>().SetTrueNumber(_cellsGrid[indexRowNumbers][indexNumber].GetTrueNumber());
        cellPrefab.GetComponent<Cell>().SetBlock(_cellsGrid[indexRowNumbers][indexNumber].GetBlock());
    }
    private void PoolMatrix(Dictionary<int, GameObject[]> matrices)
    {
        for (int indexColumnMatrix = 0; indexColumnMatrix < matrices[0].Length; indexColumnMatrix++)
        {
            for (int indexRowMatrix = 0; indexRowMatrix < matrices.Count; indexRowMatrix++)
            {
                for (int indexRowNumbers = indexRowMatrix * matrices.Count; indexRowNumbers < indexRowMatrix * matrices.Count + matrices.Count; indexRowNumbers++)
                {
                    for (int indexNumber = indexColumnMatrix * matrices[0].Length; indexNumber < indexColumnMatrix * matrices[0].Length + matrices[0].Length; indexNumber++)
                    {
                        SpawnCell(matrices[indexRowMatrix][indexColumnMatrix], indexRowNumbers, indexNumber);
                    }
                }
            }
        }
    }
    private void RandomOpenCells(Dictionary<int, Cell[]> cellsGrid, string lvl)
    {
        int minCellsForOpening;

        switch (lvl)
        {
            case "easy":
                {
                    minCellsForOpening = 35;

                    break;
                }
            case "medium":
                {
                    minCellsForOpening = 32;

                    break;
                }
            case "hard":
                {
                    minCellsForOpening = 28;

                    break;
                }
            default:
                {
                    minCellsForOpening = 32;

                    break;
                }
        }

        while(GetOpenCountCells() < minCellsForOpening)
        {
            for (int indexRow = 0; indexRow < cellsGrid.Count; indexRow++)
            {
                if(GetOpenCountCells() > minCellsForOpening)
                {
                    break;
                }

                int countNumbersOpenInTheRow = Random.Range(4, 5);

                for (int indexNumber = 0; indexNumber < countNumbersOpenInTheRow; indexNumber++)
                {
                    int randomIndex = Random.Range(0, 8);

                    if (!cellsGrid[indexRow][randomIndex].GetBlock())
                    {
                        cellsGrid[indexRow][randomIndex].SetBlock(true);
                        SetOpenCountCells();
                    }
                }
            }
        }
    }
    private void SpawnNumberButtonList(List<GameObject> numberButtonList)
    {
        foreach (var item in numberButtonList)
        {
            GameObject numberButton = Instantiate(item);
            numberButton.transform.SetParent(GameObject.FindGameObjectWithTag("NumbersPanel").transform, false);
        }
    }
}
