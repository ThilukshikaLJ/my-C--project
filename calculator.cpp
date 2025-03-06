#include <iostream>
using namespace std;




int main() {
    int num1; // Declare an integer variable to store the first number

    int num2; // Declare an integer variable to store the second number
      
    cin>> num1; // Read the first number from user input
    cin>>num2; // Read the second  number from user input
      
     // Add the two numbers and store the result in 'result'
    int result = num1+num2;

    // Displaying the result
    cout << "The sum of " << num1 << " and " << num2<< " is " << result << endl;

 // substract the two numbers and store the result in 'result'
    int result_sub = num1-num2;
    
    // Displaying the result of substraction
    cout << "The substraction of " << num1 << " and " << num2<< " is " << result_sub << endl;
    return 0;
}

