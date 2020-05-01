/*
Mohammed Mudassir Mohiuddin
*/

class Node{
    public:
    int key;
    int val;
    Node* pre;
    Node* next;
    
    Node(int key, int val){
        this->key = key;
        this->val = val;
    }
};

class LRUCache {
    unordered_map<int, Node*> map;
    int count =0, capacity;
    Node* head;
    Node* tail;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        head = new Node(0,0);
        tail = new Node(0,0);
        head->next = tail;
        tail->next = head;
        head->pre  = NULL;
        tail->next = NULL;
        //cout<<head->key<<head->val<<"\n";
        //cout<<tail->key<<tail->val;
    }
    void deleteNode(Node* node){
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
    void addtoHead(Node* node){
        node->next = head->next;
        node->next->pre = node;
        node->pre = head;
        head->next = node;
    }
    int get(int key) {
        if(map.find(key) == map.end()) return -1;
        Node* node = map[key];
        deleteNode(node);
        addtoHead(node);
        //cout<<node->val<<"\n";
        return node->val;
    }
    
    void put(int key, int value) {
        if(map.find(key) == map.end()){
            Node* node = new Node(key, value);
            map[key] = node;
            if(count < capacity){
                ++count;
                addtoHead(node);
                
            }
            else
            {
                map.erase(tail->pre->key);
                deleteNode(tail->pre);
                addtoHead(node);
            }
        }
        else
        {
            Node* node = map[key];
            node->val = value;
            deleteNode(node);
            addtoHead(node);
        }
    }
};
static auto fast_io = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();


/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */