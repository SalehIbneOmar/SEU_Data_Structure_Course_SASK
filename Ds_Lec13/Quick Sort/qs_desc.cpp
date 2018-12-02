#include <iostream>
#include <cstdlib>
using namespace std;

//Partition function
int Partition(int arr[], int left, int right){
    int pivot = left;

    while(left<right){
        while(arr[left]>=arr[pivot]){
            left++;
        }
        while(arr[right]<arr[pivot]){
            right--;
        }
        if(left<right){
            swap(arr[left], arr[right]);
        }
    }

    swap(arr[pivot], arr[right]);

    return right;

}

void QuickSort(int arr[], int first, int last){
    int pivot_catch;
    if(first<last){
                      //Partition function call
        pivot_catch = Partition(arr, first, last);
        //QuickSort function Recursion
        QuickSort(arr, first, pivot_catch-1);
        QuickSort(arr, pivot_catch+1, last);
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
    cout <<"Input size: ";
    cin >>n;
    int arr[n];

    cout <<endl;
    cout <<"Enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    cout <<endl;
    cout <<"Before sorting:"<<endl;
    print(arr, n);

    //Quick Sort function call
    QuickSort(arr, 0, n-1);

    cout <<"\n"<<"\n";
    cout <<"After sorting in DESC using QuickSort:"<<endl;
    print(arr, n);
    cout <<endl;


return 0;

}
