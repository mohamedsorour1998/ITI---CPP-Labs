#include <iostream>

using namespace std;
class Stack
{
//atrubites
    int tos; //top of stack
    int sos; //size of stack
    int * st;//dynamic stack needs pointer
    static int counter;
// static: shared attributes among all objects from this class. ;
//means any object can change it's value and new value will be seen by other objects, must be must be initialized.
//The changing of the counter static variable will be done by the constructors (increment it) and destructor (decrements it).
// private means it needs a special getter/setter function to deal with it we call static member function
public:
//function to access static counter, must be static and declared publicly
    static int getCounter()
    {
        return counter;
    }
//consturctor to set size of stack by default value

    Stack (int n)
    {
        sos= n;
        st=new int[sos];
        tos =0;
        counter++;
        cout<<"this is stack object number: "<<counter<<endl;
    }
//destructor
    ~Stack ()
    {
        delete [] st; // delete array that st points to
        cout<<"This is the destructor"<<endl;
        counter--;
        cout<<"this is stack object number: "<<counter<<endl;
    }
    void push(int n)
    {
        if (tos == sos)
        {
            cout<<"stack is full"<<endl;
        }
        else
        {
            st[tos]=n;
            tos++;
        }
    }
    void pop()
    {
        int retVal;
        if (tos == 0)
        {
            cout<<"Stack is empty"<<endl;
            retVal = -1;
        }
        else
        {

            retVal = st[tos];
            tos--;

        }
    }
    void print()
    {
        int i=0;
        for (i=0; i<tos; i++)
        {
            cout<<st[i]<<endl;

        }
    }
};
//inizilization
int Stack::counter=0;
//main begins
int main()
{

    //5 is the default size of stack (sos)
    Stack s1(5);
   // cout<<s1.getCounter()<<endl;
    s1.push(5);
    s1.push(14);
    s1.push(13);
    s1.push(6);
    s1.push(4);
    s1.pop();
    s1.print();


    Stack s2(5);
    //cout<<s2.getCounter()<<endl;
    s2.push(5);
    s2.push(14);
    s2.push(13);
    s2.push(6);
    s2.push(4);
    s2.pop();
    s2.print();



    return 0;
}
