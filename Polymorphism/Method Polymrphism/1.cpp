#include "../../Functions.cpp"

class Calc
{
protected:
    void division(int a, int b)
    {
        if (a > b)
            C << "Division is : " << a / b << endl;
        else
            C << "Division is : " << b / a << endl;
    }

    void subtraction(int a, int b, int c)
    {
        C << "Subtraction is : " << a - b - c << endl;
    }

    void multiplication(int a, int b, int c, int d)
    {
        C << "Multiplication : " << a * b * c * d << endl;
    }

    void addition(int a, int b, int c, int d, int e)
    {
        C << "Addition : " << a + b + c + d + e << endl;
    }
};

class Perform : private Calc
{
public:
    void calculate(int a, int b)
    {
        division(a, b);
    }

    void calculate(int a, int b, int c)
    {
        subtraction(a, b, c);
    }

    void calculate(int a, int b, int c, int d)
    {
        multiplication(a, b, c, d);
    }

    void calculate(int a, int b, int c, int d, int e)
    {
        addition(a, b, c, d, e);
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Perform a;

    a.calculate(10, 20);
    a.calculate(10, 20, 30);
    a.calculate(1, 2, 3, 4);
    a.calculate(10, 20, 30, 40, 50);
}