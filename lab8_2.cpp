#include <iostream>

using namespace std;

int main () {

        char name[] = {"tidarat"};
        int nameLength = 6;
        cout << name;

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้

        char pla[8];

        pla[0]=name [6];
        pla[1]=name [5];
        pla[2]=name [4];
        pla[3]=name [3];
        pla[4]=name [2];
        pla[5]=name [1];
        pla[6]=name [0];
        pla[7]='\0';
        cout << pla endl;

        pla[0]= pla[0] +1;
        pla[1]= pla[1] +1;
        pla[2]= pla[2] +1;
        pla[3]= pla[3] +1;
        pla[4]= pla[4] +1;
        pla[5]= pla[5] +1;
        pla[6]= pla[6] +1;
        cout << pla endl;

        return 0;
}
