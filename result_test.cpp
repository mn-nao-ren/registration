#include <iostream>
#include "result.h"
#include "unit.h"

using namespace std;

int main()
{

    Unit myUnit("Data Structures", "ICT 283", 3);

    Result myResult(myUnit, 73);

    cout << myResult << endl;
    cout << "----------" << endl;

    Unit someOtherUnit;
    myResult.GetUnit(someOtherUnit);

    cout << "--- someOtherUnit ---" << endl;

    cout << someOtherUnit << endl;

    return 0;
}











