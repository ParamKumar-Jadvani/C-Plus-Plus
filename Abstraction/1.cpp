#include "../Functions.cpp"

typedef class Admin
{
private:
    int total_Revenue;

protected:
    static string company_name;
    int manager_salary, employee_salary, total_staff;
    string can_terminate;

public:
    void setData()
    {
        C << "\t---Enter Data---" << endl
          << "Company Total Annual Revenue : ";
        this->total_Revenue = getInt();

        C << "Manager Salary : ";
        this->manager_salary = getInt();

        C << "Company TOtal Staff : ";
        this->total_staff = getInt();

        C << "Employee Salary : ";
        this->employee_salary = getInt();

        C << "Can Terminate 'Yes' or 'No' : ";
        this->can_terminate = getString();
    }

    void myAccess()
    {
        this->setData();
        C << endl
          << "\t---Company Data---" << endl
          << "Company Total Revenue\t: " << this->total_Revenue << endl
          << "Company Total Staff\t: " << this->total_staff << endl
          << "Manager Salary\t\t: " << this->manager_salary << endl
          << "Employee Salary\t\t: " << this->employee_salary << endl
          << "Terminate\t\t: " << this->can_terminate << endl
          << "Company Name\t\t: " << Admin::company_name << endl;
    }

    static void setCompanyName()
    {
        C << endl
          << endl
          << "Enter Company Name : ";
        company_name = getString();
    }
} AD;

string Admin::company_name = "Google";

typedef class Manager : protected AD
{
public:
    void setData()
    {
        C << endl
          << endl
          << "Manager Salary : ";
        this->manager_salary = getInt();

        C << "Company TOtal Staff : ";
        this->total_staff = getInt();

        C << "Employee Salary : ";
        this->employee_salary = getInt();

        C << "Can Terminate 'Yes' or 'No' : ";
        this->can_terminate = getString();
    }

    void myAccess()
    {
        this->setData();
        C << endl
          << "\t---Manager Data---" << endl
          << "Manager Salary\t: " << this->manager_salary << endl
          << "Total Staff\t: " << this->total_staff << endl
          << "Employee Salary\t: " << this->employee_salary << endl
          << "Terminate\t: " << this->can_terminate << endl
          << "Company Name\t: " << this->Admin::company_name << endl;

        manager_salary = 0;
        total_staff = 0;
        can_terminate = " ";
    }
} MANG;

typedef class Employee : private MANG
{
public:
    void setData()
    {
        C << endl
          << endl
          << "Employee Salary : ";
        this->employee_salary = getInt();
    }

    void myAccess()
    {
        this->setData();
        C << endl
          << "\t---Employee Salary---" << endl
          << "Employee Salar\t: " << employee_salary << endl
          << "Company Name\t: " << Admin::company_name << endl;
    }
} EMP;

int main()
{
    user();
    return 0;
}

void user()
{
    EMP e1;
    e1.myAccess();

    MANG m1;
    m1.myAccess();

    AD::setCompanyName();
    AD a1;
    a1.myAccess();
}