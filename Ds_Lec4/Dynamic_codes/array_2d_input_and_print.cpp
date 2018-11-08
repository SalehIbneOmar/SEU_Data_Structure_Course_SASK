#include <iostream>
using namespace std;

int main(){

    int row, col;
    cout <<"Input number of rows: "<<endl;
    cin >>row;
    cout <<"Input number of columns: "<<endl;
    cin >>col;
    int arr2D[row][col];


    for(int r=0; r<row; r++){
        cout <<endl;
        cout <<"Values for row "<<r+1<<endl;
        for(int c=0; c<col; c++){

            cin >>arr2D[r][c];
        }
    }


    cout <<endl;
    cout <<"This is a "<<row<<"X"<<col<<" matrix: "<<endl;
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){

            cout <<arr2D[r][c]<<" ";
        }
        cout <<endl;
    }


return 0;

}
