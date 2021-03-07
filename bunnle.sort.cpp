// bunnle.sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void bubblesort(int A[], int n) {
    int temp;
    for (int k = 0; k < n - 1; k++) {
        for (int i = 0; i < n-k-1; i++)
        {
            if(A[i]) > A[i + 1])
{
            temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
};
        }
    }
}

int main()
{
    cout << bubblesort << "Hello World!\n";
}
