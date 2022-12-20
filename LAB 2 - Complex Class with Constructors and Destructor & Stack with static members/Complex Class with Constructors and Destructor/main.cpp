#include <iostream>
#include <math.h>

using namespace std;
class Complex {

float real;
float imag;

public:
    // functions goes here
        float getimag ()
    {
        return imag;
    }
    void setimag(float i)
    {
        imag=i;
    }

    float getreal ()
    {
        return real;
    }
    void setreal(float r)
    {
        real = r;

    }

    void print ()
    {
        if (imag < 0)
        {
            cout<<real<<"-"<<fabs(imag)<<"i"<<endl;
        }
        else
        {

            cout<<real<<"+"<<fabs(imag)<<"i"<<endl;
        }
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.setreal(real+c.getreal()); //adding real
        temp.setimag(imag+c.getimag()); // adding imagenery
        return temp;
    }
    Complex sub(Complex c)
    {
        Complex temp;
        temp.setreal(real-c.getreal()); //adding real
        temp.setimag(imag-c.getimag()); // adding imagenery
        return temp;
    }

//constuctor set dafault values for attruibute, do not have a returning but can have parapeters, can not be called directly but with object();
Complex(){
real =0;
imag=0;
cout<<"This is the default constructor"<<endl;



}
Complex(float n){
real =imag=n;
cout<<"This is the overloaded constructor with 1 arrgum"<<endl;



}
Complex(float r, float i){
real =r;
imag=i;
cout<<"This is the overloaded constructor with 2 arrgum"<<endl;



}

//destructor can not have an argument or a return
~Complex(){

cout<<"this is object desructor"<<endl;

}




//set complex function

void setComplex (int r,int i){
imag=i;
real=r;

}



};






int main()
{
cout<<"this is constructor value"<<endl;
Complex c1(3,4);

c1.print();

cout<<"value of setter: "<<endl;
c1.setComplex(3,4);
c1.print();





    return 0;
}
