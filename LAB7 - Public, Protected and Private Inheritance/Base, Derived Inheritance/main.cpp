#include <iostream>

using namespace std;

//Parent class
class Base {
    protected:
int a;
int b;
public:
//constructor
Base() {
a=b=0;

}

Base(int n) {
a=b=n;

}

Base(int x, int y) {
a=x;
b=y;
}
//setter
void setA (int z){
    a=z;
}
void setB (int u){
    b=u;
}
//getter
int getA (){
   return a;
}
int getB (){
   return b;
}
int productAB (){

int productofAB;
productofAB = a * b;
return productofAB;

}
//function overridding, e.g. 2 function in diffrent classes having same signture.
int calculateSum(){
return a+b;
}

};
//child class
class Derived : public Base{
int c;
public:
//constructor
Derived() : Base() {
c=0;

}

Derived(int n) : Base(n) {
c=n;
}

Derived(int x, int y, int z): Base(x, y) {
c=z;
}
//setter
void setC (int z){
    c=z;
}

//getter
int getC (){
   return c;
}

int productABC (){

int productofABC;
productofABC = getA() * getB() * c;
return productofABC;

}
//function overridding, e.g. 2 function in diffrent classes having same signture.
int calculateSum(){
return getA()+getB()+c;
}

};


int main()
{
    Base Parent;
    Derived child;

    Parent.setA(3);
    Parent.setB(8);
    cout << "this is Parent calculateSum: "<<Parent.calculateSum() << endl;
    // each object will call the function in his class.
    child.setA(3);
    child.setB(8);
    child.setC(6);
    cout << "this is child calculateSum: "<<child.calculateSum() << endl;
    // each object will call the function in his class.
    return 0;
}
