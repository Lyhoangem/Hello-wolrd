#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *ptr = &n;

    *ptr = 50;

    cout << "n=" << n << endl;
    cout << "ptr=" << *ptr << endl;

    return 0;
}

