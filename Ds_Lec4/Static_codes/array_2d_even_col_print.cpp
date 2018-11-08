#include <iostream>
using namespace std;

int main(){

    int arr2D[3][5] = {{1, 2, 3, 10, 100}, {4, 5, 6, 20, 200}, {7, 8, 9, 30, 300}};

    cout <<"Given matrix: "<<endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){

            cout <<arr2D[row][col]<<" ";
        }
        cout <<endl;
    }

    cout <<endl;
    cout <<"Even columns: "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<5; col++){

            if(col%2!=0){
                continue;
            }
          cout <<arr2D[row][col]<<" ";
        }
        cout <<endl;
    }


return 0;

}
