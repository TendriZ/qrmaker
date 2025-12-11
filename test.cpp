#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;


double calculate_weekday_fee(int duration_minutes) {
    const double first_2_hours = 5.0;
    const double office_hours = 3.0;
    const double after_office_hours = 11.0;
    const double weekend_fee = 4.0;

    if (duration_minutes <= 120 ) {
        return first_2_hours;
    } else if (duration_hours <= 8) {
        return first_2_hours + (duration_hours - 2) * office_hours;
    } else {
        return first_2_hours + (6 * office_hours) + (duration_hours - 8) * after_office_hours;
    }
}
int main() {
    cout<<"waktu berapa anda masuk parkir"<<endl;
}