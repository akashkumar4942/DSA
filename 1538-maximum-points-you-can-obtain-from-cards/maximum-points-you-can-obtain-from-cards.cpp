class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        
        
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<k;i++){
                  leftsum+=cardPoints[i];
        }
       int ans=leftsum;
        for(int i=0;i<k;i++){
            leftsum-=cardPoints[k-i-1];
            rightsum+=cardPoints[n-i-1];
            ans=max(ans,leftsum+rightsum);
        }
        return ans;
                
            
       
        
    }
};