#include <iostream>
#include <string>
using namespace std;
int main() {
    string code = "int main() { int a = 5; float b = 3.14; if (a > b) return a + b; }";
    string token = "";
    for (int i = 0; i < code.length(); i++) {
        char ch = code[i];
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (token != "") {
                if (token == "int" || token == "float" || token == "if" || token == "return") cout << "KEYWORD: " << token << endl;
                else if (token[0] >= '0' && token[0] <= '9') cout << "NUMBER: " << token << endl;
                else cout << "IDENTIFIER: " << token << endl;
                token = "";
            }
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=' || ch == ';' || ch == '(' || ch == ')') {
            if (token != "") {
                if (token == "int" || token == "float" || token == "if" || token == "return") cout << "KEYWORD: " << token << endl;
                else if (token[0] >= '0' && token[0] <= '9') cout << "NUMBER: " << token << endl;
                else cout << "IDENTIFIER: " << token << endl;
                token = "";
            }
            cout << "OPERATOR/DELIMITER: " << ch << endl;
        } else {
            token += ch;
        }
    }
    if (token != "") {
        if (token == "int" || token == "float" || token == "if" || token == "return") cout << "KEYWORD: " << token << endl;
        else if (token[0] >= '0' && token[0] <= '9') cout << "NUMBER: " << token << endl;
        else cout << "IDENTIFIER: " << token << endl;
    }

    return 0;
}

