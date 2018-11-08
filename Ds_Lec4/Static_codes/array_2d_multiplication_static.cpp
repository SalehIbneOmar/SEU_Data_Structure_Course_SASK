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
    cout <<"After multiplication of Matrix 1 and Matrix 2: "<<endl;

    //Loop for row of first matrix
    for(int row=0; row<2; row++){
        //Loop for col of second matrix
        for(int col=0; col<2; col++){
           //Initializing primary result as 0
           result[row][col] = 0;
           /*This n variable will work as col for matrix 1 where row is will be fixed for two iterations and n/Col will change,
                  n will also work as row for matrix 2 where col is fixed for two iterations and n/Row will change
           */
            for(int n=0; n<2; n++){
                 result[row][col] += matrix1[row][n] * matrix2[n][col];

            }
            //Result values after the end of the loop
            cout <<result[row][col]<<" ";
        }

        cout <<endl;
    }



return 0;

}
