#include <iostream>
#include <cmath>

void raisedTopower(double a, double b){ // for base and exponent "^"
    double result = 1;
    for(int i = 0; i < b; i++){
        result = result*a;
    }
    std::cout << result;
}

int main(void){

    char op = '\0';
    double num1 = 0;
    double num2 = 0;
    double result = 0;

    std::cout << "********Calculator********" << std::endl;

    std::cout << "Enter 2 values for calculation: ";
    std::cin >> num1;
    std::cin >> num2;

    std::cout << "Select one of the operators (+,-,*,/,%,^): ";
    std::cin >> op;

    switch(op){
    case '+':
        result = num1 + num2;
        std::cout << result;
        break;
    case '-':
        result = num1 - num2;
        std::cout << result;
            break;
    case '*':
        result = num1 * num2;
        std::cout << result;
        break;
    case '/':
        result = num1 / num2;
        std::cout << result;
        break;
    case '^':
        raisedTopower(num1, num2);
        break;
    default :
        std::cout << "Not  a valid operator" << std::endl;
        std::cout << "\n\n********  ******  ********" << std::endl;
    }

    return 0;
}

