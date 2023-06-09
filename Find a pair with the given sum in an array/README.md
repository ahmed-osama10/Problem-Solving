# Find a pair with the given sum in an array 

Input:
 
nums = [8, 7, 2, 5, 3, 1]
target = 10
 
Output:
 
Pair found (8, 2)
or
Pair found (7, 3)
 
 
Input:
 
nums = [5, 2, 6, 8, 1, 9]
target = 12
 
Output: Pair not found

There are several methods to solve this problem using brute-force, sorting, and hashing.

# Solution 
1. Using Brute-Force
A naive solution is to consider every pair in the given array and return if the desired sum is found.
The time complexity of the above solution is O(n2) and doesn’t require any extra space, where n is the size of the input.

2. Using Sorting
The idea is to sort the given array in ascending order and maintain search space by maintaining two indices (low and high) that initially points to two endpoints of the array. Then reduce the search space nums[low…high] at each iteration of the loop by comparing the sum of elements present at indices low and high with the desired sum. Increment low if the sum is less than the expected sum; otherwise, decrement high if the sum is more than the desired sum. If the pair is found, return it.
The time complexity of the above solution is O(n.log(n)) and doesn’t require any extra space.

3. Using Hashing
We can use a hash table to solve this problem in linear time. The idea is to insert each array element nums[i] into a map. We also check if difference (nums[i], target - nums[i]) already exists in the map or not. If the difference is seen before, print the pair and return. 
The time complexity of the above solution is O(n) and requires O(n) extra space, where n is the size of the input.
