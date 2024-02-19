#include "../Functions.cpp"

void user();

class Shape
{
protected:
    double height, width;

public:
    Shape()
    {
        this->setData();
    }

    void setData()
    {
        C << "Enter the Height : ";
        this->height = getDouble();

        C << "Enter the Width : ";
        this->width = getDouble();
    }
};

typedef class Ractangle : public Shape
{
public:
    void getData()
    {
        C << "Area of Ractangle is : " << height * width << endl;
    }
} R;

typedef class Triangle : public Shape
{
public:
    void getData()
    {
        C << "Area of Triangle is : " << 0.5 * height * width << endl;
    }
} T;

int main()
{
    user();
    return 0;
}

void user()
{
    R r;
    r.getData();

    T t;
    t.getData();
}