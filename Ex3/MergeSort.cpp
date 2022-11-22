#include "MergeSort.h"


void MergeSort::addToEnd(int* src, int& srcIdx, int srcSize, int* dst, int& dstIdx)
{
	for (int i = srcIdx, j = dstIdx; i < srcSize; ++i, ++j) {
		dst[j] = src[i];
	}
}

void MergeSort::merge(int* array, int const left, int const mid, int const right)
{
    int leftArraySize = mid - left + 1;
    int rightArraySize = right - mid;

    int* leftArray = new int[leftArraySize];
    int* rightArray = new int[rightArraySize];
    for (int i = 0; i < leftArraySize; i++) {
        leftArray[i] = array[left + i];
    }
    for (int j = 0; j < rightArraySize; j++) {
        rightArray[j] = array[mid + 1 + j];
    }

    int leftArrayIdx = 0;
    int rightArrayIdx = 0;
    int arrayIdx = left;
    while (leftArrayIdx < leftArraySize && rightArrayIdx < rightArraySize) {
        if (leftArray[leftArrayIdx] <= rightArray[rightArrayIdx]) {
            array[arrayIdx] = leftArray[leftArrayIdx];
            leftArrayIdx++;
        }
        else {
            array[arrayIdx] = rightArray[rightArrayIdx];
            rightArrayIdx++;
        }
        arrayIdx++;
    }
    addToEnd(leftArray, leftArrayIdx, leftArraySize, array, arrayIdx);
    addToEnd(rightArray, rightArrayIdx, rightArraySize, array, arrayIdx);

    delete[] leftArray;
    delete[] rightArray;
}

void MergeSort::mergeSort(int* array, int begin, int end)
{
    if (begin >= end)
        return;

    int m = begin + (end - begin) / 2;
    mergeSort(array, begin, m);
    mergeSort(array, m + 1, end);
    merge(array, begin, m, end);
}
