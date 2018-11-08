#include <iostream>
using namespace std;

int main(){

    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    //Initializing a new 2D array to store the transpose of given 2D matrix
    int transpose[3][3];


    cout <<"Given matrix: "<<endl;
       for(int row =0; row<3; row++){
            for(int col=0; col<3; col++){
                cout <<matrix[row][col]<<" ";
            }
            cout <<endl;
       }


    cout <<endl;
    cout <<"After Transpose: "<<endl;
       for(int row =0; row<3; row++){
            for(int col=0; col<3; col++){
                transpose[row][col] = matrix[col][row];
                cout <<transpose[row][col]<<" ";
            }
            cout <<endl;
       }

return 0;

}
