#include <iostream>
#include <string.h>
#define C cout
#define c cin
using namespace std;

int getInt();
string getString();
double getDouble();
bool checkEmail(string email);
string selectCity();
bool checkPSW(string psw);
void user();

int getInt()
{
    int num;
    c >> num;
    return num;
}

string getString()
{
    string str;
    c >> str;
    return str;
}

double getDouble()
{
    double num;
    c >> num;
    return num;
}