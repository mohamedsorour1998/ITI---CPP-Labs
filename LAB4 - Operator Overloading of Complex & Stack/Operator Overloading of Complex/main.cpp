#include <iostream>
#include <math.h>

using namespace std;
class Complex
{

    float real;
    float imag;

public:
    // starts operator over loading:
// overloading for the + operator, Complex is the argument e.g. left of the oprender
    /*Complex operator +(Complex c){
    Complex b;
    b.real = real + c.real;
    b.imag = imag + c.imag;
    return b;

        }*/
// overloading for the - operator, Complex is the argument e.g. left of the oprender
    /*
    Complex operator -(Complex c){
    Complex b;
    b.real = real - c.real;
    b.imag = imag - c.imag;
    return b;

    }*/
// overloading for the + operator, float is the argument e.g. left of the oprender
    /*
    Complex operator +( float x){

    Complex b;
    b.real = real + c;
    b.imag = imag ;
    return b;


    }
    */
// overloading for the + & - operator, float is the argument and also c1, there is no this
    /*
    friend Complex operator +( float x, Complex c);
    friend Complex operator -( float x, Complex c);
    */
// overloading for the == operator so it returns 0 or 1
    /*
        int operator==(Complex c)  //c is z
        {

            if (real == c.real && imag == c.imag)
            {
                return 1;
            }
            else
            {
                return 0;
            }

        }
    */

// overloading for the += operator, Complex is the argument e.g. left of the oprender , c1 = c1+c2
/*
    Complex operator +=(Complex c)
    {
        real = real + c.real;
        imag = imag + c.imag;
        return *this;

    }*/
// overloading for the -= operator, Complex is the argument e.g. left of the oprender , c1 = c1+c2
/*
    Complex operator -=(Complex c)
    {
        real = real - c.real;
        imag = imag - c.imag;
        return *this;

    }*/

// overloading for the ++prefix operator, Complex is the argument e.g c3=++c1 increment real part
/*
Complex operator ++(){
real ++;
return *this;
}
*/
// overloading for the postfix++ operator, Complex is the argument e.g c3=c1++ increment real part
/*
Complex operator ++(int){
Complex temp = *this;
real ++;
return temp;

}
*/
// overloading for the --prefix operator, Complex is the argument e.g c3=--c1 decrement real part
/*
Complex operator --(){
real --;
return *this;
}
*/
// overloading for the postfix-- operator, Complex is the argument e.g c3=c1-- decrement real part
/*
Complex operator --(int){
Complex temp = *this;
real --;
return temp;

}
*/

//overloading for the float operator to return real only
// no return type for operator as it automatically know type it casting to
operator float(){
return real;
}

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
    Complex()
    {
        real =0;
        imag=0;
        cout<<"This is the default constructor"<<endl;



    }
    Complex(float n)
    {
        real =imag=n;
        cout<<"This is the overloaded constructor with 1 arrgum"<<endl;



    }
    Complex(float r, float i)
    {
        real =r;
        imag=i;
        cout<<"This is the overloaded constructor with 2 arrgum"<<endl;



    }

//destructor can not have an argument or a return
    ~Complex()
    {

        cout<<"this is object desructor"<<endl;

    }




//set complex function

    void setComplex (int r,int i)
    {
        imag=i;
        real=r;

    }



};

// defining the frindes functions out of scope
/*
Complex operator +( float x, Complex c){

Complex b;
b.real = x + c.real;
b.imag = c.imag;
return b;

}*/
/*
Complex operator -( float x, Complex c){

Complex b;
b.real = x - c.real;
b.imag = c.imag;
return b;

}
*/




int main()
{


    Complex c1(5,4);
    Complex c2(3,4);
    Complex c3;
//c3 = c1 + c2;
//c3 = c1 - c2;
//c3 = c1 +5;
//c3 = 5 + c1;
//c3 = 5 - c1;
/*if( c1 == c2){
cout<<"c1 = c2"<<endl;
}
else {
cout<<"c1 != c2"<<endl;
}*/

/* c1+=c2; // e.g c1 = c1 + c2
cout<<"this is c1 value"<<endl;
c1.print();*/

/* c1+=c2; // e.g c1 = c1 - c2
cout<<"this is c1 value"<<endl;
c1.print();*/

//c3=++c1;
//c3=c1++;
//c3=--c1;
//c3=c1--;
cout<<"this is c1 value before float casting e.g. the real part & imag: " <<endl;
c1.print();
cout<<"this is c1 value after float casting e.g. the real part only: "<< (float) c1<<endl;
/*
cout<<"this is c3 value"<<endl;
c3.print();
*/







    return 0;
}
