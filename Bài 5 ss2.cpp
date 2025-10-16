#include <stdio.h>
int main(){
	int a = 15;
	int b = 20;
	float tong = 10.5;
	float tong_chung;
	int tong_phan_nguyen;
	tong_chung = a + b + tong;
	tong_phan_nguyen = a + b + (int)tong;
	printf ("a: %d \n",a);
	printf ("b: %d \n",b);
	printf ("tong: %.2f \n", tong);
	printf("----------------------------------\n");
	printf ("tong chung : %.2f\n",tong_chung);
	printf ("tong phan nguyen : %.2f\n",tong_phan_nguyen);
	return 0;
}
