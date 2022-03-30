#include <sstream>
#include <string>
#include <iostream>
using namespace std;

void start()
{
    string a;
    cin >> a;
    a += ",";
    string temp = "";
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ',')
        {
            cout << temp << endl;
            temp = "";
            continue;
        }
        temp += a[i];
    }
}
int main()
{
    start();
    return 0;
}