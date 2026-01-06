#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // char postcode[6]; // เพิ่มถ้าต้องการ
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address address;
    Phone phone;
};

int main() {
    Student s1;

    // รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    cin >> s1.address.number;
    cout << "Address - Road: ";
    cin >> s1.address.road;
    cout << "Address - District: ";
    cin >> s1.address.district;
    cout << "Address - Province: ";
    cin >> s1.address.province;

    cout << "Phone - Home: ";
    cin >> s1.phone.home;
    cout << "Phone - Mobile: ";
    cin >> s1.phone.mobile;

    cout << "\n===== Output =====\n";
    // แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
    cout << "ID: " << s1.id << "\n";
    cout << "Name: " << s1.name << "\n";
    cout << "Surname: " << s1.surname << "\n";
    cout << "Address: " << s1.address.number << " "
         << s1.address.road << ", "
         << s1.address.district << ", "
         << s1.address.province << "\n";
    cout << "Phone (Home): " << s1.phone.home << "\n";
    cout << "Phone (Mobile): " << s1.phone.mobile << "\n";

    return 0;
}