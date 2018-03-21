// DataStructuresAndAlgorithms.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int BinarySearch(int *in_aNum, int in_nLen, int in_nTargetNum);

int _tmain(int argc, _TCHAR* argv[])
{
	int aNum[] = {1, 2, 3, 4, 5, 6};
	int aNum2[] = {1, 2, 3, 4, 5, 6, 7};


	int nIndex = BinarySearch(aNum, 6, 4);
	printf("nIndex : %d\n", nIndex);

	int nIndex2 = BinarySearch(aNum2, 7, 4);
	printf("nIndex2 : %d\n", nIndex2);

	getchar();

	return 0;
}

int BinarySearch(int *in_aNum, int in_nLen, int in_nTargetNum)
{
	int nIndex = -2; 

	if (NULL == in_aNum)
	{
		printf("in_aNum is NULL. \n");

		return nIndex;
	}

	int nLowIndex  = 0;
	int nHighIndex = in_nLen - 1;

	do 
	{
		int nMidIndex = (nLowIndex + nHighIndex) /2;

		if (in_aNum[nMidIndex] == in_nTargetNum)
		{
			nIndex = nMidIndex;
			break;
		}

		if (in_aNum[nMidIndex] > in_nTargetNum)
		{
			nHighIndex = nMidIndex - 1;
		}
		else if (in_aNum[nMidIndex] < in_nTargetNum)
		{
			nLowIndex  = nMidIndex + 1;
		} 
	} while (nLowIndex <= nHighIndex);

	return nIndex;
};
