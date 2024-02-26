#include "Class.cpp"

void user();

int main()
{
    user();
}

void user()
{
    P s;

    SMS::intializeData();

    C << "Enter Your Total Number of Products : ";
    int n = getInt();

    SMS c[n];

    P s1;
    if (s1.checkData(s))
    {
        c[0].getHeading();

        for (int i = 0; i < n; i++)
            c[i].getData();

        c[0].getEndHeading();
        SMS::generateBill();
        c[0].getEndHeading();

        goto next;
    }
    else
    {
        C << "Your Login Is Failed Sorry!" << endl;
        goto back;
    }

    int id;

next:
    C << endl
      << endl
      << "Enter Your Product Id : ";
    id = getInt();

    c[0].getHeading();

    for (int i = 0; i < n; i++)
    {
        c[i].searchData(id);
    }

back:
    C << endl;
}