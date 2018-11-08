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

//============================= Odd/Even Col value change part =============================
    int input;
    cout <<endl;
    cout <<"For changing values of Even column enter 0 or for even enter 1"<<endl;
    cin >>input;

    if(input == 0){
        cout <<endl;
        cout <<"Change the values of Even col "<<endl;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                 if(c%2==0){
                    cin >>matrix[r][c];
                 }
            }
        }

        cout <<endl;
        cout <<"Changed Matrix: "<<endl;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){

                cout <<matrix[r][c]<<" ";
            }
            cout <<endl;
        }
    }
    else if(input == 1){
        cout <<endl;
        cout <<"Change the values of Odd col "<<endl;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){
                 if(c%2!=0){
                    cin >>matrix[r][c];
                 }
            }
        }

        cout <<endl;
        cout <<"Changed Matrix: "<<endl;
        for(int r=0; r<row; r++){
            for(int c=0; c<col; c++){

                cout <<matrix[r][c]<<" ";
            }
            cout <<endl;
        }

    }
    else{
        cout <<endl;
        cout <<"Sorry Invalid choice"<<endl;
    }


return 0;

}
