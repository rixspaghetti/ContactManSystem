/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST 210
 * Wed/Fri
 * Help from ACE center
 */

#ifndef CONTACTMANSYSTEM_ADDRESS_H
#define CONTACTMANSYSTEM_ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class Address
{
private:
    string streetAddy;
    string zip;
    string state;
public:
    Address(string, string, string);
    Address();

    void setStreetAddy(string a);
    void setZip(string z);
    void setState(string s);
    string getStreetAddy();
    string getZip();
    string getState();
};

// implement functions
Address::Address()
{
    streetAddy = "";
    state = "";
    zip = "";
}

Address::Address(string s, string z, string a)
{
this->state = s;
this->zip = z;
this->streetAddy = a;
}
void Address::setStreetAddy(string a)
{
    streetAddy = a;
}
void Address::setZip(string z)
{
    zip = z;
}
void Address::setState(string s)
{
    state = s;
}

string Address::getStreetAddy()
{
    return streetAddy;
}

string Address::getZip()
{
    return zip;
}
string Address::getState()
{
    return state;
}



#endif //CONTACTMANSYSTEM_ADDRESS_H
