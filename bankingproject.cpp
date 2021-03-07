// bankingproject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

using namespace std;

void punit(void);
void deposit(void);
void addrecord();
void delrecord();
void modrecord();
void disprecord();
void dispall();
void withdraw();
float w, z;

class account {

    int accountno, cls;
    char name[30], type;
    float deposit, withdraw;

public:
    account() {
        deposit = withdraw = 0;
    }
    int giveaccountno() {
        return accountno;
    }
    void getdata(int mrno) {

        accountno = mrno + 1;
        cout << "Account number ::";
        cout << accountno << " ";

        cout << "enter your name :: ";
        gets(name);
        cout << "  ";

        cout << "Enter type of account saving or current::";
        cin >> type;
        cout << "  ";

        cout << "enter the initial amount :: Rs";
        cin >> deposit;
        cout << "  ";

        void withdrawal(int m);
        {

            cout << "amount before withdrawal :: Rs" << deposit << " ";
            deposit = deposit - m;
            cout << "amount after withdrawal :rs" << deposit;
        }
        void deposital(int m);
        {
            cout << " amount before deposit :: Rs" << deposit << " ";
            deposit = deposit + m;
            cout << "amount after deposit :: $$" << deposit << " ";
        }
        void dispdata();
        {
            int scrnt = 0;
            if (scrnt == 1)
            {
                //clrscr();
                cout << "display all menu";
                scrnt = 0;
            }
            cout << "account number ::";
            cout << accountno;
            cout << "name of depositor ::";
            cout << name;
            cout << "type of account savings/current (c) :: ";
            cout << type;
            cout << "the balance" << deposit;
            scrnt++;

        }
    };

};




void main()
{
    int menuch;
    punit();

    do {
        //clrscr();
        textcolor(14);
        textbackground(1);
        cout << "MAIN MENU";

        cout << "1. new account";
        cout << "2. closed account";
        cout << "3. modify account";
        cout << "4. display an account";
        cout << "5. display all records ";
        cout << "6. withdraw amount";
        cout << "7. deposit amount";
        cout << "8. Exit" << "Enter your choice";
        cin >> menuch;

        switch (menuch)
        {
        case 1: addrecord(); break;
        case 2: delrecord(); break;
        case 3: modrecord(); break;
        case 4: disprecord(); break;
        case 5: dispall(); break;
        case 6: withdraw(); break;
        case 7: deposit(); break;

        }
    }

    while (menuch != 8);
}
void addrecord() {

    account obj_1, obj_2;
    fstream fout;
    fout.open("banking.txt, ios::in|ios::binary");
    if (!fout)
    {
        cout << "file opne error"; getch(); return;
    }

    int resize = sizeof(account);
    fout.seekg(0, ios::end);
    fout.seekg(-1 * resize, ios::cur);
    fout.read((char*)&obj_1, resize);
    int marno = obj_1.giveaccountno();
    fout.close();

    cout << "add menu";

    obj_2.getdata(marno);
    fout.open("banking.txt, ios::applois:: bianry");
    if (!fout)
    {
        cout << "file open error"; getch(); return;
    }
    fout.write((char*)&obj_2, resize);
    cout << " record added the databse " << "press any key to to continue";
    getch();
    fout.close();
}
void dispall(){

    account obj_3;
    fstream fout;
    int resize = sizeof(account);
    int countrec = 0;
    cout << "display all menu";
    fout.open("banking.txt", ios::in);
    if (!fout)
    {
        cout << "file open error"; getch();
        return;
    }

    while (fout.read((char*) &obj_3, resize))
    {
        obj_3.dispdata();
        countrec++;
        cout << "Press any key to next....";
        getch();
}
    cout << "End the file to all number of records" << countrec





]
}