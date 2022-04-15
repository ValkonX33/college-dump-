#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Function to find the total number of 1's in a sorted binary array
int count(vector<int> const &nums)
{
    return upper_bound(nums.begin(), nums.end(), 1)
            - lower_bound(nums.begin(), nums.end(), 1);
}
 
int main()
{
    vector<int> nums = { 0, 0, 0, 1, 1, 1, 1 };
 
    cout << "The total number of 1's present is " << count(nums);
 
    return 0;
}