//Finding maximum/highest number from array program
#include <iostream>
using namespace std;

int main(){

  cout <<"Size of array"<<endl;
  int range;
  cin >> range;
  int arr[range];
  cout << endl;

        for(int n=0; n<range; n++){

            cout <<"Insert" << endl;
            cin >> arr[n];
            cout << endl;

        }

   //Initializing index 0 of array as maximum
   int maxm = arr[0];

        //Condition check loop
        for(int m=0; m<range; m++){

            if(arr[m] >= maxm){
                maxm = arr[m];
            }

        }
         cout <<endl;
         cout <<"The maximum number is = "<< maxm <<endl;

return 0;

}
