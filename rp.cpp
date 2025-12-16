
#include<iostream>
#include<vector>
using namespace std;

class Solution{
     public:
     int S( vector<int>& nums ) {
        if (  nums.size() ==0 ) {
            return 0;

        }
          int k  = 1;
          for(int i = 1; i < nums.size(); i ++  ) {
             if( nums[i] != nums [ i -1]) {
                nums[k] = nums[i];
                k++;
             }
          }
          return k;
        } 
    } ;

    int main () {
        Solution obj;
        vector<int> nums = { 1,2,2,3,43  } ;

        int result = obj.S( nums);
        cout<<"This is "<<result <<endl;

        cout<<"Modified array: ";
        for( int i = 0; i < result ; i ++ ) {
            cout<< nums[i] <<"";
        }
        return 0;



    }
