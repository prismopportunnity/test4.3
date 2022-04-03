#include<stdio.h>
//练习
int main() {

	//int i;
	//for (i = 1; i <= 5; i++) {
	//	if (i % 2) {
	//		//printf("%d", i % 2);
	//		printf("*");
	//	}
	//	else continue;
	//	printf("#");
	//}
	//printf("$");


	/*int j;
	for (j = 10; j > 3; j--) {
		j--;
	    --j;
		--j;
		printf("%d", j);
	}*/



	/*int x = 10, y = 10, i;
	for (i = 0; x > 8; y = ++i)
		printf("%d%d", x--, y);*/

	/*int i;
	for (i = 1; i++ < 4;);*/

	//猴子吃桃
	//10天  1个
	//9天   4个  (1+1)*2
	//8天   10个 (4+1)*2
	/*int day,x1,x2=1;
	for(day = 9; day > 0; day--) {
		x1 = 2 * (x2 + 1);
		x2 = x1;
	}
	printf("%d", x1);*/



	/*int i,x=1, temp=0,sum=0;
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
		printf("%d", sum);
	}*/

	/*int i, j;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d ", i*10+j);
		}
		printf("\n");
	}*/

	/*int i, j;
	for (i = 1; i < 10; i++) {.
		for (j = 1; j < 10; j++) {
			if(i>=j)
			printf("%d*%d=%-3d ",i,j, i*j);
		}
		printf("\n");
	}*/


	//鸡公每只5文钱，鸡婆每只3文钱，鸡仔3只1文钱，用100文买100只鸡，问鸡公多少只？鸡婆多少只？鸡仔多少只？
	//5x + 3y + z/3 = 100
	//x + y + z = 100
	/*int x, y, z;
	for (x = 1; x < 20; x++) {
		for (y = 1; y < 33; y++) {
			for (z = 1; z < 333; z++) {
				if (5 * x + 3 * y + (float)z/3 == 100 && x + y + z == 100) {
					printf("鸡公：%-2d 鸡婆：%-2d 鸡仔：%-2d\n", x, y, z);
				}
			}
		}
	}*/
	
	//质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数。
    //0和1既不是质数也不是合数，最小的质数是2

	//int i, j,tag;
	////int flag1 = 0, flag2 = 0;

	//for (i = 2; i <=100; i++) {
	//	tag = 0;
	//	for (j = 2; j < i; j++) {
	//		if (i % j == 0) {
	//			//flag1++;
	//			tag = 1;
	//			break;
	//			//printf("合数有：%-4d\n ", i);
	//		}
	//	if (tag==0) {
	//		//flag2++;
	//		printf("素数有：%-4d", i);
	//		}
	//	}
	//}


		int i = 0, j = 0;
		int count = 0;
		for (i = 2; i < 100; i++)
		{
			int flag = 0;
			for (j = 2; j < i; j++)
				if (i % j == 0)
					flag = 1;
			if (flag == 0)
			{
				printf("%-3d", i);
				count++;
			}
			if (count % 10 == 0)
				putchar('\n');
		}
		
	return 0;
}