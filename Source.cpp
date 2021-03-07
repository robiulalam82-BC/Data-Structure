#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month, period;
    void season(int);
    int printmonth(int);


    while (cin >> month) {
        // "please! Enter the month of the year\n";
        if (month == 8)
            break;
        period = printmonth(month);
        season(period);
    }
}
    int printmonth(int month)
    {
        string word[12] = { "jan", "feb", "march", "april", "may", "june" , "july", "august", "september", "Octber","novenmer", "December" };
        int season;
 
        if (month >= 1 && month <= 12)
            cout << word[month - 1];
        else
            cout << "error";
     
        if (month == 1 || month == 2 || month == 12)
            season = 1;
        else if (month >= 3 && month <= 5)
            season = 2;
        else if (month >= 6 && month <= 8)
            season = 3;
        else if (month >= 9 && month <= 11)
            season = 4;
        else
            season = 0;
        return season;
    }
    void season(int period) {
        switch (period)
        {
        case 1: cout << " winter \n"; break;
        case 2: cout << " spring\n"; break;
        case 3: cout << "summer\n"; break;
        case 4: cout << " fall\n"; break;

        default: "error\n";
           
        }
    }
