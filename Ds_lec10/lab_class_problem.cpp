#include <iostream>
using namespace std;

class p{

    private:
        int age;

    public:
        string name;

        void setAge(int a){
            age = a;
        }

        int getAge(){
            return age;
        }

};


int main(){
    int s;
    cout <<"Size"<<endl;
    cin >>s;
    p obj[s];
    cout <<endl;

    for(int i=0; i<s; i++){
        cout <<"Name ";
        cin >>obj[i].name;
        int age;
        cout <<"Age ";
        cin >>age;
        obj[i].setAge(age);
    }

    cout <<endl;

    int index=0, older = obj[0].getAge();
    for(int i=0; i<s; i++){
        if(older < obj[i].getAge()){
            older = obj[i].getAge();
            index = i;
        }

    }

    cout <<obj[index].name<<" is older"<<endl;



return 0;

}
