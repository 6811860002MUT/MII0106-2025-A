#include <iostream>
#include <string>

using namespace std;

// ฟังก์ชันสำหรับจำลองการควบคุมรถตามข้อมูลเซนเซอร์
void control_robot(string sensor_reading)
{
    cout << "Sensor reports: " << sensor_reading << " -> ";

    // 1. ตรวจสอบเงื่อนไขแรก: ถ้าเส้นสีดำอยู่ทางซ้าย
    if (sensor_reading == "Left")
    {
        cout << "**Action: Turn Left**\n";
    }
    // 2. ตรวจสอบเงื่อนไขที่สอง: ถ้าเส้นสีดำอยู่ทางขวา
    else if (sensor_reading == "Right")
    {
        cout << "**Action: Turn Right**\n";
    }
    // 3. เงื่อนไขสุดท้าย: ถ้าเส้นสีดำอยู่กลาง (กรณีที่เหลือ)
    else if (sensor_reading == "Center")
    {
        cout << "**Action: Move Forward**\n";
    }
    // กรณีที่เซนเซอร์อ่านค่าผิดพลาดหรือไม่ทราบ
    else
    {
        cout << "**Action: Stop/Wait** (Unknown reading)\n";
    }
}

int main()
{
    cout << "--- Line Following Robot Control Simulation ---\n";

    // ตัวอย่างการทำงาน

    // สถานการณ์ 1: เส้นอยู่ตรงกลาง
    control_robot("Center");

    // สถานการณ์ 2: เส้นเลี้ยวไปทางซ้าย
    control_robot("Left");

    // สถานการณ์ 3: เส้นเลี้ยวไปทางขวา
    control_robot("Right");

    // สถานการณ์ 4: กลับมาตรงกลางอีกครั้ง
    control_robot("Center");

    // ตัวอย่างสถานการณ์ที่ไม่ทราบค่า (เผื่อไว้)
    control_robot("Lost");

    cout << "----------------------------------------------\n";

    return 0;
}