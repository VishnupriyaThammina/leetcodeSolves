class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     priority_queue<int> pq;
     for(int i =0; i <m;i++){
        pq.push(nums1[i]);
     }  
     
     for(int i = 0; i < n ;i++){
       pq.push(nums2[i]);
     } 
     int a = pq.size();
     for(int i = 0; i <a;i++){
         nums1[i] = pq.top();
         pq.pop();
     }
     reverse(nums1.begin(),nums1.end());
    }
};