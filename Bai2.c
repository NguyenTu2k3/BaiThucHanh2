#include <stdio.h>
#include <math.h>

int kTraCPhuong(int num)
{
    int n = sqrt(num);
    return n * n == num;
}

void demSoChinhPhuong(int a)
{
    printf("Cac so chinh phuong nho hon %d la:\n", a);
    int count = 0;
   
    for (int i = a - 1; i > 0; i--) {
        if (kTraCPhuong(i)) {
            printf("%d ", i);
            count++;
        }
    }
   
    printf("\nTong cong co %d so chinh phuong nho hon %d.\n", count, a);
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong a: \n");
    scanf("%d", &n);
   
    demSoChinhPhuong(n);
 
    return 0;
}

