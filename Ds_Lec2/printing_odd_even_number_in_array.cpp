//Array odd/even number test/printing program
#include <iostream>
using namespace std;

int main(){

    int arr[10];
//======================= Odd number printing section =======================
cout<<"Odd numbers within array"<<endl;

    for(int n=1; n<=10; n++){
        arr[n] = n;

        if(arr[n]%2==0){
        continue;
        }

        cout <<arr[n]<<endl;
    }

cout<<endl;

//======================= Even number printing section =======================
cout<<"Even numbers within array"<<endl;

    for(int m=1; m<=10; m++){
        arr[m] = m;

        if(arr[m]%2!=0){
            continue;
        }

        cout <<arr[m]<<endl;
    }

return 0;

}
