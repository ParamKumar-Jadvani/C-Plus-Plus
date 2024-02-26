#include "../../Functions-2.cpp"

typedef class Hotel
{
private:
    int id, rating, staffQTY, roomQTY;
    string type, location;
    static int idCounter, estYear;
    static string name;

    string typeHotel()
    {
    rev:
        C << endl
          << "\t Select 1 If your Hotel type is Hotel" << endl
          << "\t Select 2 If your Hotel type is Motel" << endl;
        int choose = getInt();

        switch (choose)
        {
        case 1:
            return "Hotel";
            break;
        case 2:
            return "Motel";
            break;
        default:
            C << " Enter Valid Type" << endl;
            goto rev;
        }
    }

public:
    void setData()
    {
        C << " Hotel Id\t: " << this->id << endl
          << " Hotel Rating : ";
        this->rating = getInt();

        C << " Hotel Type : ";
        this->type = typeHotel();

        C << " Hotel Staff Quantity : ";
        this->staffQTY = getInt();

        C << " Hotel Room Quantity : ";
        this->roomQTY = getInt();

        C << " Hotel Location : ";
        this->location = selectCity();
    }

    static void setStaticData()
    {
        C << " Enter Hotel Name : ";
        name = getString();

        C << " Hotel Established Year : ";
        estYear = getInt();

        C << " Enter Hotel Initial Id : ";
        idCounter = getInt();
    }

    Hotel()
    {
        this->id = idCounter++;
        this->setData();
    }

    void getData()
    {
        C << this->id << "\t" << this->rating << "\t" << this->type << "\t" << this->staff
    }

    void getHeading()
    {
        C << "Id\tRating\tType\tRoom Quantity\tStaff Quantity\tLocation\tEstablished Year" << endl
          << endl
          << "=======\t=======\t=======\t=============\t===============\t=========\t================" << endl;
    }
} H;

int Hotel::idCounter = 0;
string Hotel::name = "Goggle";
int Hotel::estYear = 2000;

int main()
{
    user();
    return 0;
}

void user()
{
    C << " Enter Total Number of Hotels : ";
    int size = getInt();

    H::setStaticData();

    H h[size];
}