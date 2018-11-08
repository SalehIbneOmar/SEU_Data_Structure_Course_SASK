//Array data delete at preferred location program (dynamic)
#include <iostream>
using namespace std;

int main(){

    cout <<"Enter array size: "<<endl;
    int length;
    cin >>length;
    int arr[length];
    int values;

//================================= Basic part =================================

        cout <<endl;
        cout <<"Enter values: "<<endl;
        for(int x=0; x<length; x++){
            cin >>values;
            arr[x] = values;
        }

        cout <<endl;
        cout <<"Inserted values: "<<endl;
        for(int y=0; y<length; y++){
            cout <<"arr["<<y<<"] = "<<arr[y]<<endl;
        }


//================================= Delete part =================================

        cout <<endl;
        cout <<"Input array index location to delete a value: "<<endl;
        int location;
        cin >>location;

        //Condition to check if location is not greater or equal then proceed
        if(location<length){

            //****** Delete loop ******
            for(int i=location; i<length; i++){
                        arr[i] = arr[i+1];
            }

            //If true then proceed
            if(length){

                length--;

                    cout <<endl;
                    cout <<"After deletion: "<<endl;

                    //loop of printing after deletion
                    for(int y=0; y<length; y++){
                    cout <<"arr["<<y<<"] = "<<arr[y]<<endl;
                }
            }

        }
        else{
            cout <<endl;
            cout <<"********** No index found **********"<<endl;
        }




return 0;

}
