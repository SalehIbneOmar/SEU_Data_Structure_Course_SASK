//2D array basic code static
#include <iostream>
using namespace std;

int main(){

    int arr2D[3][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9},};

       cout <<"2D-Array Basic Presentation"<<endl;
       for(int row=0; row<3; row++){

            for(int col=0; col<3; col++){

                cout <<arr2D[row][col]<<" ";
            }

            cout <<endl;
       }

return 0;

}
