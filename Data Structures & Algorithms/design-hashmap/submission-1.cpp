class MyHashMap {

private: 
    vector<vector<pair<int, int>>> hm;
    int size = 2000;

public:

    MyHashMap() {
        hm.resize(size);
    }
    
    void put(int key, int value) {
    int idx = key % size;

    for (auto &num : hm[idx]) {
        if (num.first == key) {
            num.second = value;
            return;
        }
    }

    hm[idx].push_back({key, value});
}
    
    int get(int key) {
        int idx = key % size;
        for (auto &num: hm[idx]) {
            if (key == num.first) {
                return num.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = key % size;
        for (auto it = hm[idx].begin(); it!= hm[idx].end(); it++) {
            if (it->first == key) {
                hm[idx].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */