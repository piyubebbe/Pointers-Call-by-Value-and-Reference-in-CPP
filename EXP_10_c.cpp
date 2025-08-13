//Piyush Pawar
//24070123145
//B3

#include<iostream>
using namespace std;

void increment(int &s)
{
    s += 5000;
    cout << "Salary inside function: " << s << endl;
}

int main()
{
    int sal = 27000;
    increment(sal);
    cout << "Salary inside main: " << sal << endl;
    return 0;
}

/*
Output:
Salary inside function: 32000
Salary inside main: 32000
*/
