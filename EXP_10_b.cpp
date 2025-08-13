//Piyush Pawar
//24070123145
//B3

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
    cout << "Value of a is: " << *x << endl;
    cout << "value of b is: " << *y << endl;
}

int main()
{
    int a = 5, b = 2;
    swap(&a, &b);
    cout << "Value of a is: " << a << endl;
    cout << "value of b is: " << b << endl;
    return 0;
}

/*
Output:
Value of a is:0x61ff0c
value of b is:0x61ff08
Value of a is:2
value of b is:5
*/