#include <iostream>
using namespace std;

class Try{

private:
    string name;
    int age;
public:
    int id;

    void myFunc(string n, double k){
        name = n;
    }

    string myFunc(){
        return name;
    }

    void myFunc(int a){
        age = a;
    }


};

int main(){

    Try obj;

    obj.myFunc("Overload example", 2.2);
    cout <<obj.myFunc();

return 0;

}

