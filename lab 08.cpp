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
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    cout << "ID: ";
    getline(cin, s1.id);
    cout << "Nickname: ";
    getline(cin, s1.nickname);
    cout << "Line ID: ";
    getline(cin, s1.lineId);
    cout << "Phone: ";
    getline(cin, s1.phone);

    cout << "\n=== Output Student 1 ===\n";
    cout << "ID: " << s1.id << endl;
    cout << "Nickname: " << s1.nickname << endl;
    cout << "Line ID: " << s1.lineId << endl;
    cout << "Phone: " << s1.phone << endl;

    return 0;
}
