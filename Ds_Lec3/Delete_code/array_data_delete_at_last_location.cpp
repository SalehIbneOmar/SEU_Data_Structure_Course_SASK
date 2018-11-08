#include <iostream>
using namespace std;

int main(){


    int arr[5] = {1,2,3,4,5}, length = sizeof(arr)/sizeof(arr[0]);
    cout <<"Static array size: "<<length<<endl;

        cout <<endl;
        cout <<"Static array values: "<<endl;
        for(int x=0; x<length; x++){

            cout <<"arr["<<x<<"] = "<<arr[x]<<endl;
        }

        for(int y=length-1; y<length; y++){

            arr[y] = 0;
        }

        cout <<endl;
        cout <<"After deleting the first value: "<<endl;
        for(int z=0; z<length; z++){

            cout <<"arr["<<z<<"] = "<<arr[z]<<endl;
        }


return 0;

}
