#include <iostream>
using namespace std;

int main() {
    int hoursPerDay;
    const int totalHours = 10000;

    // Get user input for hours per day
    cout << "How many hours are you willing to practice every day? ";
    cin >> hoursPerDay;

    if (hoursPerDay <= 0) {
        cout << "Invalid input. Please enter a positive number of hours per day." << endl;
    } else {
        int totalDays = totalHours / hoursPerDay;
        int years = totalDays / 365;

        if (years == 0) {
            cout << "It will take less than a year to reach 10,000 hours at this rate." << endl;
        } else {
            cout << "You will need to practice for " << years << " years to reach 10,000 hours." << endl;
        }
    }

    return 0;
}
