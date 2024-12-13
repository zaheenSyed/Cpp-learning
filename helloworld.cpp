/**my first code
    * @file helloworld.cpp
    * @brief This is my first code
    * @details This is my first code
    * @author ZaheenSyed
    * @date 2022-12-29
    * @version 1.0
*/
#include <iostream> // header file library

using namespace std; // namespace

int main()
{// main function
    int x=10;
    int y=3;
    int z=x+y;
    std::cout << "Hello World" << std::endl; // when defined namespace std; then we can use cout and endl without std::
    cout << "The sum of x and y is " << z << endl;//endl is used to print in new line


    // variable
    float annSal;
    cout << "Enter your annual salary: ";
    cin >> annSal;
    float msal=annSal/12;
    cout << "Your monthly salary is " << msal << endl;
    cout << "the size of float is "<< sizeof(float) << endl;
    
    //asci character
    char ch='A';
    cout << "The ASCII value of " << ch << " is " << int(ch) << endl;
    

}
