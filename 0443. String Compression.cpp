Given an array of characters, compress it in-place.
The length after compression must always be smaller than or equal to the original array.
Every element of the array should be a character (not int) of length 1.
After you are done modifying the input array in-place, return the new length of the array.

Follow up:
Could you solve it using only O(1) extra space?

Example 1:
Input:
["a","a","b","b","c","c","c"]

Output:
Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]

Explanation:
"aa" is replaced by "a2". "bb" is replaced by "b2". "ccc" is replaced by "c3".

Example 2:
Input:
["a"]

Output:
Return 1, and the first 1 characters of the input array should be: ["a"]

Explanation:
Nothing is replaced.

Example 3:
Input:
["a","b","b","b","b","b","b","b","b","b","b","b","b"]

Output:
Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].

Explanation:
Since the character "a" does not repeat, it is not compressed. "bbbbbbbbbbbb" is replaced by "b12".
Notice each digit has it's own entry in the array.

Note:
All characters have an ASCII value in [35, 126].
1 <= len(chars) <= 1000.



题意：给定一个字符串让你按照指定格式进行压缩。规则是①将连续相同的字符串比如aaaaa表示成a5。②如果只有一个字符则数字省略不写。



思路：

1.直接遍历统计连续相同的字符个数，然后记录，注意个数为1和末尾的特殊处理。
参考代码：

class Solution {

public:

    int compress(vector<char>& chars) {

        int cnt=1,n=chars.size();

        vector<char> ans;

        for(int i=0;i<n-1;++i){

            if(chars[i]==chars[i+1]) ++cnt;

            else{

                ans.push_back(chars[i]);

                 if(cnt!=1){

                    string temp=to_string(cnt);

                    for(int j=0;j<temp.size();++j) ans.push_back(temp[j]);

                 }

                cnt=1;

            }

        }

        ans.push_back(chars[n-1]);

        if(cnt!=1)

        {

            string temp=to_string(cnt);

            for(int i=0;i<temp.size();++i) ans.push_back(temp[i]);

        }

		chars=ans;

        return ans.size();

    }

};
