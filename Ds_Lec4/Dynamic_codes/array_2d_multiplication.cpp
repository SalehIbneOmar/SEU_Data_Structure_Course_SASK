#include <iostream>
using namespace std;

int main(){


    //===================================== Matrix 1 code =====================================
    int m1Row, m1Col;
    cout <<"Input row size for the matrix 1: "<<endl;
    cin >>m1Row;
    cout <<"Input column size for the matrix 1: "<<endl;
    cin >>m1Col;
    int matrix1[m1Row][m1Col];

    for(int row=0; row<m1Row; row++){
     cout <<endl;
     cout <<"Enter values in row "<<row+1<<" of matrix 1: "<<endl;
        for(int col=0; col<m1Col; col++){

            cin >>matrix1[row][col];

        }
    }

    //Unnecessary part but useful when try to understand
    cout <<endl;
    cout <<"Matrix 1: "<<m1Row<<"X"<<m1Col<<endl;
    for(int row=0; row<m1Row; row++){
        for(int col=0; col<m1Col; col++){

            cout <<matrix1[row][col]<<" ";

        }
        cout <<endl;
    }


//===================================== Matrix 2 code =====================================
    int m2Row, m2Col;
    cout <<endl;
    cout <<"Input row size for the matrix 2: "<<endl;
    cin >>m2Row;
    cout <<"Input column size for the matrix 2: "<<endl;
    cin >>m2Col;
    int matrix2[m2Row][m2Col];

    for(int row=0; row<m2Row; row++){
     cout <<endl;
     cout <<"Enter values in row "<<row+1<<" of matrix 2: "<<endl;
        for(int col=0; col<m2Col; col++){

            cin >>matrix2[row][col];

        }
    }

    //Unnecessary part but useful when try to understand
    cout <<endl;
    cout <<"Matrix 2: "<<m2Row<<"X"<<m2Col<<endl;
    for(int row=0; row<m2Row; row++){
        for(int col=0; col<m2Col; col++){

            cout <<matrix2[row][col]<<" ";

        }
        cout <<endl;
    }


//===================================== Multiplication code =====================================

 /*
    To perform matrix multiplication of two the column size of First matrix
    and the row size of second matrix needs to be same
 */

    if(m1Col == m2Row){

        cout <<endl;
        cout <<"After Multiplication: "<<endl;

        /* New matrix after multiplication will form a dimension by taking after Row size of first matrix
        and column size of second matrix */
        for(int row=0; row<m1Row; row++){
            for(int col=0; col<m2Col; col++){
              //Initializing the new matrix as result
              int result[row][col];
            //Keeping the values of new matrix 0
                    result[row][col] = 0;
                /* Since the Column size of first matrix and row size of second matrix is same
                then this for loop will run according to the col of matrix1/row of matrix2 */
                for(int n=0; n<m1Col; n++){
                    /* Here for matrix1 row will be fixed and n is acting as column so n will change for each rows available
                    and for matrix2 column will be fixed and n is acting as row so n will change for each columns available
                    */
                    result[row][col] = result[row][col] + (matrix1[row][n] * matrix2[n][col]);

                }
                cout <<result[row][col]<<" ";
            }
            cout <<endl;
        }


    }
    else{
        cout <<endl;
        cout <<"As per rule of matrix multiplication the Column size of Matrix 1 and Row size of Matrix 2 did not match"<<endl<<"**** Multiplication not possible ****"<<endl;
    }



return 0;

}
