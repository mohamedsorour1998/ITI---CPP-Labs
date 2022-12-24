#include <iostream>

using namespace std;
//drawing a rectangular & circle & line using points in a picture
// point
class Point {
int x;
int y;

public:
Point() {
int x=0;
int y=0;
}
Point(int m, int n) {
// this = caller
x=m;
y=n;
}
void setX (int m){
// this = caller
x = m;
}
void setY (int n){
y = n;


}
int getX(){
return x;
}
int getY(){
return y;

}
};
class Rect {
Point ul;
Point lr;

public:
Rect() : ul(), lr(){
    cout<<"At Rect Const"<<endl;}

Rect(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2){
    cout<<"At Rect Const"<<endl;}

//need to #include <graphics.h> lib to run
/*
void draw(){
    rectangle(ul.getX(), ul.getY(), lr.getX(), lr.getY());
}
*/

};
class Circle {
Point center;
int radius;

public:
Circle() : center(){
    radius =0;
    cout<<"At Rect Circle"<<endl;}

Circle(int m, int n, int r) : center(m, n){
    radius =r;
    cout<<"At Rect Circle"<<endl;}

//need to #include <graphics.h> lib to run
/*
void draw(){
    circle(center.getX(), center.getY(), radius);
}
*/
};
class Line{
Point start;
Point end;
public:
Line():start(), end() {
    cout<<"At line Const"<<endl;}

Line (int xl, int yl, int x2, int y2) : start(xl,yl), end(x2,y2){
    cout<<"At line Const"<<endl;}
//need to #include <graphics.h> lib to run
/*
void draw(){
    line(start.getX(), start.getY(), end.getX(), end.getY());
}
*/
};
class Picture {

public:



};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
