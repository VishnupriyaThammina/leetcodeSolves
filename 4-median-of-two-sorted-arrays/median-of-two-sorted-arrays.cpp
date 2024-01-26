class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {      if(nums1.size()==0 && nums2.size()==0){
        return 0;
    }
         vector<int> a;
        priority_queue<int,vector<int>,greater<int>> pq;
        if(nums1.size()!=0)
        for(int i = 0; i < nums1.size();i++){
            pq.push(nums1[i]);
        }
        if(nums2.size()!=0)
         for(int i = 0; i < nums2.size();i++){
            pq.push(nums2[i]);
        }
        int s = pq.size();
        int k = s/2;
     if(s%2!=0){
     while(k!=0){
         k--;
         pq.pop();
     }
     return pq.top();
     }else if(s%2==0){
         while(k!=1){
k--;
pq.pop();
         }
         double a = pq.top();
         pq.pop();
         double b = pq.top();
         return (double)((a+b)/2);
     }

        return 0;
        
    }
};