#include "../Functions.cpp"

typedef class Distance
{
private:
    double km, meter;

public:
    void setDistance()
    {
        C << " Kilometers  : ";
        this->km = getDouble();

        C << " Meter : ";
        this->meter = getDouble();
    }

    void getDistance()
    {
        C << " Distance is =>\t" << this->km << " km " << this->meter << " meter " << endl;
    }

    Distance operator+(Distance x)
    {
        Distance tmp;

        tmp.km = this->km + x.km;
        tmp.meter = this->meter + x.meter;

        while (tmp.meter > 999)
        {
            tmp.meter -= 1000;
            tmp.km++;
        }
        return tmp;
    }
} Dist;

int main()
{
    user();
}

void user()
{
    Dist x, y, z;

    x.setDistance();
    y.setDistance();

    x.getDistance();
    y.getDistance();

    z = x + y;

    z.getDistance();
}