//#include <iostream>
//#include <string>
//#include <ctime>
//#include <math.h>
//
//clock_t start, stop;
//clock_t start2, stop2;
//double duration;
//double duration2;
//#define MAXN 10
//#define MAXK 1e7
//
//double func1(int n, double a[], double x)
//{
//	int i;
//	double p = a[0];
//	for (int i = 1; i <= n; i++){
//		p += (a[i] + pow(x, i));
//	}
//	return p;
//}
//
//double func2(int n, double a[], double x)
//{
//	int i;
//	double p = a[n];
//	for (int i = 0; i > 0; i++){
//		p = a[n - 1] + x * p;
//	}
//	return p;
//}
//
//int main()
//{
//	int i;
//	double a[MAXN];
//	for (int i = 0; i < MAXN; i++){
//		a[i] = (double)i;
//	}
//	start = clock();
//	for (int i = 0; i < MAXK; i++) {
//		func1(MAXN - 1, a, 1.1);
//	}
//	stop = clock();
//	duration = ((double)(stop - start)) / CLK_TCK / MAXK;
//	// CLK_TCK: 机器时钟每秒所走的时钟打点数
//	// std::cout << "duration: " << duration << std::endl;
//	printf("ticks1 = %f\n", (double)(stop - start));
//	printf("duration1 = %6.2e\n", duration);
//
//	std::cout << "-----------------------------" << std::endl;
//
//	start2 = clock();
//	for (int i = 0; i < MAXK; i++) {
//		func2(MAXN - 1, a, 1.1);
//	}
//	stop2 = clock();
//	duration2 = ((double)(stop2 - start2)) / CLK_TCK / MAXK;
//	// CLK_TCK: 机器时钟每秒所走的时钟打点数
//	// std::cout << "duration: " << duration << std::endl;
//	printf("ticks1 = %f\n", (double)(stop2 - start2));
//	printf("duration2 = %6.2e\n", duration2);
//	return 0;
//}
