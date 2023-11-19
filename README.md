# Name:        SIMPLE CALCULATOR
# Purpose:     Cod Soft TASK-2 (C++)
# Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.
# Author:      NURFUL SHAIKH
# Created:     11-11-2023

# include <iostream>
using namespace std;
int main() {
  char op;
  float num1, num2;
  cout << "Enter Operator: +, -, *, /: ";
  cin >> op;
  cout << "Enter Two Number/Operands: ";
  cin >> num1 >> num2;
  switch(op) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    default:
      cout << "Error! Operator is not Correct";
      break;
  }
  return 0;
}
