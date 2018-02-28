//============================================================================
// Name        : References.cpp
//
//  Reference Variable  declaring a Var. whos value is another Var.
//
//         basically a synonym or alias for another value.
//         w/e happens to 1 happens to other
//
//        need ' & ' before Var name.
//           int& varX or int &varX	either will work
//
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void changesomething(double &val)
    {
    cout << "val: " << val << endl;
    val = 2.15;					// also makes test=2.15 b/c val is a reference '&'
    cout << "val now: " << val << endl;
    cout << "Leaving 'changesomething'..." << endl;
    }

int main()
    {

    int value1 = 10;
    int &value2 = value1;

    value2 = 15;

    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;

    cout << "" << endl;
    cout << "1xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1"  << endl;
    cout << "" << endl;

    double test = 8.17;

    cout << "test: " << test << endl;
    cout << "Run 'changesomething' now..." << endl;
    changesomething(test);
    cout << "test now: " << test << endl;


    return 0;
    }
