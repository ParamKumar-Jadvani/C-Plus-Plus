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
    cout << "Enter Year : ";
    int y1 = getInt();

    cout << "Enter Year 2 : ";
    int y2 = getInt();

    int y3 = (y2 - y1) / 4 + 1;

    int year[y3];

    for (int i = y1, j = 0; i <= y2; i++)
    {
        if (i % 4 == 0)
        {
            year[j] = i;
            j++;
        }
    }

    for (int i = 0; i < y3; i++)
    {
        cout << " " << year[i];
    }
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}