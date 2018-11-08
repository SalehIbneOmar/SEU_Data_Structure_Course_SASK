//Add an extra new data at the end of the array program (Dynamic)
#include <iostream>
using namespace std;

int main(){

    cout <<"Insert array length: "<<endl;
    int range;
    cin >>range;
    int length = range*2;
    int arr[length];
    cout <<endl;
    cout <<"Enter values in the array: "<<endl;


//============================ Basic Part ============================

        //Loop for taking data for the first time into array
        for(int n=0; n<range; n++){

            cin >>arr[n];

        }

        cout <<endl;
        cout <<"Elements in array: "<<endl;

        //loop for printing first time inserted data in the array
        for(int m=0; m<range; m++){

            cout <<"arr["<<m<<"]"<<" = "<<arr[m]<<endl;

        }


//============================ New data insertion part ============================


        //Initializing new index2
        int newIndex = range;
        //New item var
        int newItem;

        //Condition check
        if(newIndex == range){

            //If true increase range by one
            range++;

            cout <<endl;
            cout <<"Insert a new data at the end of the array: "<<endl;

            //New item input
            cin >>newItem;
            //Assigning the new item to the new index
            arr[newIndex] = newItem;

            cout <<endl;
            cout <<"After adding a new data at the end of the array: "<<endl;

                //Printing after the new insertion at the end of the array
                for(int p=0; p<range; p++){

                    cout <<"arr["<<p<<"]"<<" = "<<arr[p]<<endl;
                }
        }
        else{
            cout <<endl;
            cout <<"Error occurred! Check the code again."<<endl;
        }


return 0;

}
