// publication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

using namespace std;


class publication
{

    char title[30];
    float price;

public: 
    
    void getdata() {

    cout << "Enter the title:";
    cin >> title;

    cout << "Enter the price";
    cin >> price;

}
    
    void putdata() 
    {
      
          cout << "The title is " << title << endl; 
              cout << "price is " << price << endl;
      }
};


class sales
{

    float s1, s2, s3;
public: 
    void getdata() 
{
    cout << "enter the first month of sale:";
    cin >> s1;
    cout << "enter the second month of sale:";
    cin >> s2;
    cout << "enter the third month od sale";
    cin >> s3;

}

    void putdata() 
    {

          cout << "sale in the first month $" << s1 << endl;
          cout << "sale in the second month $ " << s2 << endl;
          cout << "sale in the third month $" << s3 << endl;
      }

};


//class bokk : private publicaton, private sales)

class book : private publication, private sales
{

    int pages;

public:
    void getdata()

    {

        cout << "Book details";
        publication::getdata();
        sales::getdata();
        cout << "enter the number of pages";
        cin >> pages;

    }

    void putdata()
    {
        cout << "Book details";
        cout << "Number of the pages:" << pages << endl;
        sales::putdata();

    }
};


class tape : private publication, private sales {

    float time;

public:
    void getdata() {
        publication::getdata();
        sales::getdata();
        cout << "enter the time length of the casette";
        cin >> time;
    };


    void putdata()
    {

        cout << "Tape details";
        publication::putdata();
        cout << "time length" << time << endl;
        sales::putdata();
    }

};




int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.getdata();
    t.putdata();
}























