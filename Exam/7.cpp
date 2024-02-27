#include "Exam-Functions.cpp"

class Animal
{
public:
    virtual void sound()
    {
        CO << "Animal has different types of voice." << endl;
    }

    virtual void move()
    {
        CO << "Animal movement is also different types." << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        CO << endl
           << "Dog sound is BHOU BHOU." << endl;
    }

    void move()
    {
        CO << endl
           << "Dog is move on 4 legs on the Earth." << endl;
    }
};

class Bird : public Animal
{
public:
    void sound()
    {
        CO << endl
           << "Bird sound is CHI CHI CHI & TAHOOK TAHOOK." << endl;
    }

    void move()
    {
        CO << endl
           << "Bird is move on 2 legs & They have 2 wings to fly in sky ." << endl;
    }
};

int main()
{
    user();
    return 0;
}

void user()
{
    Dog d;
    Bird b;

    Animal *ptr[2];

    ptr[0] = &d;
    ptr[1] = &b;

    ptr[0]->sound();
    ptr[0]->move();

        ptr[1]->sound();
    ptr[1]->move();
}
