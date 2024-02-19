#include "../Functions-2.cpp"

void user();

class A
{
protected:
    int id, contact, salary, exp;
    string name, role, add;
    char email[30];
    static string compName;
    static int idCounter;

public:
    void setDataEmp()
    {
        C << "\t--- Enter Given Data ---" << endl
          << endl
          << " Name : ";
        this->name = getString();

        cout << " Role : ";
        this->role = getString();
    }

    A()
    {
        this->id = idCounter++;
        this->setDataEmp();
    }
};

int A::idCounter = 1;
string A::compName = "Google";

class B : public A
{
public:
    void setEmpNum()
    {
        C << " Salary : ";
        salary = getInt();

        C << " Experience : ";
        exp = getInt();
    }

    B()
    {
        this->setEmpNum();
    }
};

class Ca : public B
{
private:
    static void setCompName()
    {
        C << " Company Name : ";
        A::compName = getString();
    }

public:
    void setEmpLocation()
    {
        C << "Address : ";
        add = getString();
    }

    void getEmpData()
    {
        C << "\t--- Employee Data ---" << endl
          << endl
          << " Name : " << name << endl
          << " Role :  " << role << endl
          << " Salary : " << salary << endl;
    }

    Ca()
    {
        setCompName();
        this->setEmpLocation();
    }
};

class D : public Ca
{
public:
    void empData()
    {
    rev:
        C << " Email : ";
        c >> email;

        if (checkEmail(this->email))
            goto forward;
        else
            goto rev;

    forward:

        C << "Contact : ";
        contact = getInt();
    }

    D()
    {
        this->empData();
    }

    void getEmpData()
    {
        C << "\t--- Employee Data ---" << endl
          << " Name\t\t: " << name << endl
          << " Role\t\t: " << role << endl
          << " Salary\t\t: " << salary << endl
          << " Experience\t: " << exp << endl
          << " Contact\t: " << contact << endl
          << " Email\t\t: ";
        puts(email);
        C << " Address\t: " << add << endl
          << " Company Name\t: " << A::compName << endl
          << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    D d;

    d.getEmpData();
}