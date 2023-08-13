#include <iostream>
#include <memory>
#include <vector>

#include "init.hpp"

void requestDataMatriz(int columns, int rows, const std::unique_ptr<int* []>& matriz){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout<<"Insert a number for de row "<<i<<" and column "<<j;
            std::cin>>matriz[i][j];
        }
    }
}

void requestDataResults(const std::unique_ptr<int []>& listResults, int numResults){
    for (int i = 0; i < numResults; ++i) {
        std::cout<<"Insert a result number "<<i+1;
        std::cin>>listResults[i];
    }
}

int getMultDown(int index, int size, const std::unique_ptr<int* []>& matriz){
    int resultMult = 1;

    /*
        {
            {1, -2, -3},
            {-4, 2, 1},
            {5, -1, 3},
            {1, -2, -3},
            {-4, 2, 1},
        }

        1, 2, 3 [0][0], [1][1], [2][2] 5-2
        -4, -1, -3 [1][0], [2][1], [3][2] 5-1-> 4
        5, -2, 1 [2][0], [3][1], [4][2] 5

        
    */
    if (index == 0)
    {
       for (int i = index; i < size; i++)
        {
            resultMult *= matriz[i][i];
        } 
    }else{
        for (int i = index; i < size; i++)
        {
            resultMult *= matriz[i][i-index];
        }
    }
    
    return resultMult;
}

int whileHorizontallX(int index, int size, const std::unique_ptr<int* []>& matriz){
    int resultMult = 1;

    /*
        {
            {1, -2, -3},
            {-4, 2, 1},
            {5, -1, 3},
            {1, -2, -3},
            {-4, 2, 1},
        }

        -3, 2, 4 [0][2], [1][1], [2][0] 
        1, -1, 1 [1][2], [2][1], [3][0] 
        3, -2, -4 [2][2], [3][1], [4][0] 

    */

    int indexRev = 0;
    for (int i = size; i >= index ; i--)
    {
        resultMult *= matriz[i][indexRev];
        indexRev++;
    }
        
    
    return resultMult;
}

void fillMatriz(
    const std::unique_ptr<int* []>& matrizMain, 
    const std::unique_ptr<int* []>& matrizToFill,
    int columns, int rows
    ){

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrizToFill[i][j] = matrizMain[i][j];
        }
        
    }

}

void plusRowsMatriz(const std::unique_ptr<int* []>& matriz, int columns, int rows){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matriz[i+rows][j] = matriz[i][j];
        }
        
    }
}

void printMatriz(const std::unique_ptr<int* []>& matriz, int columns, int rows){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout<<matriz[i][j];
        }
        std::cout<<"\n";
        
    }
}

int getSumUp(const std::unique_ptr<int* []>& matriz){
    int resultSumUp = 0;
    int index2 = 3-1;

    for (int i = 0; i < 3; i++)
    {
        auto resultMultUp = getMultDown(i, 5-index2, matriz);
        resultSumUp += resultMultUp;
        index2--;
    }

    return resultSumUp;
}

int getSumDown(const std::unique_ptr<int* []>& matriz){
    int resultSumDown = 0;
    int index3 = 3-1;

    for (int i = 0; i < 3; i++)
    {
        auto resultMultDown = whileHorizontallX(i, index3, matriz);
        resultSumDown += resultMultDown;
        index3++;
    }

    return resultSumDown;
}

int findMainDeterminant(int columns, int rows, const std::unique_ptr<int* []>& matriz){
    std::unique_ptr<int* []> matrizClone(new int* [rows+2]);

    for (int i = 0; i < rows+2; i++)
    {
        matrizClone[i] = new int[columns];
    }

    fillMatriz(matriz, matrizClone, columns, rows);
    plusRowsMatriz(matrizClone, columns, rows);

    auto resultSumUp = getSumUp(matrizClone);
    auto resultSumDown = getSumDown(matrizClone);

    return resultSumUp-resultSumDown;
}

int getEvaluateOfVariable(
        int columns,
        int rows,
        int index,
        const std::unique_ptr<int* []>& matriz,
        const std::unique_ptr<int []>& listResults,
        int numResults,
        int mainDeterminant
        ){
    std::unique_ptr<int* []> matrizClone(new int* [rows+2]);

    for (int i = 0; i < rows+2; i++)
    {
        matrizClone[i] = new int[columns];
    }

    fillMatriz(matriz, matrizClone, columns, rows);
    for (int i = 0; i < numResults; ++i) {
        matrizClone[i][index] = listResults[i];
    }
    plusRowsMatriz(matrizClone, columns, rows);

    auto resultSumUp = getSumUp(matrizClone);
    auto resultSumDown = getSumDown(matrizClone);
    auto resultEvaluate = resultSumUp-resultSumDown;

    return resultEvaluate/mainDeterminant;
}


void init(int matrizGUI[][3], int listResults[3]){
    int rows = 3;
    int columns = 3;

    std::unique_ptr<int*[]> matrizMain(new int*[rows]);
    std::unique_ptr<int []> listResultsMain(new int[rows]);

    for (int i = 0; i < rows; i++)
    {
        matrizMain[i] = new int[columns];
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizMain[i][j] = matrizGUI[i][j];
        }
        
    }
    
    for (int y = 0; y < 3; y++)
    {
        listResultsMain[y] = listResults[y];
    }
    

    //requestDataMatriz(columns, rows, matrizMain);
    //requestDataResults(listResultsMain, rows);
    
    auto determinatMain = findMainDeterminant(columns, rows, matrizMain);
    std::vector<int> listEvaluates;
    
    for (int y = 0; y < rows; ++y) {
        auto determinateOfVariable = getEvaluateOfVariable(columns, rows, y, matrizMain, listResultsMain, rows, determinatMain);
        listEvaluates.push_back(determinateOfVariable);
    }

    std::cout<<"Results \n";
    for (int listEvaluate : listEvaluates) {
        std::cout<<listEvaluate<<"\n";
    }

    std::cout<<"main resultante \n";
    std::cout<<determinatMain<<"\n";
    
}