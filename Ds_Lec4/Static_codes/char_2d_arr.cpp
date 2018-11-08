#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char arr[4][10] = {"Michael", "Joyner", "Lisa", "Alice"};
    int counter = 0;

    cout <<"Given character array is:"<<endl;
    for(int x=0; x<4; x++){
        cout <<arr[x]<<endl;
    }

    cout <<endl;
    cout <<"First Alphabets are:"<<endl;
    for(int x=0; x<4; x++){
        cout <<arr[x][0]<<endl;
    }


    cout <<endl;
    cout <<"Last Alphabets are:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<10; j++){
            if(arr[i][j] !='\0'){
                counter++;
            }
        }
        cout <<arr[i][counter-1]<<endl;
        counter = 0;
    }


return 0;

}