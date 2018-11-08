#include <iostream>
using namespace std;

int main(){

//================================== Basic part ==================================
    int s;
    cout <<"Input array size: ";
    cin >>s;
    int arr[s];

    cout <<"Enter "<<s<<" values in the array:"<<endl;
    for(int x=0; x<s; x++){
        cin >>arr[x];
    }

    cout <<endl;
    cout <<"Values entered:"<<endl;
    for(int x=0; x<s; x++){
        cout <<arr[x]<<" ";
    }
    cout <<endl;

//================================== Insertion sort part ==================================

    char input;
    cout <<endl;
    cout <<"Enter a/A for sorting in ascending order or d/D for descending order: "<<endl;
    cin >>input;

    if(input == 'a' || input == 'A'){

        for(int i=0; i<s; i++){

            int temp = arr[i];
            int l = i;

            while(l>0 && temp<arr[l-1]){
                arr[l] = arr[l-1];
                l = l-1;
            }

            arr[l] = temp;

        }

        cout <<endl;
        cout <<"After sorting in ASC"<<endl;
        for(int x=0; x<s; x++){
            cout <<arr[x]<<" ";
        }
        cout <<endl;

    }
    else if(input == 'd' || input == 'D'){

        for(int i=0; i<s; i++){

        int temp = arr[i];
        int l = i;

            while(l>0 && temp>arr[l-1]){
                    arr[l] = arr[l-1];
                    l = l-1;
            }

            arr[l] = temp;

        }

        cout <<endl;
        cout <<"After sorting in ASC"<<endl;
        for(int x=0; x<s; x++){
                cout <<arr[x]<<" ";
        }
        cout <<endl;

    }
    else{
        cout <<endl;
        cout <<"Invalid order"<<endl;
    }



return 0;

}
