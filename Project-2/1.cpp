#include <iostream>
using namespace std;

void user();

typedef class SuperMarketSystem
{
private:
    static int idCounter;
    int id, qty, price;
    double discount;

public:
    static void intializeID()
    {
        cout << "Enter Intialize ID : ";
        cin >> idCounter;
    }

    SuperMarketSystem()
    {
    }

} SMS;

int SMS::idCounter = 1;