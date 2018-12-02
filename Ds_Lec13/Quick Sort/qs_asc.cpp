#include <iostream>
#include <cstdlib>
using namespace std;

//Partitioning function
int partition_section(int arr[], int left, int right){

    //Assigning pivot element
    int pivot = left;

    //Left index of array is always less than right index
    while(left<right){
        //Move left
        while(arr[left]<=arr[pivot]){
            left++;
        }
        //Move right
        while(arr[right]>arr[pivot]){
            right--;
        }
        //swap left with right after the braking of while loops
        if(left<right){
            swap(arr[left], arr[right]);
        }

    }

     //swap initial pivot element with right, because right is the actual pivot place
     swap(arr[pivot], arr[right]);

 //return right, this value will decide the next starting point and ending point depending on function call
 return right;
}

//QuickSort function
void quick_sort(int arr[], int first, int last){

    int p;
    if(first<last){
        //Take the returned value of right
        p = partition_section(arr, first, last);
        //start 0 but last is pivot point-1
        quick_sort(arr, first, p-1);
        //start pivot point+1 but last is n-1
        quick_sort(arr, p+1, last);
    }
}

//Print elements in array function
void print(int arr[], int n){

    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }

}

//Main Function
int main(){

//Array size
     int n;
     cout <<"Size: ";
     cin >>n;
     int arr[n];

     //Array input taking loop
     cout <<"Elements: "<<endl;
     for(int i=0; i<n; i++){
        cin >>arr[i];
     }
     cout <<"\n";

     //Before sorting array print loop
     cout <<"Before sorting:"<<endl;
     print(arr, n);
     cout <<"\n"<<"\n";

     //Quick sort function call
     quick_sort(arr, 0, n-1);

     //After sorting array print loop
    cout <<"After sorting in ASC [QuickSort]:"<<endl;
    print(arr, n);
    cout <<"\n";


return 0;


}


