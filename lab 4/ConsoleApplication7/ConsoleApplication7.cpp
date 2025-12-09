#include <iostream>
#include <cmath> // เพื่อใช้ฟังก์ชัน sqrt()

using namespace std;

/**
 * @brief ตรวจสอบว่าจำนวนที่กำหนดให้เป็นจำนวนเฉพาะหรือไม่
 * * @param n จำนวนเต็มบวกที่ต้องการตรวจสอบ
 * @return true ถ้า n เป็นจำนวนเฉพาะ
 * @return false ถ้า n ไม่เป็นจำนวนเฉพาะ
 */
bool isPrime(int n)
{
    // 1. เงื่อนไขพื้นฐานสำหรับจำนวนเฉพาะ
    if (n <= 1)
    {
        // จำนวนเฉพาะต้องมากกว่า 1
        return false;
    }

    // 2. การตรวจสอบการหารลงตัว
    // เราไม่จำเป็นต้องตรวจสอบการหารจนถึง n-1 
    // เราสามารถตรวจสอบแค่ถึงรากที่สองของ n (sqrt(n)) เท่านั้น เพราะ:
    // ถ้า n มีตัวประกอบ d > sqrt(n) มันจะต้องมีตัวประกอบอีกตัว c < sqrt(n)
    int limit = sqrt(n);

    // วนลูปเริ่มจาก 2 (ตัวหารที่น้อยที่สุดถัดจาก 1) ไปจนถึง limit
    for (int i = 2; i <= limit; ++i)
    {
        // ตรวจสอบว่า n หารด้วย i ลงตัวหรือไม่
        if (n % i == 0)
        {
            // ถ้าหารลงตัว แสดงว่า n มีตัวประกอบอื่นที่ไม่ใช่ 1 และ n
            return false; // ไม่เป็นจำนวนเฉพาะ
        }
    }

    // ถ้าลูปจบโดยไม่พบตัวหารใด ๆ แสดงว่า n เป็นจำนวนเฉพาะ
    return true;
}

int main()
{
    // ตัวอย่างการใช้งานฟังก์ชัน
    int num1 = 17;
    int num2 = 15;
    int num3 = 2;
    int num4 = 100;
    int num5 = 1;

    // ตรวจสอบและแสดงผลลัพธ์
    cout << num1 << " is prime? " << (isPrime(num1) ? "Yes" : "No") << " (Expected: Yes)\n";
    cout << num2 << " is prime? " << (isPrime(num2) ? "Yes" : "No") << " (Expected: No)\n";
    cout << num3 << " is prime? " << (isPrime(num3) ? "Yes" : "No") << " (Expected: Yes)\n";
    cout << num4 << " is prime? " << (isPrime(num4) ? "Yes" : "No") << " (Expected: No)\n";
    cout << num5 << " is prime? " << (isPrime(num5) ? "Yes" : "No") << " (Expected: No)\n";

    return 0;
}