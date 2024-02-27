#include "../../Functions.cpp"

typedef class Overloaded
{
private:
    int n, id;
    static int idCounter;

public:
    Overloaded()
    {
        C << "Enter " << idCounter++ << " Number : ";
        this->n = getInt();

        this->id = idCounter;
    }

    void getData()
    {
        C << "Your " << this->id << "Number is : " << this->n << endl;
    }

    bool operator<(Overloaded a)
    {
        if (this->n < a.n)
            return 0;
        else
            return 1;
    }

    void getNumber()
    {
        C << this->n << " Number is Big" << endl;
    }
} Over;

int Over::idCounter = 1;

int main()
{
    user();
    return 0;
}

void user()
{
    Over a, b;

    a.getData();
    b.getData();

    if (a < b)
        a.getNumber();
    else
        b.getNumber();
}