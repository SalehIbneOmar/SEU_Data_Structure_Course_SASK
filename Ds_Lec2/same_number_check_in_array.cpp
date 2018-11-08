//Same number check in array program
#include <iostream>
using namespace std;

int main(){

    cout <<"Assign array size"<<endl;
    int range;
    //Taking array size from the user
    cin >> range;
    //Array size assigning to the array var
    int arr[range];
    //Counter var
    int counts = 0;
    cout <<endl;

        //For loop for taking values of array from user
        for(int n=0; n<range; n++){
            cout <<"Insert:"<<endl;
            cin >>arr[n];
        }

    cout <<endl;
    cout <<"Which number you want to check?"<<endl;
    int check;
    //Taking the number that user wants to check
    cin >> check;

        //Condition check for loop, the counts var will increase automatically
        for(int m=0; m<range; m++){
            if(check == arr[m]){
                counts++;
            }
        }

        cout <<endl;
        cout <<check<<" Exists total "<<counts<<" Times"<< endl;


return 0;

}
