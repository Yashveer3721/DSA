// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int max=0;
//         for(int i=0;i<prices.size()-1;i++)
//         {
//             for(int j=i+1;j<prices.size();j++)
//             {
//                 if(prices[j]-prices[i]>max)
//                 max=prices[j]-prices[i];
//             }
//         }
//         return max;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   // lowest price seen so far
        int maxProfit = 0;        // best profit found

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minPrice) {
                minPrice = prices[i];  // update min price
            }
            else if(prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;  // update max profit
            }
        }

        return maxProfit;
    }
};
