#include <iostream>
using namespace std;

int main(){

    cout <<"Sorting Program Using Bubble Sort [DESC static]"<<endl;

    int arr[5] = {3, 2, 4, -2, -6};  // 4, 3, 2, -2, -6
    int arrSize = sizeof(arr)/sizeof(arr[0]);

//============================= Basic part =============================

    cout <<endl;
    cout <<"Before sorting the number serial is: "<<endl;
    for(int n=0; n<arrSize; n++){

        if(arr[n] != arr[4]){
         cout <<arr[n]<<", ";
        }
        else{
         cout <<arr[n]<<"";
        }

    }

    cout <<endl;

//============================= Algorithm part/Sorting part =============================

    int temp;
    cout <<endl;
    cout <<"Iterations: "<<endl;
    //Loop for number of iterations since there are 10 values that needs to be sorted so n-1 where n is size of array here array size is 10 so it will be 10-1 =9
    for(int ite=0; ite<arrSize-1; ite++){
        //For loop for sorting
        for(int i=0; i<arrSize-ite-1; i++){

            //Condition check if the preceding value is grater than the proceding value then sort the large value at the last
            if(arr[i] < arr[i+1]){
                //swap code
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;

            }

        }

         //Each iteration print
         cout <<"Iteration "<<ite+1<<" : ";
         for(int p=0; p<arrSize; p++){

                if(arr[p] != arr[4]){
                 cout <<arr[p]<<", ";
                }

                else{
                 cout <<arr[p]<<"";
                }

            }

        cout <<endl;
    }



    cout <<endl;
    cout <<"After sorting in descending order using bubble sort: "<<endl;
    //After Sorting Loop
    for(int m=0; m<arrSize; m++){

        if(arr[m] != arr[4]){
         cout <<arr[m]<<", ";
        }
        else{
         cout <<arr[m]<<"";
        }

    }

    cout <<endl;


return 0;

}
