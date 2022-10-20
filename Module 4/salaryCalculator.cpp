#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    //variables for standard hours worked, rate of pay, overtime hours, and final salary
    double hrsWorked, payRate, overtimeHrs, salary; 

    //pointer variables for the above
    double *stdHours = new double(), *pay = new double(), *overtime = new double();

    cout << "Welcome to the Employee Salary Calculator Program!" << endl;
    cout <<"In this program, we will be calculating an appropriate pay for the hours you worked." << endl;
    cout << "To do so, please enter the information asked below." << endl << endl;
    
    cout << "Enter the standard amount of hours you work: ";
    cin >> hrsWorked;

    cout << "Enter the amount of overtime hours you worked: ";
    cin >> overtimeHrs;

    cout << "Enter your rate of pay: ";
    cin >> payRate;
    
    salary = (hrsWorked * payRate) + (overtimeHrs * (1.5 * payRate));

    stdHours = &hrsWorked;
    pay = &payRate; 
    overtime = &overtimeHrs;

    cout << endl << setw(45) << left << "The information you provided is as follows:";
  
    cout << endl << setw(30) << "Your standard hours worked = " << fixed << setprecision(2) << hrsWorked
    << setw(30) << "\t\tStandard Hours Pointer = "<< stdHours;
    
    cout << endl << setw(30) <<"Your overtime worked = "<< fixed << setprecision(2) << overtimeHrs
    << setw(30) << "\t\tOverTime Hours Pointer = "<< overtime;
    
    cout << endl << setw(30) << "Your rate of pay = "<< fixed << setprecision(2) << payRate
    << setw(30) << "\t\tPay Rate Pointer = " << pay;

    cout << endl << setw(70) << setprecision(2) <<"Based on the information you provided, your total salary should be $" << salary << ".";

    delete stdHours;
    delete pay;
    delete overtime;

    return 0;
}

