//Add an extra new data at the end of the array program (Dynamic)
#include <iostream>
using namespace std;

int main(){

    cout <<"Insert array length: "<<endl;
    int range;
    cin >>range;
    int length = range*10;
    int arr[length];
    cout <<endl;
    cout <<"Enter values in the array: "<<endl;


//======================================== Basic Part ========================================

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


//======================================== Adding values at the end part ========================================

        //New index init
        int newIndex = range;
        //if true then continue
        if(newIndex == range){

            cout<<endl;
            cout<<"How many data you want to insert again?"<<endl;
            //New data input range
            int input;
            cin >>input;
            //New values var
            int newValues;

            cout<<endl;
            cout <<"Enter "<<input<<" new values in the array"<<endl;

            //For loop for inserting new values
            for(int x=newIndex; x<newIndex+input; x++){
                cin >>newValues;
                arr[x] = newValues;
            }

            cout <<endl;
            cout <<"After adding "<<input<<" new values at the end: "<<endl;

            //For loop for printing new values
            for(int y=0; y<range+input; y++){

                cout <<"arr["<<y<<"] = "<<arr[y]<<endl;

            }

        }


return 0;

}
