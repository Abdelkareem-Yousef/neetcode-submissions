class TimeMap {
public:

    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
        
    }
    
    string get(string key, int timestamp) {
        int low = 0;
        auto& values = mp[key];
        string res = "";
        int high = values.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(values[mid].first <= timestamp){
                res = values[mid].second;
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }
        return res;
        
    }
};
