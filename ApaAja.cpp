#include <iostream>

using namespace std;

void Print()
{
    int a;

    cout << "masukan nilai: " ;
    cin >> a ; 

    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    

}

int main()
{
    Print();

    return 0;
}