#include <iostream>
#include <string.h>
using namespace std;

int getInt();
string getString();
double getDouble();
bool checkEmail(string email);
string selectCity();
bool checkPSW(string psw);

int getInt()
{
    int num;
    cin >> num;
    return num;
}

string getString()
{
    string str;
    cin >> str;
    return str;
}

double getDouble()
{
    double num;
    cin >> num;
    return num;
}