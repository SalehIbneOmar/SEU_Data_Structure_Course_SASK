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

    cout <<endl;
    cout <<"Matrix 2: "<<m2Row<<"X"<<m2Col<<endl;
    for(int row=0; row<m2Row; row++){
        for(int col=0; col<m2Col; col++){

            cout <<matrix2[row][col]<<" ";

        }
        cout <<endl;
    }

//===================================== Matrix addition code =====================================

    if(m1Row == m2Row && m1Col == m2Col){

        cout <<endl;
        cout <<"After adding matrix 1 and 2 :"<<endl;

        for(int row=0; row<m2Row; row++){
            for(int col=0; col<m2Col; col++){

                cout <<matrix1[row][col] + matrix2[row][col]<<" ";

            }
            cout <<endl;
        }

    }
    else{
        cout <<endl;
        cout <<"The dimension of Matrix 1 and Matrix 2 did not match, Matrix Addition can not be done!"<<endl;
    }


return 0;

}
