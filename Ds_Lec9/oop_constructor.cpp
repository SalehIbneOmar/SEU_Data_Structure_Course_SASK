#include <iostream>
using namespace std;

class Demo{

    private:
        float width;
        float height;

    public:
        Demo(float x, float y){
            width = x;
            height = y;
        }

        float getArea(){
            return width*height;
        }


};

int main(){

    Demo obj(11.923, 12.517);

    cout <<obj.getArea();

return 0;

}
