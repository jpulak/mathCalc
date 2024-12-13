/******************************************************************************
3.5 lab- Create a program converting currency
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// named constants for currency conversion rates

const double CAD_CONVERSION = 1.35;
const double PESOS_CONVERSION = 18.36;
const double GBP_CONVERSION = 0.829;

//function

int main()
{
    
    //initializing variables
    
    double dollars;
    double cad;
    double pesos;
    double gbp;
    
    //get inputs
    
    cout << "Enter an amount in US dollars: ";
    cin >> dollars;
    // convert to corresponding currencies

    cad = CAD_CONVERSION * dollars;
    pesos = PESOS_CONVERSION * dollars;
    gbp = GBP_CONVERSION * dollars;
    
    //new line
    
    cout << endl;
    
    // output first column
    
    cout << setw(12) << right << "Dollars" << "\t" << setw(12) << right << "CAD" << "\t" 
    << setw(12) << right << "Pesos" << "\t" << setw(12) << right << "GBP" << endl;
   
    // output second column
   
    cout << setw(12) << right << fixed << setprecision(2) << dollars << "\t" << 
    setw(12) << right << cad << "\t" << setw(12) << right << pesos << "\t" << 
    setw(12) << right << gbp << endl;
    return 0;
}
