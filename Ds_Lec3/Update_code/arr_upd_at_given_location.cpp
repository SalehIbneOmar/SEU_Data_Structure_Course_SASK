#include <iostream>
using namespace std;

int main(){

    cout <<"Arr size: "<<endl;
    int length;
    cin >>length;
    int arr[length];

    cout <<endl;
    cout <<"Values: "<<endl;
    for(int n=0; n<length; n++){

        cin >>arr[n];
    }

    cout <<endl;
    cout <<"Inserted Values: "<<endl;
    for(int m=0; m<length; m++){

        cout <<"arr["<<m<<"] = "<<arr[m]<<endl;
    }

    cout <<endl;
    cout <<"Update location: "<<endl;
    int location;
    cin >>location;

    if(location<length){

        cout <<endl;
        cout <<"Update value: "<<endl;
        int updateValue;
        cin >>updateValue;

        arr[location] = updateValue;

        cout <<endl;
        cout <<"After update: "<<endl;
        for(int i=0; i<length; i++){

            cout <<"arr["<<i<<"] = "<<arr[i]<<endl;
        }
    }
    else{
        cout <<endl;
        cout <<"No index found to update"<<endl;
    }

return 0;
}
