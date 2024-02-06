#include <iostream>
using namespace std;

int getInt();
string getString();
void user();

class CarRecord
{
private:
    int id, realese_year;
    string color, model, comp_name;

public:
    // setter
    void setData()
    {
        cout << endl
             << "\t--- Enter Car Data ---" << endl
             << "Id\t: ";
        this->id = getInt();

        cout << "Name\t: ";
        this->color = getString();

        cout << "Model\t: ";
        this->model = getString();

        cout << "Realese Year\t: ";
        this->realese_year = getInt();

        cout << "Company Name\t: ";
        this->comp_name = getString();
    }

    void getData()
    {
        cout << endl
             << "\t--- Car Data ---" << endl
             << "\tId\t: " << this->id << endl
             << "\tColor\t: " << this->color << endl
             << "\tModel\t: " << this->model << endl
             << "\tRealese Year: " << this->realese_year << endl
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

    CarRecord c[n];

    for (int i = 0; i < n; i++)
    {
        c[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        c[i].getData();
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