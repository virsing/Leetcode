Given an array A of integers, for each integer A[i] we may choose any x with -K <= x <= K, and add x to A[i].
After this process, we have some array B.
Return the smallest possible difference between the maximum value of B and the minimum value of B.
 

Example 1:
Input: A = [1], K = 0
Output: 0
Explanation: B = [1]
Example 2:
Input: A = [0,10], K = 2
Output: 6
Explanation: B = [2,8]
Example 3:
Input: A = [1,3,6], K = 3
Output: 0
Explanation: B = [3,3,3] or B = [4,4,4]
 
Note:
1 <= A.length <= 10000
0 <= A[i] <= 10000
0 <= K <= 10000

题意：给出一个数组A，再给一个数字K，让你对A中每个数字增加一个数字x（-K<=x<=k),变成数组B，使得B中最小值与最大值差距最小。
思路：只需找出A中最小值和最大值，然后与2*K比较，如果小于2K差值为0，否则就是差值减去2K。

参考代码：
class Solution {
    public int smallestRangeI(int[] A, int K) {
        int min=Integer.MAX_VALUE;
        int max= Integer.MIN_VALUE;
        for(int i=0;i<A.length;i++){
            if(A[i]>max) max=A[i];
            if(A[i]<min) min=A[i];
        }
        int dif=max-min;
        return dif<=2*K?0:dif-2*K;
    }
}
