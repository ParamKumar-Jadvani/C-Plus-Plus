#include <iostream>
#include "G:\.Param\C++ (6 PM)\Functions.cpp"
using namespace std;

void user();

class Customer
{
private:
    int id, age, simValidity;
    long long int mobileNu;
    string name, city, simBrand_Name;

    string selectSimBrand_Name()
    {
    rev:
        cout << "\tSelect Sim-Card Brand Name" << endl
             << "\t 1) JIO " << endl
             << "\t 2) AIRTEL" << endl
             << "\t 3) VADAFONE INDIA (VI)" << endl;
        int num = getInt();

        switch (num)
        {
        case 1:
            return "JIO";
            break;

        case 2:
            return "AIRTEL";
            break;

        case 3:
            return "VI";
            break;

        default:
            cout << "\t--- WE CAN'T FOUND YOUR ANSWER CAN YOU PLEASE RE_ENTER ---" << endl
                 << endl;
            goto rev;
            break;
        }
    }

    bool checkMobileNum(long long int num)
    {
        int len = 0;

        do
        {
            num /= 10;
            len++;
        } while (num != 0);

        if (len > 0 && len <= 10)
            return true;
        else
        {
            cout << "Your Number is Not Valid for our System Please Re-Enter Numebr" << endl;
            return false;
        }
    }

public:
    void setData()
    {
        cout << "\t--- Enter Customer Data ---" << endl
             << " Id \t\t: ";
        this->id = getInt();

        cout << " Name \t\t: ";
        this->name = getString();

        cout << " Age \t\t: ";
        this->age = getInt();

        if (checkAge(age))
            goto far;
        else
            goto rev;

    far:
        cout << " Mobile number \t: ";
        cin >> this->mobileNu;

        if (checkMobileNum(mobileNu))
            goto far1;
        else
            goto far;

    far1:
        cout
            << " Select City \t: ";
        this->city = selectCity();

        cout << "Sim Card Name \t:";
        this->simBrand_Name = this->selectSimBrand_Name();

        cout << "Sim Card Validity in Years :";
        this->simValidity = getInt();

    rev:
        cout << " ";
    }

    void getHeading()
    {
        cout << "\tId\tName\tAge\tMobile Number\tCity\t\tBrand Name\tValidity" << endl
             << "\t-------\t-------\t-------\t------------\t-------\t\t------------\t--------" << endl;
    }

    void getData()
    {
        cout << "\t" << this->id << "\t" << this->name << "\t" << this->age << "\t" << this->mobileNu << "\t" << this->city
             << "\t\t" << this->simBrand_Name << "\t" << this->simValidity << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    cout << "Enter Total Number Customer : ";
    int n = getInt();

    Customer s[n];

    for (int i = 0; i < n; i++)
        s[i].setData();

    s[0].getHeading();

    for (int i = 0; i < n; i++)
        s[i].getData();
}