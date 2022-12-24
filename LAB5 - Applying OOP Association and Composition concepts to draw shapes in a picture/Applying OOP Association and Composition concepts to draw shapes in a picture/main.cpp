#include <iostream>

using namespace std;
//drawing a rectangular & circle & line using points in a picture
// point
class Point
{
    int x;
    int y;

public:
    Point()
    {
        int x=0;
        int y=0;
    }
    Point(int m, int n)
    {
// this = caller
        x=m;
        y=n;
    }
    void setX (int m)
    {
// this = caller
        x = m;
    }
    void setY (int n)
    {
        y = n;


    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;

    }
};
class Rect
{
    Point ul;
    Point lr;

public:
    Rect() : ul(), lr()
    {
        cout<<"At Rect Const"<<endl;
    }

    Rect(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2)
    {
        cout<<"At Rect Const"<<endl;
    }

//need to #include <graphics.h> lib to run
    /*
    void draw(){
        rectangle(ul.getX(), ul.getY(), lr.getX(), lr.getY());
    }
    */

};
class Circle
{
    Point center;
    int radius;

public:
    Circle() : center()
    {
        radius =0;
        cout<<"At Rect Circle"<<endl;
    }

    Circle(int m, int n, int r) : center(m, n)
    {
        radius =r;
        cout<<"At Rect Circle"<<endl;
    }

//need to #include <graphics.h> lib to run
    /*
    void draw(){
        circle(center.getX(), center.getY(), radius);
    }
    */
};
class Line
{
    Point start;
    Point end;
public:
   Line():start(), end()
     {
        cout<<"At line Const"<<endl;
    }

   Line (int xl, int yl, int x2, int y2) : start(xl,yl), end(x2,y2)
    {
        cout<<"At line Const"<<endl;
    }
//need to #include <graphics.h> lib to run
    /*
    void draw(){
        line(start.getX(), start.getY(), end.getX(), end.getY());
    }
    */
};
class Picture   //agrigation
{
    int cNum;
    int rNum;
    int lNum;

    Circle * pCircles;
    Rect * pRects;
    Line * pLines;

public:
//default constructor
    Picture()
    {
        cNum = 0;
        rNum = 0;
        lNum = 0;

        pCircles = NULL;
        pRects= NULL;
        pLines= NULL;
    }
//arguments constructor
    Picture(int cna, int rn, int cn,Circle *pC, Rect *pR, Line *pL)
    {
        cNum = cna;
        rNum = rn;
        lNum = cn;

        pCircles = pC;
        pRects= pR;
        pLines= pL;
    }
// set functions to set values that is not public
    void setLines(int ln, Line * lptr)
    {
        lNum = ln;
        pLines= lptr;

    }
    void setRects(int rn, Rect *rptr)
    {
        rNum = rn;
        pRects = rptr;
    }

    void setCircles(int cn, Circle *cptr)
    {
        cNum = cn;
        pCircles = cptr;
    }
// paint function
//need to #include <graphics.h> lib to run
    /*
    void paint()
    {
        int i;
        for(i=0; i<cNum; i++)
        {
            pCircles[i].draw();
        }

        for(i=0; i<rNum; i++)
        {
            pRects[i].draw();
        }

        for(i=0; i<lNum; i++)
        {
            pLines[i].draw();
        }
    }
    */





};

int main()
{
    Picture myPic;

    Circle cArr[3]= {Circle(50, 50, 50), Circle(200, 100, 100), Circle(420, 50, 30)};
    Rect rArr[2]= {Rect(30, 40, 170, 100), Rect(420, 50, 500, 300)};
    Line lArr[2]= {Line(420, 50, 300, 300), Line(40, 500, 500, 400)};

    myPic.setCircles(3, cArr);
    myPic.setRects(3, rArr);
    myPic.setLines(3, lArr);
    //need to #include <graphics.h> lib to run
   // myPic.paint();
    return 0;
}
