#include "Exam-Functions.cpp"

typedef class Employee
{
private:
    int salary, id;
    string name, designation;
    static int idCounter;

public:
    void setData()
    {
        CO << "\t--- Enter Data ---" << endl
           << endl
           << " ID\t\t: " << this->id << endl
           << " Name\t\t: ";
        this->name = getString();

        CO << " Designation\t: ";
        this->designation = getString();

        CO << " Salary\t\t: ";
        this->salary = getInt();
    }

    Employee()
    {
        id = idCounter++;
        this->setData();
    }

    static void setIntialId()
    {
        CO << "Enter Employee Intial Id : ";
        idCounter = getInt();
    }

    void getHeading()
    {
        CO << " --- Data ---" << endl
           << " ID\t\tName\t\tDesignation\t\tSalary\t" << endl
           << "=====\t\t======\t\t============\t\t========" << endl
           << endl;
    }

    void getData()
    {
        CO << this->id << "\t\t"
           << this->name << "\t\t"
           << this->designation << "\t\t"
           << this->salary << endl
           << endl;
    }
} Emp;

int Emp::idCounter = 1;

int main()
{
    user();
    return 0;
}

void user()
{
    Emp::setIntialId();

    CO << "Enter Total Number of Employees : ";
    int n = getInt();

    Emp a[n];

    a[0].getHeading();

    for (int i = 0; i < n; i++)
        a[i].getData();
}
