#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int evaluatePostfix(string postfix) {
    stack<int> operands;
    stringstream ss(postfix);

    string token;
    while (ss >> token) {
        if (isdigit(token[0])) {
            operands.push(stoi(token));
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            switch (token[0]) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
            }
        }
    }

    return operands.top();
}

int main() {
    string postfixExpression;
    
    getline(cin, postfixExpression);

    int result = evaluatePostfix(postfixExpression);

    cout  << result << endl;

    return 0;
}

