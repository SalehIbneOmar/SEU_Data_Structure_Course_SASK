#include <iostream>
using namespace std;

struct structure{
    string name;
    int age;
    long long int mobileNumber;

};

int main(){

    structure *object = new structure;
    object->name = "Saleh";
    object->age = 22;
    object->mobileNumber = 8801611332774;

    cout <<object->name<<"\n"<<object->age<<"\n"<<object->mobileNumber<<endl;

return 0;

}
