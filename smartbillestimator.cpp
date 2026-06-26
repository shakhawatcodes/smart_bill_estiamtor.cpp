/*
Smart Bill Estimator

A C++ program that calculates electricity consumption,
estimated bill, peak load, current requirement,
and recommends an appropriate MCB rating
for multiple household appliances.
*/

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of appliances: ";
    cin>>n;

    double totalBill = 0;
    double totalUnit = 0;
double totalPower = 0;
double voltage = 220;//for bangladesh .
    for(int i=1; i<=n; i++){

        cout<<"\n===== Appliance "<<i<<" =====\n";

        string applianceName;
        cout<<"Enter the name of the appliance: ";
        cin>>applianceName;

        float PR; // Power Rating in watt
        cout<<"Enter the power rating of the appliance in watts: ";
        cin>>PR;

        float UHPD; // Usage Hour Per Day
        cout<<"Enter Usage hour per day: ";
        cin>>UHPD;

        int days;
        cout<<"Enter the number of days: ";
        cin>>days;

        float ER;
        cout<<"Enter the rate of electricity in taka per unit: ";
        cin>>ER;

        double dailyUnit, monthlyUnit, bill;

        dailyUnit = (PR * UHPD) / 1000;
        monthlyUnit = dailyUnit * days;
        bill = monthlyUnit * ER;

        totalUnit += monthlyUnit;
        totalBill += bill;
totalPower += PR;
        cout << fixed << setprecision(2);

        cout << "\nAppliance Name: " << applianceName << endl;
        cout << "Daily Unit Consumption: " << dailyUnit << " kWh" << endl;
        cout << "Total Unit Consumption: " << monthlyUnit << " kWh" << endl;
        cout << "Estimated Electricity Bill: " << bill << " Taka" << endl;
    }

    cout << "\n====================================";
    cout << "\nTOTAL UNIT CONSUMPTION: " << totalUnit << " kWh";
    cout << "\nTOTAL ELECTRICITY BILL: " << totalBill << " Taka";
    cout << "\n====================================\n";
cout << "\nPeak Load: " << totalPower << " W" << endl;
cout << "Peak Load: " << totalPower/1000 << " kW" << endl;

double current = totalPower / voltage;

cout << "Current Required: "
     << current
     << " A" << endl;

     if(current <= 6)
{
    cout << "Recommended Miniature Circuit Breaker: 6A" << endl;
}
else if(current <= 10)
{
    cout << "Recommended Miniature Circuit Breaker: 10A" << endl;
}
else if(current <= 16)
{
    cout << "Recommended Miniature Circuit Breaker: 16A" << endl;
}
else if(current <= 20)
{
    cout << "Recommended Miniature Circuit Breaker: 20A" << endl;
}
else if(current <= 32)
{
    cout << "Recommended Miniature Circuit Breaker: 32A" << endl;
}
else
{
    cout << "Warning! Industrial Load Detected." << endl;
}
    return 0;
}