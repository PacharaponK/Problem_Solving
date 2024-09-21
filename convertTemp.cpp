#include <iostream>
using namespace std;

int convertCelcius(string type, int temp) {
    if (type == "K") {
        temp = temp + 273;
    }
    else {
        temp = ((9/5)*temp) + 32;
    }
    return temp;
}

int main() {
    int temp; string type;
    cout << "Type your temperature in celcius: ";
    cin >> temp;
    cout << "Which convert type? (K/F): ";
    cin >> type;
    int convertedTemp = convertCelcius(type, temp);
    cout << "Your converted temperature is: " << convertedTemp << '\n';
    return 0;
}