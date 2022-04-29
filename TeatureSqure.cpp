#include <iostream>
using namespace std;
int main()
{
    long long int length, breath, flegstone, resultLength,resultBreath;
    cin >> length >> breath >> flegstone;
    resultLength = length / flegstone;
    if (length % flegstone != 0)
    {
        resultLength++;
    }
    resultBreath = breath / flegstone;
    if (breath % flegstone != 0)
    {
        resultBreath++;
    }
    cout << resultLength*resultBreath;
}