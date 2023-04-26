"""
The function findPair() takes three arguments - an integer array nums, the size of the array n, and the target sum target. 
The function starts by iterating over each element in the array except the last one using a loop that runs from i = 0 to n-1. 
For each element at position i, another loop runs from j = i + 1 to n to compare the element at i with every other element after it.

If the sum of the current element at i and the element at j is equal to the target sum,
then a pair of integers is found and the function prints it to the console using the printf() function. 
The return statement ensures that the function terminates after printing the first pair that is found.

If the loop completes without finding a pair, then the function prints "Pair not found" to the console.

This algorithm has a time complexity of O(n^2), which means that it will become very slow for large input arrays. 
There are more efficient algorithms that can solve this problem in O(n) or O(nlogn) time complexity.
"""
#include <stdio.h>

// Naive method to find a pair in an array with a given sum
void findPair(int nums[], int n, int target)
{
	// consider each element except the last
	for (int i = 0; i < n - 1; i++)
	{
		// start from the i'th element until the last element
		for (int j = i + 1; j < n; j++)
		{
			// if the desired sum is found, print it
			if (nums[i] + nums[j] == target)
			{
				printf("Pair found (%d, %d)\n", nums[i], nums[j]);
				return;
			}
		}
	}

	// we reach here if the pair is not found
	printf("Pair not found");
}

int main(void)
{
	int nums[] = { 8, 7, 2, 5, 3, 1 };
	int target = 10;

	int n = sizeof(nums)/sizeof(nums[0]);

	findPair(nums, n, target); 

	return 0;
}
