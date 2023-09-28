#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int getPrecedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToRPN(string infix) {
    stack<char> operatorStack;
    stringstream rpnStream;
    
    for (char c : infix) {
        if (isalnum(c)) {
            rpnStream << c << ' ';
        } else if (isOperator(c)) {
            while (!operatorStack.empty() && getPrecedence(operatorStack.top()) >= getPrecedence(c)) {
                rpnStream << operatorStack.top() << ' ';
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }
    
    while (!operatorStack.empty()) {
        rpnStream << operatorStack.top() << ' ';
        operatorStack.pop();
    }
    
    return rpnStream.str();
}

int main() {
    string infixExpression;
    getline(cin, infixExpression);
    
    string rpnExpression = infixToRPN(infixExpression);
    
    cout << "The Reverse Polish Notation (RPN) expression is: " << rpnExpression << endl;
    
    return 0;
}

