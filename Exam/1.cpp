#include "Exam-Functions.cpp"

typedef class Ractangle
{
private:
    double height, width;

public:
    void setData()
    {
        CO << "Enter Height : ";
        this->height = getDouble();

        CO << "Enter Width : ";
        this->width = getDouble();
    }

    Ractangle()
    {
        this->setData();
    }

    void getData()
    {
        CO << endl
           << " Height is\t\t: " << this->height << endl
           << " Width is\t\t: " << this->width << endl;
    }

    void calcArea()
    {
        CO << " Your Ractangle Area is\t: " << this->height * this->width << endl;
    }
} Ract;

int main()
{
    user();
    return 0;
}

void user()
{
    Ract r;
    r.getData();
    r.calcArea();
}
