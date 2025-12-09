#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " * **********************For*********************** \n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\n";
    }

    cout << " * **********************while*********************** \n";
    int i = 1;
    while (i <= 10)
    {
        cout << i << "\n";
        i++;
    }

    cout << " * **********************do while*********************** \n";
    i = 1;
    do {
        cout << i << "\n";
        i++;
    } while (i <= 10);

    return 0;
}
