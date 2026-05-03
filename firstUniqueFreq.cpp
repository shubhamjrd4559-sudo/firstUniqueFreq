#include<bits/stdc++.h>
using namespace std;

int firstUniqueFreq(vector<int> &nums){
    
    unordered_map<int, int> freq;

    // count freq of each number
    for(int x : nums){
        freq[x]++;
    }
    // example:
    // 2 → 3 times  
    // 3 → 1  
    // 1 → 1  
    // 4 → 1  
    // 5 → 2  
    // 6 → 2 

    unordered_map<int, int> freqCount;

    // count how many numbers have a given freq
    for(auto &p : freq){
        freqCount[p.second]++;  
        // p.first  = number
        // p.second = frequency
    }

    // freq ka freq
    // 1 → 3 numbers (3,1,4)
    // 2 → 2 numbers (5,6)
    // 3 → 1 number (2) ✅

    // find first number whose freq is unique
    for(int x : nums){
        if(freqCount[freq[x]] == 1){
            return x;
        }
    }

    // Only frequency 3 unique hai, so answer = 2
    return -1;
}

int main(){
    vector<int> nums = {2,3,1,2,4,5,5,6,6,2};

    if(nums.size() != 0){
        cout << firstUniqueFreq(nums);
    }

    return 0;
}
