#include <iostream>
#include <math.h>
using namespace std;

int main(){

//================================== Basic Part ==================================
    int arrSize;
    cout <<"Enter array size:"<<endl;
    cin >>arrSize;
    int arr[arrSize];

    cout <<endl;
    cout <<"Enter values:"<<endl;
    for(int x=0; x<arrSize; x++){
        cin >>arr[x];
    }

    cout <<endl;
    cout <<"Values are:"<<endl;
    for(int x=0; x<arrSize; x++){
        cout <<arr[x]<<" ";
    }
    cout <<endl;

//================================== Sorting Part ==================================

    int temp;

    for(int ite=0; ite<arrSize-1; ite++){
        for(int i=0; i<arrSize-ite-1; i++){
            if(arr[i] < arr[i+1]){

                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
    }

    cout <<endl;
    cout <<"After sorting in DESC:"<<endl;
    for(int x=0; x<arrSize; x++){
        cout <<arr[x]<<" ";
    }
    cout <<endl;

//================================== Binary Search Part ==================================

    int low=0, high=arrSize-1, middle=floor((low+high)/2);
    bool flag = false;

    int src;
    cout <<endl;
    cout <<"Search:"<<endl;
    cin >>src;

    while(low<=high){

        if(src == arr[middle]){
            cout <<endl;
            cout <<"Value "<<src<<" found at index location "<<middle<<endl;
            flag = true;
            break;
        }
        else if(src < arr[middle]){
            low = middle+1;
            middle=floor((low+high)/2);
        }
        else if(src > arr[middle]){
            high = middle-1;
            middle=floor((low+high)/2);
        }

    }

    if(!flag){
        cout <<endl;
        cout <<"Value not found"<<endl;
    }


return 0;

}
