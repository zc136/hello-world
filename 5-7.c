////����
// �����������һ��13�е����Σ����Էֳ������֣���һ����7������������ģ��ڶ�����6�������𽥼��٣����Դ���Ҳ���Էֳ������֡�
// ��һ�������������13�� ÿ�������������� ����һ���ո� ��
// �ڶ��������������11����ÿ�μ����������� ����һ���ո� ���Ը����������ɾͿ���д������ 
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
//�ݹ�������
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
//��һ���������У�2/1 3/2 5/3 8/5 13/8 ���������е�ǰ20��֮��
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
////1��m�Ľ׳˺�
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
// /��̬����
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
