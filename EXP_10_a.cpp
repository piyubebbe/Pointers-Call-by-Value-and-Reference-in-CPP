//Piyush Pawar
//24070123145
//B3

#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int swap;
    swap = x;
    x = y;
    y = swap;
    cout << "Value of a is: " << x << endl;
    cout << "value of b is: " << y << endl;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << "Value of a is: " << a << endl;
    cout << "value of b is: " << b << endl;
    return 0;
}


/*
Output:
Value of a is: 20
value of b is: 10
Value of a is: 10
value of b is: 20
*/