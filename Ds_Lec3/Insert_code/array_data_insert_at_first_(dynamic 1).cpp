//Add and item at the first of the array program (dynamic)
#include <iostream>
using namespace std;

int main(){

    cout <<"Enter the size of the array: "<<endl;
    int range;
    cin >>range;
    int length = range*2;
    int arr[length];

//============================== Basic part==============================

        cout <<endl;
        cout <<"Enter values in the array: "<<endl;

        for(int n=0; n<range; n++){

            cin >>arr[n];
        }

        cout <<endl;
        cout <<"Inserted values in the array: "<<endl;
        for(int m=0; m<range; m++){

            cout <<"arr["<<m<<"] = "<<arr[m]<<endl;
        }

//============================== Add new item at first part==============================

        for(int i=range; i>=0; i--){

            arr[i+1] = arr[i];
        }

        cout <<endl;
        cout <<"Enter new item at the first of the array: "<<endl;
        int newItem;
        cin >>newItem;

        arr[0] = newItem;

        cout <<endl;
        cout <<"After adding a new item at the first index of the array: "<<endl;
        for(int m=0; m<range+1; m++){

            cout <<"arr["<<m<<"] = "<<arr[m]<<endl;
        }



return 0;

}
