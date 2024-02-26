#include "../Functions.cpp"

int getInt();

class Age
{
protected:
    int age;
    char str[50] = "You are Eligible for Vote ";

public:
    Age()
    {
        cout << "Enter Your Age : ";
        this->age = getInt();
    }

    void getData()
    {
        if (this->age > 18)
        {
            throw str;
        }
        else
        {
            throw false;
        }
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Age n;

    try
    {
        n.getData();
    }
    catch (char e[])
    {
        cout << e << endl;
    }
    catch (bool e)
    {
        cout << "You are not Eligible for Vote ";
    }
}