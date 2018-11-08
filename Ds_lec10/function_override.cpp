#include <iostream>
using namespace std;
class Player{
public:
    void display(){
        cout << "A player";
    }
};
class Footballer : public Player{
public:
    void display(){
        cout << "A Footballer";
    }
};

int main(){
    Footballer obj;
    obj.display();

return 0;
}
