//题目与思路解析参考我的博客：https://blog.csdn.net/vir_lee/article/details/80510788

class Solution {
public:
    int maxProfit(vector<int>& prices){
        int profit=0;
        if(prices.size()<=1) return 0;
        for(int i=1;i<prices.size();++i){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};
