#include <iostream>

using namespace std;
//drawing a rectangular & circle & line using points in a picture

class GeoShape{   //GeoShape will be parent to Circle, Rect, Triangle, and ansastor for square

protected:
float dim1;
float dim2;

public:
    GeoShape(){
    dim1 = dim2 =0;
    cout<<"in parent constructor"<<endl;

    }
    GeoShape(float w){
   dim1 = dim2 = w;
    cout<<"in parent constructor with argument"<<endl;

    }
        GeoShape(float x, float y){
   dim1 = x;
   dim2 = y;
    cout<<"in parent constructor with 2 argument"<<endl;

    }

    void setDim1 (int a){
        dim1 = a;
    }
    float getDim1 (){
        return dim1;
    }
    void setDim2 (int a){
        dim2 = a;
    }
    float getDim2 (){
        return dim2;
    }
};
class Rect:public GeoShape
{

public:
   Rect():GeoShape()
     {
        cout<<"At Rect Const"<<endl;
    }

    Rect(float b, float h):GeoShape(b,h)
    {
        cout<<"At Rect Const"<<endl;
    }

     float calculateArea(){
return  dim1 * dim2;
    }

};
class Circle: private GeoShape
{
public:
    Circle() :GeoShape()
    {
        cout<<"At Circle Const"<<endl;
    }

    Circle(int m) : GeoShape(m)
    {
        cout<<"At Circle Const"<<endl;
    }

      void setRadius (int a){
        dim1 = dim2 =a;
    }
    float getRadius (){
        return dim1;
    }
         float calculateArea(){
return  dim1 * dim2 * 22/7;
    }

};
class Triangle:public GeoShape
{
public:
   Triangle():GeoShape()
     {
        cout<<"At Triangle Const"<<endl;
    }

    Triangle(float b, float h):GeoShape(b,h)
    {
        cout<<"At Triangle Const"<<endl;
    }

    float calculateArea(){
return 0.5 * dim1 * dim2;
    }

};
class Square: private Rect
{
public:
    Square() :Rect()
    {
        cout<<"At Square Const"<<endl;
    }

    Square(int m) : Rect(m,m)
    {
        cout<<"At Square Const"<<endl;
    }

      void setSquareDim (int a){
        dim1 = dim2 =a;
    }
    float getSquareDim (){
        return dim1;
    }
         float calculateArea(){
return  Rect::calculateArea();
    }

};

int main()
{
    GeoShape shape(5,6);

Circle c1;
       // cout<<c1.getDim1()<<endl;
       //c1.setDim1(5);
       // cout<<<<endl;
        cout<<c1.getRadius()<<endl;

Square s1;
       // cout<<s1.getDim1()<<endl;
       // cout<<s1.setDim1(5)<<endl;
        s1.setSquareDim(5);



    return 0;
}
