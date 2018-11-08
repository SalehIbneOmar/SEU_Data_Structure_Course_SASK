/*
Problem:
    The program has people name with ages.
    Write a the program that takes array as object
    and check if the ages of people under 30 to 40 then print those people's name.
*/

//------------ Solution ------------

#include <iostream>
using namespace std;

class Program{

    public:
        string name;
        int age;

};

int main(){

    int s;
    cout <<"Size"<<endl;
    cin >>s;

    Program obj[s];

    for(int i=0; i<s; i++){
        cout <<"Name ";
        cin >>obj[i].name;
        cout <<"Age ";
        cin >>obj[i].age;
    }

    cout <<endl;

    for(int i=0; i<s; i++){
        if(obj[i].age>=30 && obj[i].age<=40){
            cout <<"Name: "<<obj[i].name<<endl;
            cout <<"Age "<<obj[i].age<<endl;
        }
    }


return 0;

}
