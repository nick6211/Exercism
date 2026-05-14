/*if (balance <0){
        result = balance+balance*0.03213;
    }else if((balance>=0)&&(balance<1000)){
        result = balance+balcance*0.005;
    }else if((balance>=1000)&&(balance < 5000)){
        result = balance+balance*0.01621;
    }else{
        result = balance+balance*0.02475;
    }
*/


// interest_rate returns the interest rate for the provided balance.
double interest_rate(double balance) {
    // TODO: Implement the interest_rate function
    double rate;
    if (balance <0){
        rate = 0.03213;
    }else if((balance>=0)&&(balance<1000)){
        rate = 0.005; 
    }else if((balance>=1000)&&(balance < 5000)){
        rate = 0.01621;
    }else{
        rate = 0.02475;
    }
    return rate*100;
}

// yearly_interest calculates the yearly interest for the provided balance.
double yearly_interest(double balance) {
    // TODO: Implement the yearly_interest function
    double rate;
    if (balance < 0) {
        rate = 0.03213;
    } else if (balance < 1000) { 
        rate = 0.005;
    } else if (balance < 5000) { 
        rate = 0.01621;
    } else {
        rate = 0.02475;
    }
    
    return balance*rate;
}

// annual_balance_update calculates the annual balance update, taking into
// account the interest rate.
double annual_balance_update(double balance) {
    // TODO: Implement the annual_balance_update function
    
    return balance+yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int year;
    for (year = 0 ; target_balance>balance;year++){
       balance +=yearly_interest(balance); 
    }
    return year;
}
