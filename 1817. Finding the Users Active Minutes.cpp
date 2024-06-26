class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>answer(k);
        unordered_map<int , set<int>>mp;
        for(int i = 0 ; i < logs.size() ; i++){
            mp[logs[i][0]].insert(logs[i][1]);
        }
        for(auto paIr : mp){
            int Term = paIr.second.size() - 1;
            answer[Term]++;
        }
        return answer;
    }
};
