#include "Exam-Functions.cpp"

class Shape
{
private:
    string color;
    double area;

protected:
    double h, w;

public:
    void setData()
    {
        CO << "Enter Color : ";
        this->color = getString();

        CO << "Enter Height : ";
        this->h = getDouble();

        CO << "Enter Width or Radius : ";
        this->w = getDouble();
    }

    void getData()
    {
        CO << " Color is\t\t: " << this->color << endl
           << " Height is\t\t: " << this->h << endl
           << " Width or Radius is\t: " << this->w << endl;
    }

    virtual void calcArea() = 0;
};

class Circle : public Shape
{
public:
    void calcArea()
    {
        setData();
        CO << "Area of Circle is : " << 2 * 3.14 * w << endl;
    }
};

class Ractangle : public Shape
{
public:
    void calcArea()
    {
        setData();
        CO << "Area of Ractangle is : " << w*h << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Circle c;
    Ractangle r;

    c.calcArea();
    r.calcArea();
}
