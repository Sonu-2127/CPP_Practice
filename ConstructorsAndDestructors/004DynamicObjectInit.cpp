#include <iostream>
using namespace std;

class FixedDeposit{
    long int principalAmount;
    int tenureInYears;
    float rateOfInterest;
    float returnOnInvestment;
    public:
    FixedDeposit(){}
    FixedDeposit(long int p, int y, float r= 0.12);
    FixedDeposit(long int p, int y, int r);
    void showdata(void);
};
FixedDeposit :: FixedDeposit(long int p, int y, float r){
    principalAmount = p;
    tenureInYears = y;
    rateOfInterest = r;
    returnOnInvestment = principalAmount;
    for(int i = 0; i < tenureInYears; i++){
        returnOnInvestment = returnOnInvestment*(1+r);
    }
}
FixedDeposit :: FixedDeposit(long int p, int y, int r){
    principalAmount = p;
    tenureInYears = y;
    rateOfInterest = r;
    returnOnInvestment = principalAmount;
    for(int i = 0; i < tenureInYears; i++){
        returnOnInvestment = returnOnInvestment*(1.0+(float(r)/100));
    }
}
void FixedDeposit :: showdata(void){
    cout << "Principal Amount: " << principalAmount << endl;
    cout << "Return On Investment: " << returnOnInvestment << endl;
}
int main(void){
    FixedDeposit FD1,FD2,FD3;
    long int principalAmount;
    int rateOfInterest_integer;
    float rateOfInterest_decimal;
    int tenureInYears;
    cout << "Enter principal, rate(in decimal) and years: " << endl;
    cin >> principalAmount >> rateOfInterest_decimal >> tenureInYears;
    FD1 = FixedDeposit(principalAmount,tenureInYears,rateOfInterest_decimal);
    cout << "Enter principal, rate(in integer) and years: " << endl;
    cin >> principalAmount >> rateOfInterest_integer >> tenureInYears;
    FD2 = FixedDeposit(principalAmount,tenureInYears,rateOfInterest_integer);
    cout << "Enter principal, years: " << endl;
    cin >> principalAmount >> tenureInYears;
    FD3 = FixedDeposit(principalAmount,tenureInYears);
    cout <<"Deposit 1:\n"; FD1.showdata();
    cout <<"Deposit 2:\n"; FD2.showdata();
    cout <<"Deposit 3:\n"; FD3.showdata();
    return 0;
}