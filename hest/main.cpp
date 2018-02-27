#include <iostream>

using namespace std;

int main()
{

    int s = 0;
    unsigned int d = 0;

    double doub = 20.0;
    float f = 20.0f;

    f = f-9;
    doub = doub - 9;

    int minVariable = 10;
    int minVariable2 = 5;
    int minVariable3 = minVariable - minVariable2;

    cout << minVariable2 << endl;
    cout << minVariable << endl;
    cout << minVariable3 << endl;
    return 0;
}
