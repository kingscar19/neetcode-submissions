class MyHashSet {
private: 
    vector<int> exists;
public:
    MyHashSet() {
        exists.resize(1000001, false);
    }
    
    void add(int key) {
        exists[key] = true;
    }
    
    void remove(int key) {
        exists[key] = false;
    }
    
    bool contains(int key) {
        return exists[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */