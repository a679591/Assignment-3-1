#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    ifstream inFile;
    ofstream outFile;
    string firstName, lastName, department;
    double monthlyGrossSalary, bonus, taxRate;
    double distanceTraveled, travelTime;
    int coffeCupsSold;
    double perCup;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    inFile >> firstName >> lastName >> department;
    inFile >> monthlyGrossSalary >> bonus >> taxRate;
    inFile >> distanceTraveled >> travelTime;
    inFile >> coffeCupsSold >> perCup;

    outFile << fixed << setprecision (2);
    outFile << "Name: " << firstName << " " << lastName;
    outFile << ", " << "Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << monthlyGrossSalary;
    outFile << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxRate << "%" << endl;
    outFile << "Paycheck: $";
    outFile << monthlyGrossSalary * (1 + bonus/100) * (1 - taxRate/100);
    outFile << endl << endl;
    outFile << "Distance Traveled: " << distanceTraveled << " miles";
    outFile << ", Traveling Time: " << travelTime << " hours" << endl;
    outFile << "Average Speed: " << distanceTraveled / travelTime << " miles per hour";
    outFile << endl << endl;
    outFile << "Number of Coffee Cups Sold: " << coffeCupsSold;
    outFile << ", Cost: $" << perCup << " per cup" << endl;
    outFile << "Sales Amount = $" << coffeCupsSold * perCup;
    outFile << endl << endl;

    inFile.close();
    outFile.close();

    return 0;
}
