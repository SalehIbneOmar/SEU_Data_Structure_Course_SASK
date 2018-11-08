#include <iostream>
using namespace std;

int main(){

    int arr2D[5][4] = {{1, 2, 3, 10}, {4, 5, 6, 20}, {7, 8, 9, 30}, {1, 2, 3, 10}, {4, 5, 6, 20}};

    cout <<"Given matrix: "<<endl;

    for(int row=0; row<5; row++){
        for(int col=0; col<4; col++){

            cout <<arr2D[row][col]<<" ";
        }
        cout <<endl;
    }

    cout <<endl;
    cout <<"Odd Rows: "<<endl;
    for(int row=0; row<5; row++){

        if(row%2!=0){
            for(int col=0; col<4; col++){
                cout <<arr2D[row][col]<<" ";
            }
            cout <<endl;
        }

    }


return 0;

}
