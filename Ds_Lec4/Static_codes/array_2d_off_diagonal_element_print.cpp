#include <iostream>
using namespace std;

int main(){

    int arr2D[4][4] = { {1, 2, 3, 1}, {4, 5, 6, 2}, {7, 8, 9, 3}, {5, 7, 1, 4} };

    cout <<"Given matrix: "<<endl;
    for(int row=0; row<4; row++){
        for(int col=0; col<4; col++){
            cout <<arr2D[row][col]<<" ";
        }
        cout <<endl;
    }

    cout <<endl;
    cout <<"Main Diagonal elements: "<<endl;

    for(int row=0; row<4; row++){
        for(int col=0; col<4; col++){
            if(row != col){
                cout <<arr2D[row][col]<<" ";
            }
            else{
                cout <<"   "; //Three space after skipping main diagonal elements
            }
        }
        cout <<endl;
    }


return 0;

}
