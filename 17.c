#include <stdio.h>
 float max3(float x, float y, float z) {
    float max = x;
    if (y > max) max = y;
    if (z > max) max = z;
    return max;
}


float min3(float x, float y, float z) {
    float min = x;
    if (y < min) min = y;
    if (z < min) min = z;
    return min;
}


float min2(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    float x, y, z;
    printf("Nhap 3 so x, y, z : ");
    scanf("%f %f %f", &x, &y, &z);

    float max_xyz = max3(x, y, z);
    float min_xyz = min3(x, y, z);
    float tong = x + y + z;
    float tich = x * y * z;
    float min_tong_tich = min2(tong, tich);
    float min2_half_tich = min2(tong / 2, tich) + 1;

    printf("max=%.2f, min=%.2f, min(x+y+z,xyz)=%.2f, min2((x+y+z)/2,xyz)+1=%.2f\n",
           max_xyz, min_xyz, min_tong_tich, min2_half_tich);

    return 0;
}
