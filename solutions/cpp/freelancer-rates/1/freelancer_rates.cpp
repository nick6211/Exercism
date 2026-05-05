// INFO: Headers from the standard library should be inserted at the top via
// #include <LIBRARY_NAME>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    // TODO: Implement a function to calculate the daily rate given an hourly 
    // rate
    return hourly_rate*8.0;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    // TODO: Implement a function to calculate the price after a discount.
    return before_discount*(1.0-(discount/100.0));
}
#include <cmath> 

int monthly_rate(double hourly_rate, double discount) {
    double base_monthly = hourly_rate * 8.0 * 22.0;
    
    double discounted_monthly = base_monthly * (1.0 - (discount / 100.0));
    
    return static_cast<int>(std::ceil(discounted_monthly));
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    // TODO: Implement a function that takes a budget, an hourly rate, and a
    // discount, and calculates how many complete days of work that covers.
    
    return (budget/((hourly_rate*8.0)*(1-(discount/100.0))));
}
