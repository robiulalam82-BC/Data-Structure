// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;

class Int {

    int var;


public :
    Int() {
        var = 0;
    }

    //overload constructor
    Int(int a) {
        var = a;
    }
    int add(Int b) {
        var += b.var;
    //    a.add(b);
      //  a = a + b;

        return(var);

    }

    void disp() {
    
        cout << var;
    }

};

//Do not foeget
int main( void)
{
    
    Int a = 12;
    Int b = 10;
    a.disp();
    cout << "a+b" << a.add(b);
   // getch();
    
    cout << "Hello World!\n";
}

