#define _CRT_SECURE_NO_WARNINGS 1
void ShellSort(int* ar, int left, int right)
{
	int gap = right - left;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = left + gap; i < right; ++i)
		{
			if (ar[i] < ar[i - gap])
			{
				int tmp = ar[i];
				int j = i;
				while (j>left && tmp < ar[j - gap])
				{
					ar[j] = ar[j - gap];
					j -= gap;
				}
				ar[j] = tmp;
			}
		}
	}
}