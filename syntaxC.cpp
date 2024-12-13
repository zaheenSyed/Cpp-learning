/**
 * for C/C++ syntax
 * use this link: youtube video
*/

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;

    int rm=10%3; // the % operator gives the remainder
    cout << "The remainder of 10/3 is " << rm << endl;

    // increment and decrement
    int a=10;
    int b=++a; // pre increment
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;

    int c=10;
    int d=c++; // post increment
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;

    int e=10;

    if(e%2==0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }


    // understand the shape of the triangle

    int side1,side2,side3;
    cout << "Enter the sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if(side1==side2 && side2==side3)
    {
        cout << "The triangle is equilateral" << endl;
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        cout << "The triangle is isosceles" << endl;
    }
    else
    {
        cout << "The triangle is scalene" << endl;
    }

    
}

