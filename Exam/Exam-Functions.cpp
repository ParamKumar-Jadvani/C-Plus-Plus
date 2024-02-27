#include<iostream>
using namespace std;
#define CO cout
#define CI cin 

int getInt();
string getString();
double getDouble();
void user();

int getInt()
{
    int num;
    CI >> num;
    return num;
}

string getString()
{
    string str;
    CI >> str;
    return str;
}

double getDouble()
{
    double num;
    CI >> num;
    return num;
}