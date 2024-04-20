#include "A.h"
#include "B.h"
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    B b;
    A* aPointer = &b;

    try {
        aPointer->foo();
    } catch (const bad_cast& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
