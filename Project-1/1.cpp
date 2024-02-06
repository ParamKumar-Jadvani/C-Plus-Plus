#include <iostream>
#include "G:\.Param\C++\Functions.cpp"
using namespace std;

void user();

class Height
{
private:
    // Attributes
    int inch, feet;

    // Methods
    Height operator+(Height obj)
    {
        Height temp;

        temp.feet = this->feet + obj.feet;
        temp.inch = this->inch + obj.inch;

        return temp;
    }

public:
    // Setter Methods
    void setHeightData()
    {
        cout << "Enter Feet : ";
        this->feet = getInt();

        cout << "Enter Inch : ";
        this->inch = getInt();
    }

    void getHeightData()
    {
        cout << "Feet " << this->feet << " inch " << this->inch << endl;
    }

    Height convertHeight(Height x1, Height y1)
    {
        Height temp;

        temp = x1 + y1;

        temp.feet = temp.feet + (temp.inch / 12);
        temp.inch = (temp.inch % 12);

        return temp;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Height a1, a2, a3;

    a1.setHeightData();
    a2.setHeightData();

    a1.getHeightData();
    a2.getHeightData();

    a3 = a3.convertHeight(a1, a2);

    a3.getHeightData();
}