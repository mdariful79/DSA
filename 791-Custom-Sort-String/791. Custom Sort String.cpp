class Solution {
public:
    string customSortString(string order, string s) {
        // Define a lambda function to compare characters based on the order string
        auto compare = [&](char a, char b) {
            int idx_a = order.find(a); // Find the index of character a in the order string
            int idx_b = order.find(b); // Find the index of character b in the order string
            return idx_a < idx_b; // Compare the indices
        };

        // Sort the string s using the custom compare function
        sort(s.begin(), s.end(), compare);

        return s; // Return the sorted string
    }
};
