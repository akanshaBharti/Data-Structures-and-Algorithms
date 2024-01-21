#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int calculate_Postfix(string post_exp)
{
stack <int> stack;
int len = post_exp.length();

for (int i = 0; i < len; i++)
{
// if the character is an operand we push it in the stack,considerd only single digit

if ( post_exp[i] >= '0' && post_exp[i] <= '9')
{
stack.push( post_exp[i] - '0');
}

else
{
// we pop the top two elements from the stack and save them in two integers
int a = stack.top();
stack.pop();
int b = stack.top();
stack.pop();
//performing the operation on the operands
switch (post_exp[i])
{
case '+': 
stack.push(b + a);
break;
case '-': 
stack.push(b - a);
break;
case '*': 
stack.push(b * a);
break;
case '/': 
stack.push(b / a);
break;
case '^': 
stack.push(pow(b,a));
break;
}
}
}
//returning the calculated result
return stack.top();
}

int main()
{

string postfix_expression = "3292/+32^-*3/7-";
cout<<"The answer after calculating the postfix expression is : ";
cout<<calculate_Postfix(postfix_expression);
return 0;
}