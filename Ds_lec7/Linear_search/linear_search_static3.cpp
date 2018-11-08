#include <iostream>
using namespace std;

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 5, 7, 8, 9, 1};
    int srch, counter = 0;

    cout <<"Search :"<<endl;
    cin >>srch;

    for(int i=0; i<10; i++){

        if(srch == arr[i]){
            counter++;
        }

    }

    if(counter !=0 ){

        cout <<"Value "<<srch<<" exists "<<counter<<" times"<<endl;

    }
    else{

        cout <<"No value exists"<<endl;

    }

return 0;

}
