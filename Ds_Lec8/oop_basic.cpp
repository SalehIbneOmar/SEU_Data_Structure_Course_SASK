#include <iostream>
#include <cstring>
using namespace std;


//Class creation
class Basic{
    //Private access specifier
    private:
        int user_id;
        float user_balance;

    //Public access specifier
    public:
        string user_name;

        //Method creation to access private attributes
        //Setting user_id
        void setUser_id(int id){

            user_id = id;

        }

        //getting user_id
        int getUser_id(){

            return user_id;

        }

        //Setting user_balance
        void setUser_balance(float balance){

            user_balance = balance;

        }

        //getting user_balance
        float getUser_balance(){

            return user_balance;

        }


};


int main(){

    //Object creation of the class Basic
    Basic obj1;
    //Public attribute value assign
    obj1.user_name = "Saleh";

    obj1.setUser_id(12345);
    obj1.setUser_balance(1.020);

    //Public attribute call
    cout <<"User name is: "<<obj1.user_name<<endl;
    //Private attribute call with public methods
    cout <<"User id is: "<<obj1.getUser_id()<<endl;
    cout <<"User balance is: "<<obj1.getUser_balance()<<endl;



return 0;

}
