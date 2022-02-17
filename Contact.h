/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST 210
 * Wed/Fri
 * Help from ACE center
 */

#ifndef CONTACTMANSYSTEM_CONTACT_H
#define CONTACTMANSYSTEM_CONTACT_H

#include <string>
#include <iostream>
#include "Address.h"
#include "Name.h"

using namespace std;

class Contact
{
    // access specifier
private:
    // data members
Name name;
int id;
Address address;
string phone;
string zip;
void setId(int);


public:
    // member functions
    static int totalCt;
    Contact(string, string, string, string, string, string);
    void setfName(string);
    void setlName(string);
    void setStreetAddy(string);
    void setState(string);
    void setZip(string);
    void setPhone(string);
    string getState();
    string getZip();
    string getStreetAddy();
    string getfName();
    string getlName();
    string getPhone();
};

// initialize static variable
int Contact::totalCt = 0;
// costructor
Contact::Contact(string f, string l, string phone, string streetAddy, string zip, string state)
{
    name.setfName(f);
    name.setlName(l);
    address.setStreetAddy(streetAddy);
    address.setState(state);
    address.setZip(zip);

    this->phone = phone;
    totalCt++;
    id = totalCt;
}

void Contact::setfName(string f)
{
    name.setfName(f);
}

void Contact::setlName(string l)
{
    name.setlName(l);
}

void Contact::setStreetAddy(string streetAddy)
{
    address.setStreetAddy(streetAddy);
}

void Contact::setState(string state)
{
    address.setState(state);
}

void Contact::setZip(string zip)
{
    address.setZip(zip);
}
void Contact::setPhone(string phone)
{
    this->phone = phone;
}
string Contact::getState()
{
    return address.getState();
}
string Contact::getZip()
{
    return address.getZip();
}
string Contact::getStreetAddy()
{
    return address.getStreetAddy();
}
string Contact::getfName()
{
    return name.getfName();
}
string Contact::getlName()
{
    return name.getlName();
}
string Contact::getPhone()
{
    return phone;
}




#endif //CONTACTMANSYSTEM_CONTACT_H
