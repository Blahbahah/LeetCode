#include <iostream>
#include "functions.h"
using namespace std;
int main(int argc, const char * argv[]) {
    int intMeme = 50;
    
    vector<int> memes{10, 20, 30};
    
    twoSum(memes, intMeme);
    
    return 0;
}

vector<int> twoSum(vector<int> nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[i + 1] == target){
                vector<int> returnVector{i, i + 1};
                return returnVector;
            }
        }
    }
    return {0,0};
}
