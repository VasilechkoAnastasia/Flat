#include <iostream>
using namespace std;

class Flat
{
    double area;    
    double price;   

public:
   
    Flat(double a = 0.0, double p = 0.0) : area(a), price(p) {}

    bool operator==(const Flat& other) const
    {
        return area == other.area;
    }

    Flat& operator=(const Flat& other)
    {
        if (this != &other)
        {
            area = other.area;
        }
        return *this;
    }

    bool operator>(const Flat& other) const
    {
        return price > other.price;
    }

    bool isPriceEqual(const Flat& other) const
    {
        return price == other.price;
    }

    void display() const
    {
        cout << "Area: " << area << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Flat flat1(35, 10000);
    Flat flat2(60, 150000);

    if (flat1 == flat2)
    {
        cout << "Flat1 = flat2 area" << endl;
    }
    else
    {
        cout << "Flat1 != flat2 area" << endl;
    }

    flat1 = flat2;
    cout << "Flat1: ";
    flat1.display();

    if (flat1 > flat2)
    {
        cout << "Flat1 > flat2 money" << endl;
    }
    else if (flat1.isPriceEqual(flat2))
    {
        cout << "Flat1 = flat2 money" << endl;
    }
    else
    {
        cout << "Flat1 < flat2 money" << endl;
    }
}