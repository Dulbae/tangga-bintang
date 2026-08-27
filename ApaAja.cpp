#include <iostream>

using namespace std;

void Print()
{
    int a;

    cout << "masukan nilai: " ;
    cin >> a ; 

    for (int i = 1 ; i <= a; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= a - i + 1; j++)
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