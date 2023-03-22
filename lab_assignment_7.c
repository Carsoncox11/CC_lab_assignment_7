#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void bubbleSort(int* pData, int n, int* swapCounter);

int main()
{
    int array[] = {97,16,45,63,13,22,7,58,72};
    int swapCounter[9] = {0};

    bubbleSort(array, 9, swapCounter);

    for(int i = 0; i < 9; i++)
    {
        printf("Swaps at index %d: %d\n", i, swapCounter[i]);
    }

    return 0;
}

void bubbleSort(int* pData, int n, int* swapCounter)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		//go until n - i - 1 because the greatest values will be put last and thus already in order
		for (j = 0; j < n - i - 1; j++)
		{
			//if the next value is less than the current value, swap the two
			if (pData[j] > pData[j+1])
			{
				temp = pData[j];
				pData[j] = pData[j+1];
				pData[j+1] = temp;

                swapCounter[j] += 1;
                swapCounter[j + 1] += 1;
			}
		}
	}
}