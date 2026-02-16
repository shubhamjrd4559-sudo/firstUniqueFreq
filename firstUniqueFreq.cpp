#include <bits/stdc++.h>
using namespace std;

int firstUniqueFreq(vector<int> &nums){
    vector<int> freq(100001, 0);

    for(int x : nums){
        freq[x]++;
    } //2→3, 3→1 ,1→1, 4→1,5→2 ,6→2

    vector<int> freqcnt(100001, 0);

    for(int p : freq){
        freqcnt[p]++;
    }//1→3 , 2→2 ,3→1

    for(int x : nums){
        if(freqcnt[freq[x]] == 1){
            return x;
        }
    }

    return -1;
}

int main(){
    vector<int> nums = {2,3,1,2,4,5,5,6,6,2};

    if(nums.size() != 0){
        cout << firstUniqueFreq(nums);
    }

    return 0;
}
