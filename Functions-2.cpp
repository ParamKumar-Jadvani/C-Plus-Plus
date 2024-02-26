#include "Functions.cpp"

bool checkEmail(string email)
{
    int sym = 0, temp1 = 0, len = 0;

    for (int i = 0; email[i] != '\0'; i++)
    {
        if (email[i] == 64 || email[i] == 46)
            sym++;

        if (email[i] == 64)
            temp1 = i;
    }

    while (len < temp1)
        len++;

    if (sym == 2)
    {
        if (email[temp1 + 1] == 'g')
            ;
        else
        {
            cout << "Your Email has not g character" << endl;
            goto rev;
        }
    }
    else
    {
        C << "Your Email has not a @ or . symbol" << endl;
        goto rev;
    }

    if (email[temp1 + 2] == 'm')
        ;
    else
    {
        C << "Your Email has not a m character" << endl;
        goto rev;
    }

    if (email[temp1 + 3] == 'a')
        ;
    else
    {
        C << "Your Email has not  a character" << endl;
        goto rev;
    }

    if (email[temp1 + 4] == 'i')
        ;
    else
    {
        C << "Your Email has not  i character" << endl;
        goto rev;
    }

    if (email[temp1 + 5] == 'l')
        ;
    else
    {
        C << "Your Email has not  l character" << endl;
        goto rev;
    }

    if (len > 0 && len < 15)
        ;
    else
    {
        C << "Your Email has so much length" << endl;
        goto rev;
    }

    return true;
rev:
    return false;
}

bool checkAge(int age)
{
    if (age > 18 && age < 30)
        return true;
    else
    {
        C << endl
          << "Sorry, Age must be between 18 and 30" << endl;
        return false;
    }
}

string selectCity()
{
rev:
    int city;

    C << endl
      << "\t--- Select your State ---" << endl
      << "\t\t1) Rajasthan" << endl
      << "\t\t2) Gujarat" << endl
      << "\t\t3) Maharastra" << endl
      << endl;
    int state = getInt();

    switch (state)
    {
    case 1:
    back1:
        C << endl
          << "\t\t\t--- Select your City ---" << endl
          << "\t\t\t\t1) Jaipur" << endl
          << "\t\t\t\t2) Jhodhpur" << endl
          << "\t\t\t\t3) Kota" << endl
          << "\t\t\t\t4) Udaipur" << endl
          << "\t\t\t\t5) Ajmer" << endl
          << "\t\t\t\t6) Jaisalmer" << endl
          << "\t\t\t\t7) Sri Nagar" << endl
          << endl;
        city = getInt();

        switch (city)
        {
        case 1:
            return "Jaipur";

        case 2:
            return "Jhodhpur";

        case 3:
            return "Kota";

        case 4:
            return "Udaipur";

        case 5:
            return "Ajmer";

        case 6:
            return "Jaisalmer";

        case 7:
            return "Sri Nagar";

        default:
            C << endl
              << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
            goto back1;
        }

    case 2:
    back2:
        C << endl
          << "\t\t\t--- Select your City ---" << endl
          << "\t\t\t\t1) Ahmedabad" << endl
          << "\t\t\t\t2) Gandhinagar" << endl
          << "\t\t\t\t3) Surat" << endl
          << "\t\t\t\t4) Rajkot" << endl
          << "\t\t\t\t5) Bhavnagar" << endl
          << "\t\t\t\t6) Vadodara" << endl
          << "\t\t\t\t7) Dwarka" << endl
          << endl;
        city = getInt();

        switch (city)
        {
        case 1:
            return "Ahmedabad";

        case 2:
            return "Gandhinagar";

        case 3:
            return "Surat";

        case 4:
            return "Rajkot";

        case 5:
            return "Bahavnagar";

        case 6:
            return "Vadodara";

        case 7:
            return "Dwarka";

        default:
            C << endl
              << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
            goto back2;
        }

    case 3:
    back3:
        C << endl
          << "\t\t\t--- Select your City ---" << endl
          << "\t\t\t\t1) Mumbai" << endl
          << "\t\t\t\t2) Pune" << endl
          << "\t\t\t\t3) Nashik" << endl
          << "\t\t\t\t4) Nagpur" << endl
          << "\t\t\t\t5) Navi Mumbai" << endl
          << "\t\t\t\t6) Panvel" << endl
          << "\t\t\t\t7) Ratnagiri" << endl
          << endl;
        city = getInt();

        switch (city)
        {
        case 1:
            return "Mumbai";

        case 2:
            return "Pune";

        case 3:
            return "Nashik";

        case 4:
            return "Nagpur";

        case 5:
            return "Navi Mumbai";

        case 6:
            return "Panvel";

        case 7:
            return "Ratnagiri";

        default:
            C << endl
              << "Sorry, We Can't find your city Please Re-Enter !!" << endl;
            goto back3;
        }

    default:
        C << endl
          << "Sorry, We Can't find your state Please Re-Enter !!" << endl;
        goto rev;
    }
}