// You should write binary search as easily as drinking water 

#include<iostream>
#include<vector>

using namespace std;

int bs(vector<int> nums, int target, int low, int high)
{
    if (low > high) {return -1;}
    int mid = (high-low)/2 + low; 
    if (nums[mid] == target){   return mid;}
    else if (nums[mid] > target ){  bs(nums, target, low, mid-1);}
    else{   bs(nums, target, mid+1, high);}
    return -1;
}
int main(void)
{

    vector<int> v = {1, 5, 3, 2, 4, 9, 8, 11};
        // Element to be searched
    int target = 8;

    // Searching the target element using the
      // recursive function
    if (bs(v, 0, v.size() - 1,target)) {
        cout << target << " found.";
    } else {
        cout << target << " NOT found.";
    }
    return 0;
}