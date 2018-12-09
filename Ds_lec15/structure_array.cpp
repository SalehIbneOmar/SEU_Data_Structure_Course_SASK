#include <iostream>
using namespace std;

struct struct_arr{
    string name;
    int age;
};

int main(){

    int n;
    cout <<"How many object you want to create? :";
    cin >>n;

    struct_arr *obj[n];

    for(int i=0; i<n; i++){
        obj[i] = new struct_arr;
        cout <<"Name of object "<<i+1<<" : ";
        cin >>obj[i]->name;
        cout <<"Age of object "<<i+1<<" : ";
        cin >>obj[i]->age;
    }

    cout <<endl;
    cout <<"Informations:"<<endl;
    for(int i=0; i<n; i++){
        cout <<"Name: "<<obj[i]->name<<endl;
        cout <<"Age: "<<obj[i]->age<<endl;
        cout <<endl;
    }


return 0;

}
