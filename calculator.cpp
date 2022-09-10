// Program for creating a calculator
# include <iostream>
using namespace std;

int main() {
// Declairing the variable 
  
  char op; // this is short for operator fyi
  float num1, num2;

  // Showing the output
  
  cout << "Enter operator:";
  cout << "Operator \t Use \n" ;
  cout << "+        \t Add \n" ;
  cout << "-  \t Subtract \n " ;
  cout << "*  \t Multiply \n " ;
  cout << "/     \t Divide \n" ; 

  //This is where the the user will input the operand
  
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  //This is where the switch command takes full effect
  
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
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}

