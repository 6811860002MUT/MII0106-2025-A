#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

// ฟังก์ชันแสดงข้อมูล Student
void printStudent(Student s) {
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;
    cout << "Phone: " << s.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "ID: ";
    getline(cin, s1.id);
    cout << "Nickname: ";
    getline(cin, s1.nickname);
    cout << "Line ID: ";
    getline(cin, s1.lineId);
    cout << "Phone: ";
    getline(cin, s1.phone);

    cout << "\n=== Output (from function) ===\n";
    printStudent(s1);

    return 0;
}
