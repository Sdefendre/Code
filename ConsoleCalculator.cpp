#include<iostream>
using namespace std;

int main()
{
    //declare variables
    int num1, num2, sum, difference, product, quotient;
    //get input from user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    //calculate the sum, difference, product, and quotient
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    //display the results
    cout << "The sum of the two numbers is: " << sum << endl;
    cout << "The difference of the two numbers is: " << difference << endl;
    cout << "The product of the two numbers is: " << product << endl;
    cout << "The quotient of the two numbers is: " << quotient << endl;
    return 0;
}