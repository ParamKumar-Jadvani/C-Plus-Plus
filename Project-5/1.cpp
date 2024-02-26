#include "../Functions.cpp"

class Exception
{
private:
    int a, b;
    string str = "Number are Equal";

public:
    Exception()
    {
        cout << "Enter A : ";
        this->a = getInt();

        cout << "Enter B : ";
        this->b = getInt();
    }

    void getData()
    {
        if (a == b)
        {
            throw str;
        }
        else if (a > b)
        {
            throw a;
        }
        else
        {
            throw b;
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
    Exception n;

    try
    {
        n.getData();
    }
    catch (int a)
    {
        cout << a << " is Big " << endl;
    }
    catch (int a)
    {
        cout << a << " is Big " << endl;
    }
    catch (...)
    {
        cout << "This is general exception ! " << endl;
    }
}