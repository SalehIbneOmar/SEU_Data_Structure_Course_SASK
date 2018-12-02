#include <iostream>
#include <math.h>
using namespace std;

//Sort and merge section
void Merge(int arr[], int first, int middle, int last){

    int ls = middle-first+1;
    int rs = last-middle;
    int leftArr[ls], rightArr[rs];

    for(int i=0; i<ls; i++){
        leftArr[i] = arr[first+i];
    }

    for(int j=0; j<rs; j++){
        rightArr[j] = arr[middle+j+1];
    }

    int l=0, r=0, k=first;

    while(l<ls && r<rs){
        if(leftArr[l]>=rightArr[r]){
            arr[k] = leftArr[l];
            l++;
            k++;
        }
        else{
            arr[k] = rightArr[r];
            r++;
            k++;
        }
    }

    while(l<ls){
        arr[k] = leftArr[l];
          l++;
          k++;
    }

    while(r<rs){
        arr[k] = rightArr[r];
          r++;
          k++;
    }

}


//Divide section
void MergeSort(int arr[], int first, int last){
    int middle;
     if(first<last){
        middle = (first+last)/2;
        MergeSort(arr, first, middle);
        MergeSort(arr, middle+1, last);
        Merge(arr, first, middle, last);
     }

}

//Print function
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }

}

int main(){

    int n;
    cout <<"Enter size: ";
    cin >>n;
    int arr[n];

    cout <<endl;
    cout <<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    cout <<endl;
    cout <<"Before sorting:"<<endl;
    print(arr, n);

    MergeSort(arr, 0, n-1);

    cout <<"\n"<<endl;
    cout <<"After sorting in DESC using MergeSort:"<<endl;
    print(arr, n);
    cout <<endl;

return 0;

}
