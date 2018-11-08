#include <iostream>
using namespace std;

int main(){


    int arr[10] = {1,2,3,4,5}, length = sizeof(arr)/sizeof(arr[0]);
    cout <<"Static array size: "<<length<<endl;

        cout <<endl;
        cout <<"Static array values: "<<endl;
        for(int x=0; x<length; x++){

            cout <<"arr["<<x<<"] = "<<arr[x]<<endl;
        }


        cout <<endl;
        cout <<"Input array location to delete a value: "<<endl;
        int location;
        cin >>location;

        if(location<length){

            for(int i=location; i<length; i++){
                arr[i] = arr[i+1];
            }

            cout <<endl;
            cout <<"After deletion: "<<endl;
            for(int y=0; y<length-1; y++){

                    cout <<"arr["<<y<<"] = "<<arr[y]<<endl;
            }

        }
        else{

            cout <<endl;
            cout <<"***** No index found! *****"<<endl;

        }


return 0;

}
