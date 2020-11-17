/*
    Name: Recursive GCF 
    Copyright: Brayan Villatoro
    Author: Brayan Villatoro
    Date: 11/07/2020 5:41AM
    Description:

    CSCI-373 (FALL 2020) (Prof. Abdu) (Assignment 4) (John Jay College)
    -----------------------------------------------------------------------------------
    - Must use the following rules
    o GCF (n,m) = m                 if m<=n and n mod m= 0  
    o GCF (n,m) = GCF (m,n)         if n<m
    o GCF (n,m) = GCF (m,n mod m)   otherwise
    o User can enter as many values 
    o Recursive function to find GCF 

    • Main.cpp
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Logic 
int GCF(int n, int m) 
{
    // if m<=n and n mod m= 0  :: Rule 1 
    if (m <= n && n % m == 0) 
    {
        return m;
    }
    // if n<m, then gcf= GCF(m,n) :: Rule 2 
    if (n < m) 
    {
        return GCF(m, n);
    }
    // GCF(m, n mod m) :: Rule 3 
    return GCF(m, n % m);
}

int main()
{ 
    cout <<"\n\t\t\t\t\tJohn Jay College GCF\n\n";
    // Duo arrays of size 50 for storage of entered numbers, Count ZERO 
    int first[50], second[50], count = 0;
    char request; // Handshake answer from user y or Y  
    
    cout << "\tPlease enter either (y) or (Y) to use program or press any key to quit.\n";
    cout << "\tWould you like to enter two numbers? ";
    cin >> request; 

    //looping as long as ch is 'y' or 'Y'
    while (request == 'y' || request == 'Y')
    {
        // Obtaining numbers from user 
        cout << endl << "\tPlease enter the two numbers: ";
        cin >> first[count] >> second[count];
        // Looping question 
        count++;
        cout << "\tWould you like to enter two more numbers? ";
        cin >> request;
    }
    
    // iomanip spacing 10 blocks
    cout << setw(10) << "\n\tFirst #";
    cout << setw(10) << "\tSecond #";
    cout << setw(10) << "\tGCF\n";
    // Banner 
    cout << setw(10) << "\t=======";
    cout << setw(10) << "\t========";
    cout << setw(10) << "\t===\n";

    // Recycling data :: Count starts @ ZERO 
    for (int i = 0; i < count; i++)
    {
        // Display all infomation 
        cout << setw(0) << "\t" << first[i];
        cout << setw(9) << "\t" << second[i];
        cout << setw(9) << "\t" << GCF(first[i], second[i]) << endl;
    }
    return 0;
}  