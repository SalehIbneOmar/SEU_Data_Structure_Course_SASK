#include <iostream>
using namespace std;

int main(){

    int row, col;
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

//============================= Diagonal part =============================
    cout <<endl;
    cout <<"Change the values of main diagonal"<<endl;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
             if(r==c){
                cin >>matrix[r][c];
             }
        }
    }

    cout <<endl;
    cout <<"Changed Diagonal Matrix: "<<endl;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){

            cout <<matrix[r][c]<<" ";
        }
        cout <<endl;
    }

return 0;

}
