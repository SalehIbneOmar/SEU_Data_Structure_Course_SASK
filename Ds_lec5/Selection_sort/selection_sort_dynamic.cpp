#include <iostream>
using namespace std;

int main(){

//============================================== Basic part ==============================================

    cout <<"Give array size: "<<endl;
    int arrSize;
    cin >>arrSize;
    int arr[arrSize];

    cout <<endl;
    cout <<"Input "<<arrSize<<" Values in the array"<<endl;

    for(int x=0; x<arrSize; x++){

        cin >>arr[x];

    }

    cout <<endl;
    cout <<"Before sorting"<<endl;
    for(int y=0; y<arrSize; y++){

        cout <<arr[y]<<" ";

    }
    cout <<endl;

//============================================== Selection sort part ==============================================

    char input;
    cout <<endl;
    cout <<"For Ascending type 'A'/'a' or Descending type 'D'/'d'"<<endl;
    cin >>input;

    if(input == 'A' || input == 'a'){

        int temp, minn, location;

        for(int i=0; i<arrSize-1; i++){

            minn = arr[i];
            location = i;

            for(int j=i+1; j<arrSize; j++){

                if(arr[j] < minn){

                    minn = arr[j];
                    location = j;

                }

            }

            temp = arr[i];
            arr[i] = arr[location];
            arr[location] =temp;

        }

        cout <<endl;
        cout <<"After sorting in ASC"<<endl;
        for(int z=0; z<arrSize; z++){

            cout <<arr[z]<<" ";

        }
        cout <<endl;

    }
    else if(input == 'D' || input == 'd'){

    int temp, maxm, location;

        for(int i=0; i<arrSize-1; i++){

            maxm = arr[i];
            location = i;

            for(int j=i+1; j<arrSize; j++){

                if(arr[j] > maxm){

                    maxm = arr[j];
                    location = j;

                }

            }

            temp = arr[i];
            arr[i] = arr[location];
            arr[location] =temp;

        }

        cout <<endl;
        cout <<"After sorting DESC"<<endl;
        for(int z=0; z<arrSize; z++){

            cout <<arr[z]<<" ";

        }
        cout <<endl;

    }
    else{

        cout <<endl;
        cout <<"Invalid request!"<<endl;

    }


return 0;

}
