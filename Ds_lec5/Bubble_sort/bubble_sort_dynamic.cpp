#include <iostream>
using namespace std;

int main(){

//========================================== Basic part ==========================================
    int arrSize;
    cout <<"Give array size: "<<endl;
    cin >>arrSize;
    int arr[arrSize];

    cout <<endl;
    cout <<"Enter "<<arrSize<<" Values:"<<endl;
    for(int x=0; x<arrSize; x++){

        cin >>arr[x];

    }

    cout <<endl;
    cout <<"Before sorting:"<<endl;

    for(int y=0; y<arrSize; y++){

        cout <<arr[y]<<" ";

    }
    cout <<endl;

//========================================== Algorithm part ==========================================

    char input;
    cout <<endl;
    cout <<"For Ascending order sorting type 'A'/'a' or Descending order sorting type 'D'/'d' "<<endl;
    cin >>input;

    if(input == 'A' || input == 'a'){

        int temp;

        for(int ite=0; ite<arrSize-1; ite++){

            for(int i=0; i<arrSize-ite-1; i++){

                if(arr[i] > arr[i+1]){

                    temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;

                }

            }

        }

        cout <<endl;
        cout <<"After sorting in Ascending order:"<<endl;
        for(int x=0; x<arrSize; x++){

            cout <<arr[x]<<" ";

        }
        cout <<endl;
    }
    else if(input == 'D' || input == 'd'){

        int temp;

        for(int ite=0; ite<arrSize-1; ite++){

            for(int i=0; i<arrSize-ite-1; i++){

                if(arr[i] < arr[i+1]){

                    temp = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = temp;

                }

            }

        }

        cout <<endl;
        cout <<"After sorting in Descending order:"<<endl;
        for(int x=0; x<arrSize; x++){

            cout <<arr[x]<<" ";

        }
        cout <<endl;
    }
    else{

        cout <<endl;
        cout <<"Invalid request!"<<endl;

    }

return 0;

}
