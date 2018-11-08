#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int flag = 0, srch, low = 0, high = 4, middle = floor((high+low)/2);

    cout <<"Search: "<<endl;
    cin >>srch;

    while(low<=high){

        if(srch == arr[middle]){
            cout <<"Value "<<srch<<" found at index location "<<middle<<endl;
            flag = 1;
            break;
        }
        else if(srch < arr[middle]){
            high = middle-1;
            middle = floor((high+low)/2);
        }
        else if(srch > arr[middle]){
            low = middle+1;
            middle = floor((high+low)/2);
        }

    }

    if(flag == 0){
        cout <<"Value not found"<<endl;
    }



return 0;

}
