#include <iostream>
using namespace std;

void PrintNTo1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    PrintNTo1(n - 1);
}

int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    PrintNTo1(n);

    return 0;
}
