#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ฟังก์ชันแสดงผลข้อมูลนักเรียน
void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

// ฟังก์ชันคำนวณเกรดจากคะแนน
void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    const int size = 3;  // กำหนดให้รับข้อมูลสำหรับนักเรียน 3 คน
    // สร้าง Dynamic Array สำหรับชื่อ, รหัส, คะแนน, และเกรด
    string* name = new string[size];
    string* id = new string[size];
    double* score = new double[size];
    char* grade = new char[size];

    // วนรับข้อมูล 3 คน
    for (int i = 0; i < size; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        getline(cin, name[i]);  // รับชื่อ

        cout << "Enter student " << i + 1 << " id: ";
        getline(cin, id[i]);  // รับรหัส

        cout << "Enter student " << i + 1 << " score: ";
        cin >> score[i];  // รับคะแนน
        cin.ignore();  // ล้างบัฟเฟอร์ที่เหลือหลังรับคะแนน
    }

    // คำนวณเกรดสำหรับแต่ละคน
    for (int i = 0; i < size; i++) {
        calculateGrade(score[i], grade[i]);  // คำนวณเกรด
    }

    // แสดงผลข้อมูลนักเรียน
    for (int i = 0; i < size; i++) {
        displayStudentInfo(name[i], id[i], score[i], grade[i]);  // แสดงข้อมูลของนักเรียน
        cout << endl;  // ใส่บรรทัดใหม่ระหว่างนักเรียนแต่ละคน
    }

    // ล้างหน่วยความจำ
    delete[] name;
    delete[] id;
    delete[] score;
    delete[] grade;

    return 0;
}