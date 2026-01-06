#include <iostream>
#include <string>

using namespace std;

// สร้างโครงสร้างข้อมูลตามรูป
struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact; // ดึง Phone มาใช้ในนี้
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;  // ข้อมูลเบอร์โทรนักเรียน
    Parent myParent;  // ข้อมูลผู้ปกครอง
};

// --- ส่วนของฟังก์ชัน ---

// 1. ฟังก์ชันรับข้อมูล
Student inputData() {
    Student s;
    cout << "Enter ID: "; cin >> s.id;
    cout << "Enter Nickname: "; cin >> s.nickname;
    cout << "Enter Line ID: "; cin >> s.lineId;

    // รับข้อมูลเบอร์โทรนักเรียน
    cout << "Enter Student Mobile: "; cin >> s.myContact.mobile;
    cout << "Enter Student Home: "; cin >> s.myContact.home;

    // รับข้อมูลผู้ปกครอง
    cout << "Enter Parent Name: "; cin >> s.myParent.name;
    cout << "Enter Relationship: "; cin >> s.myParent.relationship;
    cout << "Enter Parent Mobile: "; cin >> s.myParent.contact.mobile;
    cout << "Enter Parent Home: "; cin >> s.myParent.contact.home;

    return s;
}

// 2. ฟังก์ชันแสดงผล
void showData(Student s) {
    cout << "-------------------------" << endl;
    cout << "Student ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;
    cout << "Student Tel: " << s.myContact.mobile << endl;

    cout << "Parent Name: " << s.myParent.name << endl;
    cout << "Relationship: " << s.myParent.relationship << endl;
    cout << "Parent Tel: " << s.myParent.contact.mobile << endl;
    cout << "-------------------------" << endl;
}

// 3. ฟังก์ชันหลัก (Main)
int main() {
    Student s1;

    // เรียกฟังก์ชันรับข้อมูลมาเก็บไว้ใน s1
    s1 = inputData();

    // เรียกฟังก์ชันแสดงผล
    showData(s1);

    return 0;
}