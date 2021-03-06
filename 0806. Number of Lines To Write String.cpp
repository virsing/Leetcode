//  题目与解题思路参考我的博文：https://blog.csdn.net/vir_lee/article/details/80467700
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int row=1,num=0;
        vector<int> ans(2,0);
        for(int i=0;i<S.size();i++){
            num+=widths[S[i]-'a'];
            if(num>100) {
                row++;
                num=widths[S[i]-'a'];
            }
        }
        ans[0]=row;
        ans[1]=num;
        return ans;
    }
};
