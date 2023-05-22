class Solution {
    public:
    int solve(int N, vector<int> p){
       vector<int> out(N, 0);
        
        for(int i = 1; i < N; i++){
            ++out[p[i]];
        }
        int ans = 0;
        for(int i = 0; i < N; i++)
            ans += out[i] == 0;
            
        if(out[0] == 1)
            ans++;
        return max(N- 1 - ans, 0);
    }
};
