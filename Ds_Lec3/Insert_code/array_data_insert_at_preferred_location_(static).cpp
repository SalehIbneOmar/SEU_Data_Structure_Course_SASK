#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5}, length = sizeof(arr)/sizeof(arr[0]);
    cout <<"Static array size is: "<<length<<endl;
    int last = 0;


        cout <<endl;
        cout <<"Existing array values: "<<endl;
        for(int n=0; n<length; n++){

            if(arr[n] != 0 ){
                last++;
            }

            cout <<"arr["<<n<<"] = "<<arr[n]<<endl;
        }

        cout <<endl;
        cout <<"Provide array index location to insert new data: "<<endl;
        int location;
        cin >>location;

        for(int m=last; m>=location; m--){

            arr[m+1] = arr[m];
        }

        cout <<endl;
        cout <<"Enter new value at the index location "<<location<<endl;
        int newValue;
        cin >>newValue;
        arr[location] = newValue;


        cout <<endl;
        cout <<"After inserting a new value at location "<<location<<endl;
        for(int p=0; p<length; p++){

            cout <<"arr["<<p<<"] = "<<arr[p]<<endl;
        }



return 0;

}
