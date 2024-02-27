#include "Exam-Functions.cpp"

class Num
{
private:
    int n, n1;
    string error = "Number is Can't Divide by Zero";

public:
    Num()
    {
        CO << "Enter 1st Number : ";
        this->n = getInt();

        CO << "Enter 2nd Number : ";
        this->n1 = getInt();
    }

    void getData()
    {
        CO << " 1st Number is : " << this->n << endl
           << " 2nd Number is : " << this->n1 << endl;
    }

    void exception()
    {
        if (n == 0 || n1 == 0)
            throw error;
        else if (n > n1)
            throw n / n1;
        else
            throw n1 / n;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Num a;

    try
    {
        a.exception();
    }
    catch (string str)
    {
        CO << str << endl;
    }
    catch (int num)
    {
        CO << "Division is : " << num << endl;
    }
}