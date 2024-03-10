#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if (arr.size() == 1)
    {
        return {-1};
    }
    else
    {
        arr.erase(min_element(arr.begin(), arr.end()));
    }
    
    return arr;
}