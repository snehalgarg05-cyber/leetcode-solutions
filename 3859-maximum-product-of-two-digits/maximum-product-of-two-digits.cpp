class Solution {
public:
    int maxProduct(int n) {
        vector<int> store;
        long long max_prod = 1;
        while(n>0){
            int dig = n%10;
            n/=10;
            store.push_back(dig);
        }
        int m = store.size();
        sort(store.begin(),store.end());
        return store[m-1]*store[m-2];
    }
};