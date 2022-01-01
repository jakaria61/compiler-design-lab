#include <iostream>
#include <cstring>
using namespace std;

bool isOperand(char c) {
     return (c >= '0' && c <= '9' || c >= 'a' && c <= 'z');
     }
int value(char c) {
    return (c - '0');
     }
int evaluate(char *exp)
{
	if (*exp == NULL) return -1;
	int res = value(exp[0]);

	for (int i = 1; exp[i]; i ++)
	{
		if (!isOperand(exp[i]) && !isOperand(exp[i+1]) )
            return -1;
	}
	return res;
}

int main()
{
	string expression;
	cout << "Write your Expression:";
	cin>> expression;
	int n = expression.length();
    char expr[n];
    strcpy(expr, expression.c_str());
	int res = evaluate(expr);
	if(res==-1){
        cout<<"Your input is Invalid\n";
	}
	else{
        cout<<"Your input is valid";
	}
	return 0;
}
