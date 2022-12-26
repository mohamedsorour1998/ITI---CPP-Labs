#include <iostream>

using namespace std;

//ancestor class
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

};
//Parent class
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

};
//child class
class SecondDerived : public Derived {

int d;

public:
//constructor
SecondDerived() : Derived() {
d=0;

}

SecondDerived(int n) : Derived(n) {
d=n;
}

SecondDerived(int x, int y, int z, int w): Derived(x, y,z) {
d=w;
}
//setter
void setD (int z){
    d=z;
}

//getter
int getD (){
   return d;
}

int productABCD (){

int productofABCD;
productofABCD = getA() * getB() * getC() * d;
return productofABCD;

}

};

int main()
{
    Base ancestor;
    Derived Parent;
    SecondDerived child;

    ancestor.setA(3);
    ancestor.setB(8);
    cout << "this is ancestor product: "<<ancestor.productAB() << endl;

    Parent.setA(3);
    Parent.setB(8);
    Parent.setC(6);
    cout << "this is Parent product: "<<Parent.productABC() << endl;

    child.setA(3);
    child.setB(8);
    child.setC(6);
    child.setD(5);
    cout << "this is child product: "<<child.productABCD() << endl;
    return 0;
}
