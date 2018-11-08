//Input in array using for loop program
#include <iostream>
using namespace std;

int main(){
    //Range var declare
    int range;
    cout << "Input the range of numbers/elements of array :" << endl;
    //Taking range from user
    cin >> range;
    cout << endl;
    //Range of the array will also be the size of the array
    int arr[range];
        //Array values input loop
        for(int x=0; x<range; x++){
            cout << "Insert:" << endl;
            cin >> arr[x];
        }

        cout << endl;
        cout << "Values that you inserted in your array" << endl;
        //Inserted values in array output loop
        for(int y=0; y<range; y++){
            cout << "arr["<<y<<"]"<<"=> "<<arr[y] << endl;
        }


 return 0;

}
