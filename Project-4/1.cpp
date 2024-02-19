#include "../Functions.cpp"

typedef class Message
{
private:
    string str;

public:
    Message(string str)
    {
        this->str = str;
    }

    void print()
    {
        C << this->str << endl;
    }

    void print(string str)
    {
        string strSum = this->str + str;
        cout << strSum << endl;
    }
} Msg;

int main()
{
    user();
}

void user()
{
    C << "Enter Your First Name : ";
    string str = getString();

    Msg a(str);

    C << "Ente Your Second Name : ";
    string str2 = getString();

    a.print();
    a.print(str2);
}