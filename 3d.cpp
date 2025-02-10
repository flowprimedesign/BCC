// Description: prompt for th yearly income, then calculate the tax based on the following table:
// 0-30k: 0%
// 30k-50k: 10%
// 50k-100k: 20%
// 100k-200k: 30%
// 200k-250k: 35%
// 250k+: 40%


#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double income;
    
    cout << "Enter your yearly income" << endl;
    cin >> income;

    //each tier of income has a different deduction total
    //start variable for each tier of income then add at the end

    //dedutionTotal will change based on each tier of income

    double ded0=0, ded1=0, ded2=0, ded3=0, ded4=0, dedTotal=0;

    if (income < 30000) {
        ded0 = 0;
        dedTotal = ded0;
    } else if (income >= 30000 && income <= 49999) {
        ded0 = (income - 30000) * 0.1;
        dedTotal = ded0;
    } else if (income >= 50000 && income <= 99999) {
        ded0 = (49999 - 30000) * 0.1;
        ded1 = (income - 49999) * 0.2;
        dedTotal = ded0 + ded1;
    } else if (income >= 100000 && income <= 199999) {
        ded0 = (49999 - 30000) * 0.1;
        ded1 = (99999 - 49999) * 0.2;
        ded2 = (income - 99999) * 0.3;
        dedTotal = ded0 + ded1 + ded2;
    } else if (income >= 200000 && income <= 249999) {
        ded0 = (49999 - 30000) * 0.1;
        ded1 = (99999 - 49999) * 0.2;
        ded2 = (249999 - 99999) * 0.3;
        ded3 = (income - 249999) * 0.35;
        dedTotal = ded0 + ded1 + ded2 + ded3;
    } else if (income > 250000) {
        ded0 = (49999 - 30000) * 0.1;
        ded1 = (99999 - 49999) * 0.2;
        ded2 = (199999 - 99999) * 0.3;
        ded3 = (249999 - 199999) * 0.35;
        ded4 = (income - 250000) * 0.4;
        dedTotal = ded0 + ded1 + ded2 + ded3 + ded4;
    
    }

    cout << "Your 2025 income was: " << income << endl;
    cout << "Deductions: " << endl;
    cout << ded0 << endl;
    cout << ded1 << endl;
    cout << ded2 << endl;
    cout << ded3 << endl;
    cout << ded4 << endl;
    cout << "total deductions: " << dedTotal << endl;
    cout << "Net 2025 income (after deductions): " << income - dedTotal << endl;

    return 0;
}