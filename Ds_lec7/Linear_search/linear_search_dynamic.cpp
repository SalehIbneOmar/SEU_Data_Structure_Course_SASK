#include <iostream>
using namespace std;

int main(){

    int sze;
    cout <<"Enter array size :"<<endl;
    cin >>sze;
    int arr[sze], srch;
    bool flag = false;

    cout <<endl;
    cout <<"Enter values in array :"<<endl;

    for(int i=0; i<sze; i++){
        cin >>arr[i];
    }

    cout <<endl;
    cout <<"Search :"<<endl;
    cin >>srch;
    for(int s=0; s<sze; s++){
        if(srch == arr[s]){
            cout <<"Value "<<srch<<" found at index location "<<s<<endl;
            flag =true;
        }
    }

    if(flag == false){
        cout <<"Value not found!"<<endl;
    }



return 0;

}
