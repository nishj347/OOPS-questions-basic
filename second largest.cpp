#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        for (int i=0;i<n-1;i++){
            for (int j=0;j<n-i-1;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
            
            
        }
    return arr[-2];    
        
    }
};

int main(){
    int arr[]={12 35 1 10 34 1}
    Solution s;
    int ans=s.getsecondlargest(arr)

    cout<<ans<<endl;
    return 0;
}
