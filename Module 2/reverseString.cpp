#include <iostream>
#include <string.h>

using namespace std;

char reverse(char s){
    char result;
    for (int i = 0; i < strlen(s); ++i){
        result += s[strlen(s) - i - 1];
    }
    return result;
}

int main(){
    char x(25); 
    cout << "Enter your first string: ";
    cin.width(14);
    cin >> x;
    cout << "The reverse of \"" << x << "\" is \"" << reverse(x) << "\"" << endl;
    
    char y(50);
    cout << "\nEnter your second string: ";
    cin >> y;
    cout << "The reverse of \"" << y << "\" is \"" << reverse(y) << "\"" << endl;
    
    char z(10);
    cout << "\nEnter your third and final string: ";
    cin >> z;
    cout << "The reverse of \"" << z << "\" is \"" << reverse(z) << "\"" << endl;
}
