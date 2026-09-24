class MyHashSet {
private:
    vector<vector<int>> hashSet;
    int size = 1000;

public:
    MyHashSet() {
        hashSet.resize(size);
    }
    
    void add(int key) {
        int idx = key % size;

        // Don't add duplicates
        for (int num : hashSet[idx]) {
            if (num == key)
                return;
        }

        hashSet[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = key % size;

        for (auto it = hashSet[idx].begin(); 
             it != hashSet[idx].end(); 
             it++) {

            if (*it == key) {
                hashSet[idx].erase(it);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int idx = key % size;

        for (int num : hashSet[idx]) {
            if (num == key)
                return true;
        }

        return false;
    }
};