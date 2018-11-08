#include <iostream>
using namespace std;

int main(){

    int arr[7] = {1,2,3,4,5,6}, temp;

    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int arrHalfSize = arrSize/2;

    cout <<"Before swap: "<<endl;
    for(int q=0; q<arrSize; q++){

        cout <<arr[q]<<" ";

    }

//======================== Swap code part ========================

    int m= arrSize-1;

    for(int n=0; n<arrHalfSize; n++){

            temp = arr[n];

            arr[n] = arr[m];

            arr[m] = temp;

            m--;

    }

    cout <<endl;
    cout <<"After swap: "<<endl;
    for(int q=0; q<arrSize; q++){

        cout <<arr[q]<<" ";

    }


return 0;

}
