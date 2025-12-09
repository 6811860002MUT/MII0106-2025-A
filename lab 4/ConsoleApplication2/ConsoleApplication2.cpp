#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " * **********************For*********************** \n";
    for (int i = 2; i <= 20;)
    {
        cout << i << "\n";
        i += 2;
    }

    cout << " * *********************while************************ \n";
    int i = 2;
    while (i <= 20)
    {
        cout << i << "\n";
        i += 2;
    }

    cout << " * **********************do while*********************** \n";
    i = 2;
    do {
        cout << i << "\n";
        i += 2;
    } while (i <= 20);

    return 0;
}
