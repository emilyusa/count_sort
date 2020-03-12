#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int a[N], tmp[N];

void count_sort(int q[], int n)
{
	const int size = 100010;
	int t[size];
	memset(t, 0, sizeof(t));

	for (int i = 0; i < n; i++)
	{
		t[q[i]]++;
	}
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (t[i] > 0)
		{
			for (int j = 0; j < t[i]; j++)
				q[k++] = i;
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);

	count_sort(a, n);

	for (int i = 0; i < n; i++) printf("%d ", a[i]);

	return 0;
}