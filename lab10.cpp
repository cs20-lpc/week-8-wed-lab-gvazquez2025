#include "ArrayStack.hpp"
#include <iostream>

using namespace std;

/*******************************************************************************
 * Function prototypes
*******************************************************************************/

double gRec(unsigned);
double gStack(unsigned);

/*******************************************************************************
 * Description:
 * Starting point of the program. Calls two functions in two different ways:
 * recursive and iterative. The outputs for both function calls should match
 * exactly.
*******************************************************************************/

int main() {
    unsigned startValue = 0;

    cout << "Enter the starting value for i: ";
    cin  >> startValue;

    cout << "\nRecursive:\n";
    cout << gRec(startValue) << endl;

    cout << "\nIterative:\n";
    cout << gStack(startValue) << endl;

    return 0;
}

/*******************************************************************************
 * Recursive function
*******************************************************************************/

double gRec(unsigned i) {
    if (i == 0) {
        cout << "Base case!\n";
        return 3.2;
    }
    
    return gRec(i - 1) + 1.1;
}

/*******************************************************************************
 * Iterative stack-based version (NO recursion)
*******************************************************************************/

double gStack(unsigned i) {
    ArrayStack<unsigned> s;

    // Simulate recursive calls
    while (i > 0) {
        s.push(i);
        i--;
    }

    // Base case
    cout << "Base case!\n";
    double result = 3.2;

    // Simulate returning from recursion
    while (!s.isEmpty()) {
        s.pop();
        result += 1.1;
    }

    return result;
}
