#include <iostream>
#include <math.h>

using namespace std;


class Complex
{
    //attrubites
    float imag;
    float real;
public:
    // function to work with attriubute of classe's object.
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
};


int main()
{

    Complex c1;
    Complex c2;
    Complex resualt;
    float r1;
    float r2;
    float img1;
    float img2;

    cout<<"tell me the first real number: "<<endl;
    cin>>r1;
    c1.setreal(r1); // make real of c1 = r1 (user input)
    cout<<"Enter the first imaginary number : "<<endl;
    cin>>img1;
    c1.setimag(img1);
    cout<<"Enter the second real number : "<<endl;
    cin>>r2;
    c2.setreal(r2);
    cout<<"Enter the second imaginary number : "<<endl;
    cin>>img2;
    c2.setimag(img2);

    cout<<"the first number is"<<endl;
    c1.print();
    cout<<"the second number is"<<endl;
    c2.print();

    resualt=c1.add(c2);
    cout<<"The value of addition is : "<<endl;
    resualt.print();

    resualt=c1.sub(c2);
    cout<<"The value of substraction  is : "<<endl;
    resualt.print();


    return 0;
}
