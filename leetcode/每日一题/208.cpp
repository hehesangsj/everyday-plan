class Trie {
public:
    /** Initialize your data structure here. */
    bool isEnd;
    Trie* list[26] = {nullptr};

    Trie() {
        isEnd = 0;

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* temp = this;
        for (char ch : word){
            if (temp->list[ch-'a'] == NULL){
                temp->list[ch-'a'] = new Trie();
            }
            temp = temp->list[ch-'a'];
        }
        temp->isEnd = 1;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* temp = this;
        for (char ch : word){
            if (temp->list[ch-'a'] == nullptr){
                return false;
            }
            temp = temp->list[ch-'a'];
        }
        if (temp->isEnd == 1)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* temp = this;
        for (char ch : prefix){
            if (temp->list[ch-'a'] == nullptr){
                return false;
            }
            temp = temp->list[ch-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
