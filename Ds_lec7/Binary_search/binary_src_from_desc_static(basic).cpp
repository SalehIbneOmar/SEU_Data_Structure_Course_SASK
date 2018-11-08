#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int arr[5] = {5, 4, 3, 2, 1};
    bool flag = false;
    int low = 0, high = 4, middle = floor( (high+low)/2 ), src;

    cout <<"Search: "<<endl;
    cin >>src;
    while(low<=high){
        if(src == arr[middle]){
            cout <<"Value "<<src<<" found at index location "<<middle<<endl;
            flag = true;
            break;
        }
        else if(src < arr[middle]){
            low = middle+1;
            middle = floor( (high+low)/2 );
        }
        else if(src > arr[middle]){
            high = middle-1;
            middle = floor( (high+low)/2 );
        }
    }

    if(flag == false){
        cout <<"Value not found!"<<endl;
    }


return 0;

}
