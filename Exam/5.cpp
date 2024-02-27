#include "Exam-Functions.cpp"

typedef class Employee
{
private:
    int salary;

public:
    void setData()
    {
        CO << "Enter Salary : ";
        this->salary = getInt();
    }

    void getData()
    {
        CO << " Salary : " << this->salary << endl;
    }

    Employee operator+(Employee x)
    {
        Employee temp;

        temp.salary = this->salary + x.salary;

        return temp;
    }
} Emp;

int main()
{
    user();
    return 0;
}

void user()
{
    Emp e1, e2, e3;

    e1.setData();
    e2.setData();

    e3 = e1 + e2;

    e1.getData();
    e2.getData();
    e3.getData();
}