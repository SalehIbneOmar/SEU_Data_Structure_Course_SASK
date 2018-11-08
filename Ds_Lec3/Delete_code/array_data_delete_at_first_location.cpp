#include <iostream>
using namespace std;

int main(){


    int arr[6] = {1,2,3,4,5}, length = sizeof(arr)/sizeof(arr[0]);
    cout <<"Static array size: "<<length<<endl;

        cout <<endl;
        cout <<"Static array values: "<<endl;
        for(int x=0; x<length; x++){

            cout <<"arr["<<x<<"] = "<<arr[x]<<endl;
        }

        for(int y=0; y<length; y++){

            arr[y] = arr[y+1];
        }

        cout <<endl;
        cout <<"After deleting the first value: "<<endl;
        for(int z=0; z<length-1; z++){

            cout <<"arr["<<z<<"] = "<<arr[z]<<endl;
        }


return 0;

}
