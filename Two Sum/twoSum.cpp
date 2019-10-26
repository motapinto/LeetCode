class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        ////unordered_map<number(key), index(value)>
        unordered_map<int, int> myMap;
        vector<int> result;
        
        //If we fix a number X
        //then we just need Y = target - X
        
        for (int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];

            //if complement is found in map, returns it
            if (myMap.find(complement) != myMap.end()) {
                result.push_back(myMap[complement]);
                result.push_back(i);			
                return result;
            }

            //number was not found. Put it in the map.
            myMap[numbers[i]] = i;
        }
        return result;
    }
};
