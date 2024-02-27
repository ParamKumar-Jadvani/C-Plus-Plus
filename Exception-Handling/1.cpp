#include "../Functions.cpp"

typedef class Exception
{
private:
    int age;
    double a, b;
    string psw;
    char error1[50] = "YOU ARE NOT ELIGIBLE FOR VOTE !";
    char error[50] = "0[ZERO] CAN NOT DIVIDE BY NUMBER !";
    char error2[50] = "YOUR PASSWORD IS WRONG !";

public:
    Exception()
    {
        cout << "Enter 1st Number : ";
        this->a = getDouble();

        cout << "Enter 2nd Number : ";
        this->b = getDouble();

        cout << "Enter Your Age : ";
        this->age = getInt();

        cout << "Enter Your Password : ";
        this->psw = getString();
    }

    void getNum()
    {
        if ((this->a != 0) && (this->b != 0))
        {
            throw a / b;
        }
        else
        {
            throw error;
        }
    }

    void getAge()
    {
        if (this->age > 18)
        {
            throw age;
        }
        else
        {
            throw error1;
        }
    }

    void getPsw()
    {
        if (this->psw[0] != 0)
        {
            int count = 0;
            for (int i = 0; this->psw[i] != '\0'; i++)
            {
                if (this->psw[i] >= 65 && this->psw[i] <= 90)
                    count++;
            }
            if (count > 0)
            {
                throw psw;
            }
            else
            {
                throw error2;
            }
        }
    }
} Except;

void num(Except);
void age(Except);
void validation(Except);

int main()
{
    user();

    return 0;
}

void user()
{
    Except a;

    num(a);
    age(a);
    validation(a);
}

void num(Except x)
{
    try
    {
        x.getNum();
    }
    catch (double a)
    {
        cout << endl
             << "Your given Number Division is : " << a << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }
}

void age(Except y)
{
    try
    {
        y.getAge();
    }
    catch (int a)
    {
        cout << endl
             << a << " YOU HAVE ELIGIBLE FOR VOTE !" << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }
}

void validation(Except z)
{
    try
    {
        z.getPsw();
    }
    catch (string a)
    {
        cout << endl
             << "YOUR PASSWORD IS CORRECT !" << endl
             << "Your password is : " << a << endl;
    }
    catch (char a[])
    {
        puts(a);
    }
    catch (...)
    {
        cout << endl
             << "THIS IS GENERAL EXCEPTION !" << endl;
    }
}