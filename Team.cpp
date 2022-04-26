#include <bits/stdc++.h>
using namespace std;
int main()
{
    int patya, vasya, tonya, problem, result;
    int j = 0;
    cin >> problem;
    for (int i = 0; i < problem; i++)
    {
        cin >> patya >> vasya >> tonya;
        result = patya + vasya + tonya;
        if (result >= 2)
        {
            j= j+1;
        }
        else 
        {
            
        }
    }

    cout << j;
}