/*
 * Ricardo Escarcega
 * Prof Fritz
 * CST 210
 * Wed/Fri
 * Help from ACE center
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Contact.h"
#include "Name.h"
#include "Address.h"

using namespace std;

string loadContacts(istream& in);
void newContact(Contact* newC);

int main() {

    // import the file using ifstream
    ifstream file("/Users/rickyescar/Downloads/contact.txt");
    vector<string> contact;
    string input;
    while (getline(file,input))
    {
        contact.push_back(input);
    }

    for (string contact : contact)
    {
        //cout << contact << endl;
    }


    string fName;
    string lName;
    string phoneNum;
    string streetAddy, state, zip;

   // creat a vector of contacts
   vector<Contact> Contvect;

   // call load contact
   void loadContacts();

   // add a contact
   // add to the contact vector
   vector<string> updatedVect;
   //new Contact();
  // updatedVect.push_back(c);



   // search for a contact by ID
   //for loop to iterate through the id

   // write and update contact to the file

    cout << "Enter your first name pls:" << endl;
    cin >> fName;
    cout << "Enter your last name pls:" << endl;
    cin >> lName;

    // cout and cin from user
    cout << "Enter your address:" << endl;
    cin >> streetAddy;

    cout << "Enter your state:" << endl;
    cin >> state;

    cout << "Enter your zipcode:" << endl;
    cin >> zip;

    cout << "Enter your phone number:" << endl;
    cin >> phoneNum;

    Contact* c = new Contact(fName, lName, phoneNum, streetAddy, zip, state);

    // create a new contact
    newContact(c);

    // write to file
    ofstream newContactF("ncontact.txt");
    newContactF << newContact;
    newContactF.close();

    return 0;
}
void loadContacts (istream& in, vector<Contact>& lst)
{
    if (!in)
    {
       cout << "file not found" << endl;
       exit(10);
    }

    string s;
    while(in >> s)
    {

        for(int i = 0; i < 6; i++)
        {
            getline(in, s);
            cout << s << endl;
        }
    }
}

void newContact(Contact* newC)
{
    cout << "Your new contact:" << endl;
    cout << newC->getfName() << endl;
    cout << newC->getlName() << endl;
    cout << newC->getStreetAddy() << endl;
    cout << newC->getState() << endl;
    cout << newC->getZip() << endl;
    cout << newC->getPhone() << endl;
}
