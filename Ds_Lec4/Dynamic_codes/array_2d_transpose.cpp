#include <iostream>
using namespace std;

int main(){

    int row, col, temp;
    cout <<"Enter row size: "<<endl;
    cin >>row;
    cout <<"Enter col size: "<<endl;
    cin >>col;

    int matrix[row][col];

//============================= Basic part =============================
    for(int r=0; r<row; r++){
     cout <<endl;
     cout <<"Enter column values for row "<<r+1<<endl;
        for(int c=0; c<col; c++){

            cin >>matrix[r][c];
        }
    }

    cout <<endl;
    cout <<"Matrix: "<<endl;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){

            cout <<matrix[r][c]<<" ";
        }
        cout <<endl;
    }

//============================= Transpose part =============================

    cout <<endl;
    cout <<"Transpose Matrix: "<<endl;
    if(row!=col || col!=row){
        temp = col;
        col = row;
        row = temp;
    }

    int transpose[row][col];

    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            transpose[r][c] = matrix[c][r];
            cout <<transpose[r][c]<<" ";
        }
        cout <<endl;
    }

return 0;

}
