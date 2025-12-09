#include <iostream>
using namespace std;

// class defined for binding of the important variable and functions together
class Calculator
{
private:
        double num1, num2;
        
public:
        Calculator(double n1, double n2)
        {
                num1 = n1;
                num2 = n2;
        }
        
        void operation(char op)
        {
                switch(op)
                {
                    case '+': cout<<add()<<endl;
                                break;
                    case '-': cout<<subtract()<<endl;
                                break;
                    case '*': cout<<multiply()<<endl;
                                break;
                    case '/': cout<<divide()<<endl;
                                break;
                    default: cout<<"Enter valid operation \n";
                }
        }
        
        double add() { return num1 + num2; }
        
        double subtract() { return num1 - num2; }
        
        double multiply() { return num1 * num2; }
        
        double divide() { return num1 / num2; }
};

int main()
{
        int a,b;
        char op;
        cin>>a>>b>>op;
        Calculator Calc(a,b);
        
        Calc.operation(op);
        
        return 0;
}
