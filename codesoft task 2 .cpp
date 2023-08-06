#include <iostream>
using namespace std;
int main()
{
    char op;
    float n1, n2;
    cout<<"which operation you want to perform"<<endl;
    cin >> op;
    cout<<"please Enter your  First number"<<endl;
    cin >> n1 ;
     cout<<"please Enter your  Second  number"<<endl;
    cin >> n2 ;
    switch (op)
    {       
        case '+':
        cout<<"your sloution aka answer  is "<<endl;
            cout << n1 + n2;
            break;
        case '-':
        	 cout<<"your solution aka answer  is "<<endl;
            cout << n1 - n2;
            break;
        case '*':
        	 cout<<"your solution aka answer  is "<<endl;
            cout << n1 * n2;
            break;
        case '/':
        	 cout<<"your solution aka answer  is "<<endl;
            cout << n1 / n2;
            break;
         
        default:
            cout << "Error! operator is not correct";
            
    }
    return 0;
}
