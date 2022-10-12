#include<iostream>
using namespace std;

int main()
{
    //Declare Variables
    string userName, userCourse, userSection, userSubject, userAddress;
    int userAge;
    //ask user to enter his/her name
    cout << "Enter Your Name: ";
    cin >> userName;
    //ask user to enter his/her age
    cout << "Enter Your Age: ";
    cin >> userAge;
    //ask user to enter his/her course
    cout << "Enter Your Course: ";
    cin >> userCourse;
    //ask user to enter his/her section
    cout << "Enter Your Section: ";
    cin >> userSection;
    //ask user to enter his/her subject
    cout << "Enter Your Subject: ";
    cin >> userSubject;
    //ask user to enter his/her address
    cout << "Enter Your Address: ";
    cin >> userAddress;
    //print all of the data that entered by user
    cout << "Your Name is " << userName << endl;
    cout << "Your Age is " << userAge << endl;
    cout << "Your Course is " << userCourse << endl;
    cout << "Your Section is " << userSection << endl;
    cout << "Your Subject is " << userSubject << endl;
    cout << "Your Address is " << userAddress << endl;
    return 0;
}