#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
int a, b;
int max;
int min;
cin >> a >> b;
max = b;
if (a > b)
    { max = a;}
else
    { max = b;}
min = a;
if (b < a)
    {min = b;}
else
    {min = a;}
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "Maximum = " << max << '\n'
     << "Minimum = " << min << '\n';
    return 0;
}
