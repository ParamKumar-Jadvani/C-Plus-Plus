#include <iostream>
using namespace std;

int getInt();
string getString();
double getDouble();
void user();

class Employee
{
private:
    int id, age, salary;
    string name, role, comp_name;
    double experience;

public:
    // setter
    void setData()
    {
        cout << endl
             << "\t--- Enter Employee Data ---" << endl
             << "Id\t: ";
        this->id = getInt();

        cout << "Name\t: ";
        this->name = getString();

        cout << "Age\t: ";
        this->age = getInt();

        cout << "Role\t: ";
        this->role = getString();

        cout << "Experience\t: ";
        this->experience = getDouble();

        cout << "Salary\t: ";
        this->salary = getInt();

        cout << "Company Name\t: ";
        this->comp_name = getString();
    }

    void getData()
    {
        cout << endl
             << "\t--- Employee Data ---" << endl
             << "\tId\t: " << this->id << endl
             << "\tName\t: " << this->name << endl
             << "\tAge\t: " << this->age << endl
             << "\tRole\t: " << this->role << endl
             << "\tExperience\t: " << this->experience << endl
             << "\tSalary\t: " << this->salary << endl
             << "\tCompany Name: " << this->comp_name << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    cout << "Enter No. Of Employee : ";
    int n = getInt();

    Employee e[n];

    for (int i = 0; i < n; i++)
    {
        e[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        e[i].getData();
    }
}

int getInt()
{
    int n;
    cin >> n;
    return n;
}

string getString()
{
    string str;
    cin >> str;
    return str;
}

double getDouble()
{
    double n;
    cin >> n;
    return n;
}