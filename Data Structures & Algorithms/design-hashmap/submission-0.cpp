class MyHashMap {
private:
    vector<vector<pair<int, int>>> hashMap;

public:
    MyHashMap() {
        hashMap.resize(1000);
    }

    void put(int key, int value) {
        int idx = key % 1000;

        for (auto &num : hashMap[idx]) {
            if (num.first == key) {
                num.second = value;
                return;
            }
        }

        hashMap[idx].push_back({key, value});
    }

    int get(int key) {
        int idx = key % 1000;

        for (auto &num : hashMap[idx]) {
            if (key == num.first) {
                return num.second;
            }
        }

        return -1;
    }

    void remove(int key) {
        int idx = key % 1000;

        for (auto it = hashMap[idx].begin(); it != hashMap[idx].end(); it++) {
            if (it->first == key) {
                hashMap[idx].erase(it);
                return;
            }
        }
    }
};