#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char temp1 = a[0];
    char temp2 = b[0];
    a[0] = temp2;
    b[0] = temp1;
    cout << a << " " << b;

    return 0;
}