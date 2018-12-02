#include <iostream>
#include <math.h>
using namespace std;

//Sort and merge section
void Merge(int arr[], int first, int middle, int last){

    //Size of two divided array
    int n1 = (middle-first)+1;
    int n2 = (last-middle);
    //Two new array initialization
    int left[n1], right[n2];

    //Inserting values in the left array according to the size
    for(int i=0; i<n1; i++){
        left[i] = arr[first+i];
    }

    //Inserting values in the right array according to the size
    for(int j=0; j<n2; j++){
        right[j] = arr[middle+j+1];
    }

    //Initializing indexes, k depends on the first of each array
    int l=0, r=0, k=first;

    //Loop will run unit both sizes comes to an end
    while(l<n1 && r<n2){
        //insert value of left if true increment left and index of k
        if(left[l]<=right[r]){
            arr[k] = left[l];
            l++;
            k++;
        }
        //if false insert value of right and increment right and index of k
        else{
            arr[k] = right[r];
            r++;
            k++;
        }
    }

    /*after incrementing and assigning according to both l and r, there might be some left out elements
    because the previous loop will only run by matching r and l
    but the left or right elements might have more elements than each other,
    so these two loops are for those left outs plus those elements are already sorter because the previous loop
    takes only sorted elements.
    */
    while (l < n1){
        arr[k] = left[l];
        l++;
        k++;
    }

    while (r < n2){
        arr[k] = right[r];
        r++;
        k++;
    }

}

//Divide section
void MergeSort(int arr[], int first, int last){
    int middle;
        if(first<last){
            //Find middle in every call time
            middle = ((last+first)/2);
            //For left side of the array, here middle works as last
            MergeSort(arr, first, middle);
            //For right side of the array, here middle+1 works as last
            MergeSort(arr, middle+1, last);
            //Sorting part call in each recursion
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

    //MargeSort function call and initialize
    MergeSort(arr, 0, n-1);

    cout <<"\n"<<endl;
    cout <<"After sorting in ASC using MergeSort:"<<endl;
    print(arr, n);
    cout <<endl;

return 0;

}
