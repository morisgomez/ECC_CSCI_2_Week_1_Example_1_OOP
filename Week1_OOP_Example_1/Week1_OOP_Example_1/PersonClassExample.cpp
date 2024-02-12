/*
 Program Name: PersonClassExample.cpp
 Programmer: Moris
 Date: Saturday 02/10/2024
 Version Control: 1.0
 About: Week 1, CSCI 2.
 Description:
 We create a class Person and then we create objects
 of the class and display them.
*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    char gender; //'M' or 'F'
    string ssn; //Social Security Number.
    
public:
    //default constructor or constructor w/ no argument.
    //note: constructor are for initialization purposes of privates.
    //note: constructors are not functions.
    //constructor w/ no arguments.
    Person()
    {
            
    }
    //constructor w/ 2 arguments.
    Person(string nam, char gen)
    {
        name = nam;
        gender = gen;
    }
    //constructor w/ 3 arguments.
    Person(string nam, char gen, string s)
    {
        name = nam;
        gender = gen;
        ssn = s;
    }
    //Accessors or getter function:
    //note: have a return type bc we need to get values from private attributes.
    string getName()
    {
        return name;
    }
    char getGender()
    {
        return gender;
    }
    string getSSN()
    {
        return ssn;
    }
    
    //Mutators or setter functions to modify values of privates:
    //note: we can modify values of private attributes. no return values so we use void type.
    void setName(string n)
    {
        name = n;
    }
    void setGender(char g)
    {
        gender = g;
    }
    void setSSN(string s)
    {
        ssn = s;
    }
    void display()
    {
        cout << "name: " << name << endl << "gender: " << gender << endl << "ssn: " << ssn << endl;
    }
}; //end class Person.

//note: driver for the class in c++ is the main function so we can create objects of the class Person.

int main() {
    //create object using constructor w/ 3 arguments:
    Person Employee1("David Smith", 'M', "333-66-8787");
    //call function display:
    Employee1.display();
    cout << endl << endl;
    
    //change ssn of emplpoyee1:
    Employee1.setSSN("111-11-111");
    Employee1.display();
    cout << endl << endl;
    
    //create object using constructor w/ no arguments:
    Person Employee2;
    Employee2.display();
    cout << endl << endl;
    
    //set name, gender and ssn for employee2:
    Employee2.setName("Moris Gomez");
    Employee2.setGender('M');
    Employee2.setSSN("000-00-000");
    Employee2.display();
    cout << endl << endl;
    return 0;
}
