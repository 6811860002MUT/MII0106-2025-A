#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " * **********************For*********************** \n";
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    {
        cout << sum;
        cout << endl;
    }
    return 0;
}