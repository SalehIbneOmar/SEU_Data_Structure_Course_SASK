#include <iostream>
using namespace std;

int main(){

    int a=10, b=20;

    cout <<"Before swap the two numbers are: "<<a<<" and "<<b<<endl;

    int temp;

    temp = a;
    a = b;
    b= temp;

    cout <<"After swap the two numbers are: "<<a<<" and "<<b<<endl;


return 0;

}
