#include<iostream>
#include<queue>
using namespace std;




class KthLargest {
    int k;
    
    priority_queue <int, vector<int>, greater<int>> q; 
public:
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        
        
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
            if(q.size()>k)q.pop();
            
            
        }
        
        
    }
    
    int add(int val) {
        q.push(val);
        if(q.size()>k)q.pop();
        
       return q.top();
        
    }
};