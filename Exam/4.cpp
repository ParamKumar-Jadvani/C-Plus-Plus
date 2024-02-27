#include "Exam-Functions.cpp"

class Shape
{
protected:
    string color;
    double area, h, w;

public:
    void setData()
    {
        CO << endl
           << "Enter Color : ";
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

    virtual void display()
    {
        CO << "Color is : " << this->color << endl;
    }

    virtual void calcArea() = 0;
};

class Circle : public Shape
{
public:
    void setData()
    {
        CO << endl
           << "Enter Color : ";
        this->color = getString();

        CO << "Enter Width or Radius : ";
        this->w = getDouble();
    }
    void calcArea()
    {
        CO << endl
           << " Color is : " << color << endl
           << " Area of Circle is : " << w * 3.14 * w << endl << endl;
    }
    void display()
    {
        calcArea();
    }
};

class Ractangle : public Shape
{
public:
    void calcArea()
    {
        CO << " Color is : " << color << endl
           << " Area of Ractangle is : " << w * h << endl << endl;
    }
    void display()
    {
        calcArea();
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

    c.setData();
    r.setData();

    Shape *ptr[2];

    ptr[0] = &c;
    ptr[1] = &r;

    ptr[0]->display();
    ptr[1]->display();
}
