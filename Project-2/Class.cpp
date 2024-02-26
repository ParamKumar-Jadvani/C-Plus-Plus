#include "../Profile.cpp"

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
        C << endl
             << " Your Id\t: " << this->id
             << endl
             << " Name \t: ";
        this->name = getString();

    C << " Quantity : ";
        this->qty = getInt();

        C << " Price \t: ";
        this->price = getInt();

        C << " Discount : ";
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
        C << " Enter Intialize ID : ";
        SuperMarketSystem::idCounter = getInt();
    }

    SuperMarketSystem()
    {
        C << endl
             << "\t--- Enter Data ---" << endl;
        this->id = idCounter++;
        this->setData();
        SuperMarketSystem::bill += this->tPrice;
    }

    void getHeading()
    {
        C << "==============================================================================" << endl
             << " Id\tName\t\tQuantiy\tPrice\tDiscount\tTotalAmount" << endl
             << "-------\t-------\t\t-------\t-------\t-------\t\t-----------" << endl
             << "==============================================================================" << endl;
    }

    void getEndHeading()
    {
        C << "=================================================================================" << endl;
    }

    void getData()
    {
        C << endl
             << this->id << "\t"
             << this->name << "\t\t"
             << this->price << "\t"
             << this->qty << "\t"
             << this->discount * 100 << "%"
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
        C << "Bill \t\t\t\t\t\t\t:" << SuperMarketSystem::bill
             << endl;
    }

} SMS;

int SMS::idCounter = 1;
double SMS::bill = 0;