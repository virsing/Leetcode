Given a group of two strings, you need to find the longest uncommon subsequence of this group of two strings.The longest uncommon subsequence is defined as the longest subsequence of one of these strings and this subsequence should not be any subsequence of the other strings.
A subsequence is a sequence that can be derived from one sequence by deleting some characters without changing the order of the remaining elements. Trivially, any string is a subsequence of itself and an empty string is a subsequence of any string.
The input will be two strings, and the output needs to be the length of the longest uncommon subsequence. If the longest uncommon subsequence doesn't exist, return -1.
Example 1:
Input: "aba", "cdc"
Output: 3
Explanation: The longest uncommon subsequence is "aba" (or "cdc"), 
because "aba" is a subsequence of "aba", 
but not a subsequence of any other strings in the group of two strings. 

Note:
Both strings' lengths will not exceed 100.
Only letters from a ~ z will appear in input strings. 



题意：给定两个字符串让你找到最长不相同字串。如果两个字符串完全相同返回-1.

思路：

1.题目描述很长，巴拉巴拉一大堆，后面发现不对劲，例如，
 
string a="abcdefg";  
string b="abfg";  
这种情况下最大不相同字符串长度是a的长度。所以只要两个字符串不是完全相同，就返回较大字符串长度，否则返回-1.
参考代码：

 
class Solution {  
public:  
    int findLUSlength(string a, string b) {  
        if(a==b) return -1;  
        return max(a.size(),b.size());  
    }  
};  
