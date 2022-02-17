/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST 210
 * Wed/Fri
 * Help from ACE center
 */
#include <iostream>
#include <string>

#ifndef CONTACTMANSYSTEM_NAME_H
#define CONTACTMANSYSTEM_NAME_H
using namespace std;

class Name
{
private:
    // instance variables declared
    string fName;
    string lName;
    //string fullName;

public:

    Name(string, string);
    Name();
    string getfName();
    string getlName();
    void setlName(string);
    void setfName(string);

    void getfullName();
    string setfullName();


    // friend function to get full name
    friend Name operator<<(ostream&, const Name&);


};

//implementation of the constructor
Name::Name(string fName, string lName)
{
    this->fName = fName;
    this->lName = lName;
}

Name::Name()
{
    this->fName = "";
    this->lName = "";
}

string Name::getfName()
{
    return fName;
}

void Name::setfName(string f)
{
    fName = f;
}

string Name::getlName()
{
    return lName;
}

void Name::setlName(string l)
{
    lName = l;
}

//ostream& operator<<(ostream&out, Name n)
//{
   // o << n.fName << "/n" << n.getlName() << endl;
//}


#endif //CONTACTMANSYSTEM_NAME_H
