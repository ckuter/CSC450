#include <iostream>
using namespace std;

int main(){
    int integer1 = 0, integer2 = 0, integer3 = 0;
    int *point1 = NULL, *point2 = NULL, *point3 = NULL; 
    
    cout << "Welcome to the Integer Pointers Program!" << endl;
    cout << "To begin, please enter the values for three different integers." << endl << endl;
    
    cout << "Integer One: "; 
    cin >> integer1;
    cout << "Integer Two: ";
    cin >> integer2;
    cout << "Integer Three: ";
    cin >> integer3;

    point1 = new int(integer1);
    point2 = new int(integer2);
    point3 = new int(integer3);

    cout << endl << "We will now print your three integers using both their integer variables and their pointer variables." << endl << endl;
    
    cout << "With integer variables, your three values were..." << endl;
    cout << "Integer One: " << integer1 << endl;
    cout << "Integer Two: " << integer2 << endl;
    cout << "Integer Three: " << integer3 << endl << endl;

    cout << "With pointer variables, your three values were..." << endl;
    cout << "Pointer One: " << *point1 << endl;
    cout << "Pointer Two: " << *point2 << endl;
    cout << "Pointer Three: " << *point3 << endl << endl;

    delete point1;
    delete point2;
    delete point3;

    cout << "Thank you for using our program.";


}