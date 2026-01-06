#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";

        cout << "ID: ";
        getline(cin, students[i].id);

        cout << "Nickname: ";
        getline(cin, students[i].nickname);

        cout << "Line ID: ";
        getline(cin, students[i].lineId);

        cout << "Phone: ";
        getline(cin, students[i].phone);

        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    cout << "id \t\tnickname \tlineId \tphone\n";
    for (int i = 0; i < SIZE; i++){
        cout << "\n=== Output Student " << (i + 1) << " ===\n";
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << endl;
        cout << "----------------------\n";
    }
    return 0;
}