//Array sum program
#include <iostream>
using namespace std;

int main(){

/*
    //=================== already assigned code ===================

    int arr[5];
    int total = 0;

        for(int n=1; n<=5; n++){
            arr[n] = n;
            total += arr[n];
        }

        cout << endl;
        cout <<"Sum = "<<total << endl;


 */

 //=================== Based on user assigned Range/Size of array  ===================

    int range;
    cout << "Assign the size of array" << endl;
    cin >> range;
    cout <<endl;
    int arr[range];
    int total = 0;

        for(int n=1; n<=range; n++){
            cout <<"Insert"<<endl;
            cin >> arr[n];

            total += arr[n];
        }

        cout <<endl;
        cout <<"Sum = "<<total<<endl;


 return 0;

}
