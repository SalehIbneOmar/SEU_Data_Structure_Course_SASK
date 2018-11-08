//Insert data in an array at preferred location
#include <iostream>
using namespace std;

int main(){

    cout <<"Input array range: "<<endl;
    int range;
    cin >>range;
    int length = range*10;
    int arr[length];

//============================== Basic Part ==============================

        cout <<endl;
        cout <<"Enter values: "<<endl;
        int values;

        //Taking values in the array
        for(int x=0; x<range; x++){

            cin >>values;
            arr[x] = values;

        }

        cout <<endl;
        cout <<"Inserted values: "<<endl;

        //Printing inserted values
        for(int y=0; y<range; y++){

            cout <<"arr["<<y<<"] = "<<arr[y]<<endl;
        }

//============================== Insert new value at a preferred location ==============================

        int last = range;

        if(last == range){

        range++;

        cout <<endl;
        cout <<"Give the array index location to where you want to insert new data: "<<endl;

        //Taking preferred location
        int location;
        cin >>location;

            //Making space by moving values from given location by one
            for(int z=last; z>=location; z--){

                arr[z+1] = arr[z];

            }

        cout <<endl;
        cout <<"Enter the new value: "<<endl;

        //Taking new value
        int newValue;
        cin >>newValue;

        //Assigning new value to the location as index of the array
        arr[location] = newValue;

        cout <<endl;
        cout <<"After adding a new value at index location "<<location<<endl;

        //Printing updated array
            for(int p=0; p<range; p++){

                    cout <<"arr["<<p<<"] = "<<arr[p]<<endl;

            }

        }


return 0;

}
