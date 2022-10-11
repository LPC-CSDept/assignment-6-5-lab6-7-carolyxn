//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)

void swaptwo(int &num1, int &num2);

void swap(int &num1, int &num2, int &num3)
{
    swaptwo(num1, num2);
    swaptwo(num1, num3);
}

void swaptwo(int &num1, int &num2)
{
    int a, b; 
    a = num1;
    b = num2; 
    num1 = b; 
    num2 = a; 
}