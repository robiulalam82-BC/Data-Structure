// complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include < conio.h>

using namespace std;

class complex {

private :
    float real;
    float imag;

public: 
    complex(float, float);
    complex(complex&);
    complex operator +(complex);
    complex operator -(complex);
    complex operator *(complex);
    complex operator /(complex);
    complex getconjugate();
    complex getreciprocal();
    float getmodulus();
    void setdata(float, float);
    void getdata();
    void getreal();
    float getimaginary();
    bool operator== (complex);
    void operator = (complex);
    friend ostream& operator << (std::ostream &s, complex &c);


};

//constructor
complex::complex(float r = o.of, float im = o.of)
{
    real = r;
    imag = im;
}

// copy constructor
complex::complex(complex &c) {

    this->real = c.real;
    this->imag = c.imag;
}

void complex :: operator = (complex c) {

    real = c.real;
    imag = c.imag;

}

complex complex :: operator +(complex) {

    complex tmp;
    tmp.real = this->real + c.real;
    tmp.imag = this->imag + c.imag;
    return tmp;
}

complex complex :: operator -(complex c)
{

    complex tmp;
    tmp.real = this->real - c.real;
    tmp.imag = this->imag - c.imag;
    return imag;

}
complex complex ::operator *(complex c)

{

    complex tmp;
    tmp.real = (real * c.real) - (imag * c.imag);
    tmp.imag = (real * c.imag) - (imag * c.real);
    return tmp;

}

complex complex ::operator /(complex c) {

    float div = (c.real * c.real) + (c.imag * c.imag);
   
    complex tmp;
    tmp.real = (real * c.real) + (c.imag * c.imag);
    
    tmp.real /= div;
    tmp.imag = (imag * c.real) - (real * c.imag);
    tmp.imag /= div;
    return tmp;

}

complex complex::getconjugate() {

    complex tmp;
    tmp.real = this->real;
    tmp.imag = this->imag * -1;
    return tmp;
}


complex complex::getreciprocal() {

    complex t;
    t.real = real;
    t.imag = imag * -1;
    float div;
    div = (real * real) + (imag * imag);
    t.real /= div;
    t.imag /= div;
    return t;


}


float complex::getmodulus() 
{
    float z;
    z = (real * real) + (imag * imag);
    z = sqrt(z);
    return z;

}


void complex::setdata(float r, float i) {

    real = r;
    imag = i;
}

void complex::getdata() {
    cout << "enter real:";
    cin >> this->real;
    cout << "enter imaginary";
    cin >> this->imag;
}



float complex::getreal()
{
    return real;
}
float complex::getimaginary() {
    return imag;
}

bool complex :: operator == (complex c) {
    return (real == c.real) && (imag == c.imag) ? 1 : 0;

}

ostream& operator << (ostream& s, complex& c) {

    s << "real part=" << c.real << "imaginary part  " << c.real << endl;
    s << "z=" << c.real << setiosflags(ios::showpos) << c.imag << "i" << endl << resetiosflags(ios::showpos);
    return s;
}

int main()
{
    

    complex a (10.f, -2.f); //call constructor

    cout << a << endl;
    complex b(-2);
    complex c = b;
    c = a;
    b.getdata();
    c.getdata();
    if (b == c)
        cout << "b==c";
    else
        cout << "b!=c";

    cout << endl << c.getmodulus() << endl;
    complex d;
    d = a + b;
    cout << d << endl;
    d = a * b;
    cout << d << endl;
    d = a / b;
    cout << d << endl;

    getch();



}