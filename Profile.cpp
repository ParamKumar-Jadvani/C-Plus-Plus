#include <iostream>
#include <string.h>
#include "Functions.cpp"
using namespace std;

typedef class Profile
{
private:
    int id;
    string psw;
    char name[20];

    bool compareName(Profile x)
    {
        int len = 0;
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (name[i] == x.name[i])
                len++;
        }

        if (len == strlen(this->name))
            return true;
        else
            return false;
    }

public:
    Profile()
    {
        cout << "\t--- Enter Your Profile Data ---" << endl
             << "\t    ===== ==== ======= ====" << endl;

        setProfile();
    }

    void setProfile()
    {
        cout << " Id\t: ";
        this->id = getInt();

        fflush(stdin);
        cout << " Name\t: ";
        gets(this->name);

    rev:
        cout << "Password : ";
        this->psw = getString();

        if (checkPSW(this->psw))
            ;
        else
            goto rev;
    }

    bool checkData(Profile x)
    {
        int n = compareName(x);

        if ((x.id == this->id) && (x.psw == this->psw) && (n == 1))
            return true;
        else
            return false;
    }

} P;

bool checkPSW(string psw)
{
    int lwr = 0, dig = 0, space = 0, sym = 0, len = 0;

    for (int i = 0; psw[i] != '\0'; i++)
    {
        len++;

        ((psw[i] >= 65 && psw[i] <= 90) || (psw[i] >= 97 && psw[i] <= 122))
            ? lwr++
        : (psw[i] >= 48 && psw[i] <= 57)
            ? dig++
        : (psw[i] == 32)
            ? space++
            : sym++;
    }

    if (lwr > 0 && sym > 0 && dig > 0 && space == 0 && len > 5)
        return true;
    else
    {
        cout << " Your Password Is wrong! Please Re-Enter YOur Password !" << endl;
        return false;
    }
}

bool checkAge(int age)
{
    if (age > 18 && age < 30)
        return true;
    else
    {
        cout << endl
             << "Sorry, Age must be between 18 and 30" << endl;
        return false;
    }
}