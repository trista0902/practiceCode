#include<stdio.h>
#include<stdlib.h>

void printArray(int* array, int lenth)
{
	int i = 0;
	for (i = 0; i < lenth; i++)
	{
		printf("num[%d]=%d, ", i,array[i]);
	}
	printf("\n");
}

int removeDuplicates(int* nums, int numsSize) {
	int i = 0,j=0,k=0;
	int lenth = numsSize;
	for(i=0;i<lenth-2;i++){
		for (j = i + 1; j < lenth-1; j++)
		{
			if (nums[i] == nums[j]) {
				for (k = j; k < lenth - 1; k++)
				{
					nums[k] = nums[k + 1];
				}
				--lenth;
				--j;
			}
		}
	}
	if (nums[lenth - 2] == nums[lenth - 1])
		lenth -= 1;
	return lenth;
}

int main()
{
	int array[] = { 0,0,1,1,1,2,2,3,3,4,4 };
	int lenth = sizeof(array) / sizeof(int);
	removeDuplicates(array, lenth);
	printArray(array, lenth);
}