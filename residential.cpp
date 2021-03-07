// residential.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class address{

    char name[20];
    char houseno[10];
    char street[20];
    char city[20];
    long int pin;

public :
  
    
    /*  address() {
    
        strcpy(name, "unspecified");
        strcpy(houseno, "NA");
        strcpy(street, "NA");
        strcpy(city, "NA");
        pin = 0;
    }
    */


    void put_data() 
    
    {
        cout << "Enter the name of the person:";
        cin.getline(name, 19);

        cout << "Enter house number:";
        cin.getline(houseno, 9);

        cout << "enter the house number";
        cin.getline(street, 19);

        cout << "enter the city ";
        cin.getline(city, 19);

        cout << "enter the pin code";
        cin >> pin;
    
    }

    void get_data() {
    
    
        cout << "***************************" << endl;
        cout << "Name" << name << endl;
        cout << "House no" << houseno << endl;
        cout << "street" << street << endl;
        cout << "city " << city << endl;
        cout << "PIN" << pin << endl;
        cout << "********************************";
    }


};




int main()
{
    address obj;
    obj.put_data();
    obj.get_data();
    //getch();
}

