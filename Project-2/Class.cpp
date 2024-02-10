#include <iostream>
#include "../Profile.cpp"
using namespace std;

typedef class SuperMarketSystem
{
private:
    static int idCounter;
    static double bill;
    int id, qty, price;
    double discount, tPrice;
    string name;

    void setData()
    {
        cout << endl
             << " Your Id\t: " << this->id
             << endl
             << " Name \t: ";
        this->name = getString();

        cout << " Quantity : ";
        this->qty = getInt();

        cout << " Price \t: ";
        this->price = getInt();

        cout << " Discount : ";
        this->discount = getDouble();

        this->getBill();
    }

    void getBill()
    {
        this->discount /= 100;

        this->tPrice = this->price * this->qty;

        this->tPrice -= (this->tPrice * this->discount);
    }

public:
    static void intializeData()
    {
        cout << " Enter Intialize ID : ";
        SuperMarketSystem::idCounter = getInt();
    }

    SuperMarketSystem()
    {
        cout << endl
             << "\t--- Enter Data ---" << endl;
        this->id = idCounter++;
        this->setData();
        SuperMarketSystem::bill += this->tPrice;
    }

    void getHeading()
    {
        cout << "==============================================================================" << endl
             << " Id\tName\t\tQuantiy\tPrice\tDiscount\tTotalAmount" << endl
             << "-------\t-------\t\t-------\t-------\t-------\t\t-----------" << endl
             << "==============================================================================" << endl;
    }

    void getEndHeading()
    {
        cout << "=================================================================================" << endl;
    }

    void getData()
    {
        cout << endl
             << this->id << "\t"
             << this->name << "\t\t"
             << this->price << "\t"
             << this->qty << "\t"
             << this->discount << "%"
             << "\t\t"
             << this->tPrice << endl
             << endl;
    }

    void searchData(int id)
    {
        if (id == this->id)
            this->getData();
        else
            ;
    }

    static void generateBill()
    {
        cout << "Bill \t\t\t\t\t\t\t:" << SuperMarketSystem::bill
             << endl;
    }

} SMS;

int SMS::idCounter = 1;
double SMS::bill = 0;