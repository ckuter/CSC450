#include<iostream>
using namespace std;

int main(){
    string fathersName;
    string mothersName;
    string citizenship; //the country they hold citizenship for
    string cityOfResidence; //the city they currently live in
    string age;

    cout<< "Please answer the following questions pertaining to your fictional person:"<<endl<<endl;
    cout<< "What is their father's name?"<<endl;
    getline(cin, fathersName);

    cout<<"\nWhat is their mother's name?"<<endl;
    getline(cin, mothersName);

    cout<< "\nWhat is their country of citizenship?"<<endl;
    getline(cin, citizenship);

    cout<< "\nWhat city do they reside in?"<<endl;
    getline(cin, cityOfResidence);

    cout<<"\nWhat is their age (in years)?"<<endl;
    cin>> age;

    cout<<endl<<endl;
    cout<< "Here is what we know about your fictional person:"<<endl;
    cout<<"Father's name: "<<fathersName<<endl;
    cout<<"Mother's name: "<<mothersName<<endl;
    cout<<"Country of Citizenship: "<<citizenship<<endl;
    cout<<"City of Residence: "<<cityOfResidence<<endl;
    cout<<"Age: "<<age<<endl;

}
