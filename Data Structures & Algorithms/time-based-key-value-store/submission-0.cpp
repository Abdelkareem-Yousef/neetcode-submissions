class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> store;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        string res = "";
        auto& values = store[key];
        int lo = 0, hi = (int)values.size() - 1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (values[mid].first <= timestamp) {
                res = values[mid].second;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return res;
    }
};