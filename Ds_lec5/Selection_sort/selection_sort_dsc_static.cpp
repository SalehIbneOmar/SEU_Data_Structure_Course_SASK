#include <iostream>
using namespace std;

int main(){

    cout <<"Selection sort program [DESC static]"<<endl;
    int arr[5] = {500, -500, 700, 0, 1}; // -500, 0, 1, 500, 700
    int arrSize = sizeof(arr)/sizeof(arr[0]);

//======================================= Basic Section =======================================
    cout <<endl;
    cout <<"Before sorting the number list is: "<<endl;
    for(int x=0; x<arrSize; x++){

        cout <<arr[x]<<" ";

    }
    cout <<endl;

//======================================= Selection sort section =======================================

    int temp, indexLocation, maxm;

    cout <<endl;
    cout <<"Iterations:"<<endl;
    //Iteration control loop
    for(int i=0; i<arrSize-1; i++){
        //Taking max as first index value of the array
        maxm = arr[i];
        //Taking the max index loctaion
        indexLocation = i;
        //Condition checking loop
        for(int j=i+1; j<arrSize; j++){
            //If the proceeding value from the array is greater than initializing max then continue
            if(arr[j]>maxm){
                //update max, this max will only work in this scope for condition check for this inner loop/second loop
                maxm = arr[j];
                //update the new max index location for swaping
                indexLocation = j;

            }

        }

        //Swap code, store previous max in temp
        temp = arr[i];
        //Update the old max location with new max by assigning the value of new max index location in the array
        arr[i] = arr[indexLocation];
        //Push the old max value in the new index location of the array
        arr[indexLocation] = temp;
            //Iteration viewing loop
            cout <<"Iteration "<<i+1<<" : ";
            for(int x=0; x<arrSize; x++){

            cout <<arr[x]<<" ";

        }
        cout <<endl;

    }

    cout <<endl;
    cout <<"After sorting the number list is: "<<endl;
    for(int x=0; x<arrSize; x++){

        cout <<arr[x]<<" ";

    }cout <<endl;



return 0;

}
