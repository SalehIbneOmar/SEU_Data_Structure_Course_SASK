#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int srch;
    bool flag= false;

    cout <<"Search :"<<endl;
    cin >>srch;

    for(int i=0; i<10; i++){

        if(srch == arr[i]){
            cout <<"Value found at index location "<<i<<endl;
            flag = true;
            break;
        }

    }

    if(flag == false){
        cout <<"Value not found"<<endl;
    }


return 0;

}
