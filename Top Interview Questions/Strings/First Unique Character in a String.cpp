// First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<int, pair<int, int>> char_map;
        int index = s.size();
        for (int i = 0; i < s.size(); ++i) 
        {
            char_map[s[i]].first++;
            char_map[s[i]].second = i;
        }
        for (auto item : char_map) 
        {
            if (item.second.first == 1) {
                index = min(index, item.second.second);
            }
        }
        return index == s.size() ? -1 : index;
    }
};
