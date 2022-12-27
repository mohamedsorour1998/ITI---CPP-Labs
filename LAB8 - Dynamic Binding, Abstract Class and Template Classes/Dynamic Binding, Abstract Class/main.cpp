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
    virtual float calculateArea(){
    return 0;

    }
};
class AbstractGeoShape{   //AbstractGeoShape will be an abstract class e.g.
    //function in it will be w/o implementation and will be virtual,
    // and other class can inherit from it, but we can not take an object from it
    //can have pointer from it to it's child
    //when inheritance from abstract, the child must implement all the pure virtual functions of his base


    virtual float calculateArea();

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
class Circle: public GeoShape
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
class Square: public Rect
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
//stand alone function sumOfAreas which takes 3 parameters as pointers from type GeoShape
float sumAreas (GeoShape *p1, GeoShape *p2, GeoShape *p3){
return p1->calculateArea() +p2->calculateArea() + p3->calculateArea() ;

}
int main()
{
    GeoShape shape(5,6);
    GeoShape *pc;
    GeoShape *pr;
    GeoShape *pt;
    GeoShape *ps;
    Circle c(10);
    Rect r( 30,40);
    Triangle t(100,150);
    Square s(60);


        pc=&c;
    cout<<"i am calculating the area for Circle: "<<pc->calculateArea()<<endl;
        pr=&r;
    cout<<"i am calculating the area for Rect: "<<pr->calculateArea()<<endl;
        pt=&t;
    cout<<"i am calculating the area for Triangle: "<<pt->calculateArea()<<endl;
        ps=&s;
    cout<<"i am calculating the area for Square: "<<ps->calculateArea()<<endl;

    cout<<"i am calculating the sum of areas for Triangle,Rect,Square : "<<sumAreas(&t, &r, &s)<<endl;


//taking an object from abstruct class:

 // AbstractGeoShape obj1; not allowed


/*
Circle c1;
       // cout<<c1.getDim1()<<endl;
       //c1.setDim1(5);
       // cout<<<<endl;
        cout<<c1.getRadius()<<endl;

Square s1;
       // cout<<s1.getDim1()<<endl;
       // cout<<s1.setDim1(5)<<endl;
        s1.setSquareDim(5);
*/


    return 0;
}
