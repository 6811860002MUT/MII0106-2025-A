#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;
    string nickname;
    string lineId;
    string phone;
};

// สลับค่า Student 2 ตัว
void swapStudent(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// Bubble sort เรียง id จากน้อยไปมาก
void sortByID(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) { // ต้องเป็น size - i - 1
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size) {
    cout << "id \t\tnickname \tlineId \tphone\n";
    for (int i = 0; i < size; i++) {
        cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << endl;
        cout << "----------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

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

    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
