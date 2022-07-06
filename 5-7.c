////菱形
// 咱们输出的是一个13行的菱形，可以分成两部分，第一部分7行星星逐渐增多的，第二部分6行星星逐渐减少，所以代码也可以分成两部分。
// 第一部分是星星最多13个 每次增加两个星星 减少一个空格 ，
// 第二部分是星星最多11个，每次减少两个星星 增加一个空格 所以根据这样规律就可以写出代码 
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 1; j <=7-i; j++);
//		printf(" ");
//		for (int k = 1; k <= 2 * i-1; k++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 1; i <= 6; i++)
//	{
//		for (j = 1; j <=i; j++);
//		printf(" ");
//		for (int k = 1; k <=13-2 * i; k++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}
//递归求年龄
//#include<stdio.h>
//int age(int n)
//{
//	int c = 0;
//	if (n == 1)
//	{
//		c = 10;
//	}
//	else
//	{
//		c = age(n - 1) + 2;
//	}
//	return c;
//}
//int main()
//{
//	printf("%d", age(5));
//	return 0;
//}
//有一个分数序列：2/1 3/2 5/3 8/5 13/8 求出这个数列的前20项之和
//#include<stdio.h>
//int main()
//{
//	int n, t, number = 20;
//	float a = 2, b = 1, s = 0;
//	for (n = 1; n <= number; n++)
//	{
//		s = s + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("%f\n", s);
//	return 0;
//}
////1到m的阶乘和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int t = 1;
//	int m = 0;
//	scanf_s("%d", &m);
//	for (i = 1; i <= m; i++)
//	{
//		t *= i;
//		n = n + t;
//	}
//	printf("%d", n);
//	return 0;
////}
// /动态心脏
//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//		if (f(x, y, z) <= 0.0f)
//			return y;
//	return 0.0f;
//}
//
//int main() {
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//	_TCHAR buffer[25][80] = { _T(' ') };
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//
//	for (float t = 0.0f;; t += 0.1f) {
//		int sy = 0;
//		float s = sinf(t);
//		float a = s * s * s * s * 0.2f;
//		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
//			_TCHAR* p = &buffer[sy++][0];
//			float tz = z * (1.2f - a);
//			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//				float tx = x * (1.2f + a);
//				float v = f(tx, 0.0f, tz);
//				if (v <= 0.0f) {
//					float y0 = h(tx, tz);
//					float ny = 0.01f;
//					float nx = h(tx + ny, tz) - y0;
//					float nz = h(tx, tz + ny) - y0;
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//					*p++ = ramp[(int)(d * 5.0f)];
//				}
//				else
//					*p++ = ' ';
//			}
//		}
//
//		for (sy = 0; sy < 25; sy++) {
//			COORD coord = { 0, sy };
//			SetConsoleCursorPosition(o, coord);
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//		}
//		Sleep(33);
//	}
//}
