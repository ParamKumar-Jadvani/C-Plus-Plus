#include "../Functions.cpp"

void user();

class Number
{
protected:
    int n;

public:
    Number()
    {
        this->setData();
    }

    void setData()
    {
        C << "Enter Number : ";
        this->n = getInt();
    }
};

typedef class Square : public Number
{
public:
    void getData()
    {
        C << "Sqaure of Number is => " << n * n << endl;
    }
} S;

typedef class Qube : public Number
{
public:
    void getData()
    {
        C << "Qube of Number is => " << n * n * n << endl;
    }
} Q;

int main()
{
    user();
    return 0;
}

void user()
{
    S s;
    s.getData();

    Q q;
    q.getData();
}