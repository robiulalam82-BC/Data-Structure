// convertword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
using namespace std;


void numberword1(int);
void numberword2(int);


int main()
{
    long unsinged; int number,tmp;
    int mult, i, digit, last_two, hundred, thousand, lakh, core;
    digit = last_two = hundred = thousand = lakh = core = 0;

    cout << "enter a number lesser than 99999999";
    cin >> number;

    if (number > 99999999) 
    {

        cout << "number is out of range";
        //getch();
        exit(0);

    }

    if (number == 0)
    {
        cout << "zero";
        
        //getch();
        exit(0);
    }

    tmp = number;

    digit = number % 10;   //Extract last two digits
    last_two = digit;
    number = number / 10;
    digit = number % 10;
    last_two = (digit * 10) + last_two;

    number = number / 10;  //Extract hundreds
    digit = number % 10;
    hundred = digit;

    number = number / 10; // Extract thousand
    digit = number % 10;
    lakh = digit;
    number = number / 10;
    digit = number % 10;
    lakh = (digit * 10) + lakh;

    number = number / 10;  //extract lakh
    digit = number % 10;
    lakh = digit;
    number = number / 10;
    digit = number % 10;
    lakh = (digit * 10) + lakh;


    number = number / 10;
    digit = number % 10;
    core = digit;
    number = number / 10;
    digit = number % 10;
    core = (digit * 10) + core;

    while (tmp != 0)
    {
        tmp = tmp / 10;
        digit++;

    }

    cout << "the number in words is :";


    if (digit >= 8) {

        numberword2(core);
        cout << "cores";
    }

    if (digit >= 6) 
    {
        if (lakh != 0)
        {

            numberword2(lakh);
            cout << "lakh";
        }
    }

    if (digit >= 4)
    {
        if (thousand != 0)
        {
            numberword2(thousand);
            cout << "Thousand";

        }
         
    }

    if (digit >= 3) 
    {
    
        if (hundred != 0)
        {
            numberword2(hundred);
            cout << "Hundred";
        }

    }
    

    numberword2(last_two);
    //getch();
    return 0;

    }

void numword1(int num) {

    switch (num)
    {

    case 0: break;
    case 1: cout << "one"; break;
    case 2: cout << "two"; break;
    case 3: cout << "three"; break;
    case 4: cout << "four"; break;
    case 5: cout << "FIVE"; break;
    case 6: cout << "six"; break;
    case 7: cout << "seven"; break;
    case 8: cout << "eight"; break;
    case 9: cout << "Nine"; break;
    case 10: cout << "ten"; break;
    case 11: cout << "eleven"; break;
    case 12: cout << "twelve"; break;
    case 13: cout << "thirteen"; break;
    case 14: cout << "fourteen"; break;
    case 15: cout << "fifteen "; break;
    case 16: cout << "sixteen"; break;
    case 17: cout << "Seventeen"; break;
    case 18: cout << "eighteen"; break;
    case 19: cout << "nineteen"; break;

    }
    return;
}
void numword2(int num) {


    if (num >= 90)
    {
        cout << "Ninety";
        numberword1(num - 90);

    }
    else if (num >= 80) {

        cout << "Eighty";
        numberword1(num - 80);
    }

    else if (num >= 70) {
        cout << "Seventy";
        numberword1(num - 70);
    }

    else if (num > 60)
    {
        cout << "sixty";
        numberword1(num - 60);
    }
    else if (num > 50) {

        cout << "fifty";
        numberword1(num - 50);

    }
    else if (num > 40) {
        cout << "FOURTY";
        numberword1(num - 40);
    }

    else if (num > 30) {
        cout << "thirty";
        numberword1(num - 30);

    }
    else if (num > 20) {
        cout << "twenty";
        numberword1(num - 20);
    }
}






