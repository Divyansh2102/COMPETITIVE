class trieNode{
    public:
        trieNode*children[26];
        bool isTerminal;
        trieNode(){
            isTerminal=false;
            for(int i=0;i<26;i++)  children[i]=NULL;
        }
};
class Trie {
public:
    trieNode*root;
    Trie() {
        root=new trieNode;
    }
    
    void insert(string word) {
        trieNode*node=root;
        for(auto &i:word){
            int index=i-'a';
            if(!node->children[index]) node->children[index]=new trieNode();
            node=node->children[index];
        }
        node->isTerminal=true;
    }
    
    bool search(string word) {
        trieNode*node=root;
        for(auto &i:word){
            int index=i-'a';
            if(!node->children[index]) return false;
            node=node->children[index];
        }
        return node->isTerminal;
    }
    
    bool startsWith(string prefix) {
        trieNode*node=root;
        for(auto &i:prefix){
            int index=i-'a';
            if(!node->children[index]) return false;
            node=node->children[index];
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