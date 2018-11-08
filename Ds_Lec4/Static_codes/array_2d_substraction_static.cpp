#include <iostream>
using namespace std;

int main(){

    int matrix1 [2][2] = {{1, 2}, {3, 4}};
    int matrix2 [2][2] = {{9, 8}, {7, 6}};
    int result  [2][2];


    cout <<"Matrix 1: "<<endl;
    for(int m1Row=0; m1Row<2; m1Row++){
        for(int m1Col=0; m1Col<2; m1Col++){

            cout <<matrix1[m1Row][m1Col]<<" ";
        }
        cout <<endl;
    }


    cout <<endl;
    cout <<"Matrix 2: "<<endl;
    for(int m2Row=0; m2Row<2; m2Row++){
        for(int m2Col=0; m2Col<2; m2Col++){

            cout <<matrix2[m2Row][m2Col]<<" ";
        }
        cout <<endl;
    }


    cout <<endl;
    cout <<"After subtraction of Matrix 1 and Matrix 2: "<<endl;
    for(int row=0; row<2; row++){
        for(int col=0; col<2; col++){

            result[row][col] = matrix1[row][col] - matrix2[row][col];
            cout <<result[row][col]<<" ";
        }
        cout <<endl;
    }



return 0;

}
