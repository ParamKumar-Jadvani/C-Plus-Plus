#include <iostream>
#include "G:\.Param\C++\Functions.cpp"
using namespace std;

void user();

class Time
{
private:
    // Attributes
    int seconds, minutes, hours;

public:
    void setSeconds()
    {
        cout << "Enter Seconds : ";
        this->seconds = getInt();
    }

    void getTime(Time x)
    {
        x.hours = (x.seconds / 3600);
        x.minutes = (x.seconds % 3600) / 60;
        x.seconds = (x.seconds % 3600) % 60;

        cout << x.hours << " hours " << x.minutes << " minutes " << x.seconds << " seconds " << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Time a;

    a.setSeconds();
    a.getTime(a);
}