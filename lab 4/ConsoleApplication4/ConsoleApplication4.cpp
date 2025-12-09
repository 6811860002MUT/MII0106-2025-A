#include <iostream>

using namespace std;

int main() {

	for (int i = 10; i > 0; i--) {

		if (i == 5 ) {

			continue; // ข้ามการทำงานในรอบที่ i เป็นเลขคู่

		}

		cout << "i: " << i << endl;

	}

	return 0;

}

