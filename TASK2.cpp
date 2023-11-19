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
