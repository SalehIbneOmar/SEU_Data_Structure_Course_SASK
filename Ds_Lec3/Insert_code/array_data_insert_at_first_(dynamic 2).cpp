//Add and item at the first of the array program (dynamic)
#include <iostream>
using namespace std;

int main(){

    cout <<"How many data you want to store in the array? "<<endl;
    int range;
    cin >>range;
    int arr[range*10];


//=================================== Basic part ===================================

        cout <<endl;
        cout <<"Enter values in the array: "<<endl;

        //Loop for taking values in the data for the first time
        for(int n=0; n<range; n++){

            cin >>arr[n];
        }

        cout <<endl;
        cout <<"Inserted values: "<<endl;
        //Loop for printing first time inserted data
        for(int m=0; m<range; m++){

            cout <<"arr["<<m<<"] = "<<arr[m]<<endl;
        }


//=================================== Adding new items from first part ===================================

        cout <<endl;
        cout <<"How many new data you want to insert again?(Max 80 data)"<<endl;
        //New input range
        int input;
        cin >>input;

        if(input !=0){

            cout <<endl;
            cout <<"Enter the "<<input<<" new values:"<<endl;

            //Loop for moving the arrays from the first according to the new input range
            for(int i=range; i>=0; i--){

                arr[i+input] = arr[i];
            }

            //New item taking var
            int newItem;
            //Loop for new item insertion
            for(int x=0; x<input; x++){
                cin >>newItem;
                arr[x] = newItem;
            }

        }


        cout <<endl;
        cout <<"After adding "<<input<<" new values (starting from the first index): "<<endl;

        //Loop for printing updated values in the array
        for(int m=0; m<range+input; m++){

            cout <<"arr["<<m<<"] = "<<arr[m]<<endl;
        }


return 0;

}
