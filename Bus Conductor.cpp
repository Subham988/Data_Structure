class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        int sum=0;
        sort(chairs.begin(),chairs.end());
        sort(passengers.begin(),passengers.end());
        for(int i=0;i<n;i++){
            sum+=abs(passengers[i]-chairs[i]);
        }
        return sum;
    }
};
