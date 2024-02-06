#include <iostream>
#include <string.h>
#include <fstream>
#include "G:\.Param\C++ (6 PM)\Functions.cpp"
using namespace std;

void user();

class StudentSystem
{
private:
    // Attribute
    int id, age;
    string fName, sName, deg, city, email;
    char college[30];

    // Methods
    string setCourse()
    {
    rev:
        cout << endl
             << "\t1) B.C.A." << endl
             << "\t2) B.Sc-It" << endl
             << "\t3) Diploma in Computer Applications" << endl;
        int no = getInt();

        switch (no)
        {
        case 1:
            return "B.C.A.";

        case 2:
            return "B.Sc-It";

        case 3:
            return "Diploma in Computer Applications";

        default:
            cout << endl
                 << "Sorry, We Can't find your degree Please Re-Enter !!" << endl;
            goto rev;
        }
    }

    void storeData()
    {
        // ofstream s("StudentRecord.xls");
        fstream s("StudentRecord.xls", ios::app);

        s << this->id << "\t"
          << this->fName + sName << "\t"
          << this->age << "\t"
          << this->email << "\t"
          << this->deg << "\t"
          << this->city << "\t"
          << this->college
          << endl;

        if (!s.is_open())
            cout << "Sorry, We Can't find your file Please Check your file name !!" << endl;
        else
            cout << "Your Data is Successfully stored !! " << endl;

        s.close();
    }

public:
    // Seeter Methods
    void setStudentData()
    {
        cout << " Id : ";
        this->id = getInt();

        cout << " First Name : ";
        this->fName = getString();

        cout << " Last Name : ";
        this->sName = getString();

        cout << " Age : ";
        this->age = getInt();

        if (checkAge(this->age))
            goto rev;
        else
            goto exit;

    rev:
        cout << " Your Email : ";
        this->email = getString();

        if (checkEmail(this->email))
            goto forward;
        else
            goto rev;

    forward:
        cout << "Select Degree : ";
        this->deg = this->setCourse();

        cout << " Select City : ";
        this->city = selectCity();

        fflush(stdin);
        cout << " College Name : ";
        gets(this->college);

    exit:
        cout << endl;
    }

    // Getter Methods
    void getStudentData()
    {
        cout << endl
             << " Id\t\t: " << this->id << endl
             << " Name\t\t: " << this->fName + this->sName << endl
             << " Age\t\t: " << this->age << endl
             << " Email\t\t: " << this->email << endl
             << " Degree\t\t: " << this->deg << endl
             << " City\t\t: " << this->city << endl
             << " College Name\t: " << this->college << endl;
    }

    void setTableHeadigData()
    {
        cout << "  Id\t"
             << "  Name\t\t"
             << "  Age\t\t"
             << "Email\t\t\t"
             << "Degree\t\t"
             << "City\t\t"
             << "College" << endl
             << "-------\t-------\t\t-------\t\t-------\t\t\t-------\t\t-------\t\t-------" << endl
             << endl
             << endl;
    }

    void getTableHeadingData()
    {
        cout << this->id << "\t"
             << this->fName + sName << "\t  "
             << this->age << "\t"
             << this->email << "\t\t"
             << this->deg << "\t\t"
             << this->city << "\t\t"
             << this->college
             << endl
             << endl;
    }

    void setHeading()
    {
        cout << endl
             << "\t--- Enter Student Data ---" << endl
             << endl
             << endl;
    }

    void getHeading()
    {
        cout << endl
             << "\t\t\t--- Student Data ---" << endl
             << endl
             << endl;
    }

    void fileHandling()
    {
        storeData();
    }

    void headingOfFile()
    {
        fstream s("StudentRecord.xls", ios::out);

        s << "Id\t"
          << "Name\t"
          << "Age\t"
          << "Email\t"
          << "Degree\t"
          << "City\t"
          << "College" << endl
          << endl;

        s.close();
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    cout << "Enter Total Number of Student : ";
    int n = getInt();

    StudentSystem s[n];

    s[0].setHeading();

    for (int i = 0; i < n; i++)
        s[i].setStudentData();

    s[0].getHeading();

    s[0].setTableHeadigData();

    for (int i = 0; i < n; i++)
        s[i].getTableHeadingData();

    s[0].headingOfFile();
    for (int i = 0; i < n; i++)
        s[i].fileHandling();
}