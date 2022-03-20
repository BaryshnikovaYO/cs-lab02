#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
int max;
cin >> a >> b;
max = b;
if (a > b)
    { max = a;}
else
    { max = b;}
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Maximum = " << max << '\n';
    return 0;
}
