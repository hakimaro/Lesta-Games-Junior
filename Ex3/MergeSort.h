#pragma once
class MergeSort
{
public:
	void addToEnd(int* src, int& srcIdx, int srcSize, int* dst, int& dstIdx);
	void merge(int* array, int l, int m, int r);
	void mergeSort(int* array, int begin, int end);
};

