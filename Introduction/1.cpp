#include <iostream>
using namespace std;

int getInt();
void user();

int main()
{
    user();
    return 0;
}

void user()
{
    cout << "Enter Size of an Array : ";
    int n = getInt();

    int a[n];

    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] : ";
        a[i] = getInt();
    }

    cout << "Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] : " << a[i] << endl;
    }

    cout << "Array even Elements : ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << " " << a[i] << endl;
        }
    }
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}
