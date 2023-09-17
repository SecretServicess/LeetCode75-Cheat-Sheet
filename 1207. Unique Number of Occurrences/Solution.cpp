class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> countMap; 
        // Create a hash map to store value-count pairs
        
        // Count the occurrences of each value in arr
        for (int num : arr) {
            countMap[num]++; 
        // Increment the count for the current value
        }
        
        unordered_set<int> uniqueCounts; 
        // Create a set to store unique counts
        
        // Check if all counts are unique
        for (const auto& pair : countMap) { // Iterate through the hash map
            int count = pair.second; // Get the count for the current value
            
            if (uniqueCounts.count(count) > 0) {
                return false; // Duplicate count found, return false
            }
            
            uniqueCounts.insert(count); // Add the count to the set
        }
        
        return true; // All counts are unique, return true
    }
};
