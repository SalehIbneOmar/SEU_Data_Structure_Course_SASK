#include <iostream>
using namespace std;

int main(){

    int arr[5] = {4, 2, 3, 5, 1}; //5, 4, 3, 2, 1
    cout <<"Before sorting:"<<endl;
    for(int x=0; x<5; x++){
        cout <<arr[x]<<" ";
    }
    cout <<endl;

//============================ Insertion sort part ============================

        for(int i=1; i<5; i++){

            int temp = arr[i];
            int l = i;

            while(l>0 && temp >arr[l-1]){
                arr[l] = arr[l-1];
                l = l-1;
            }

            arr[l] = temp;

        }

    cout <<"After sorting in descending order:"<<endl;
    for(int x=0; x<5; x++){
        cout <<arr[x]<<" ";
    }



return 0;

}
