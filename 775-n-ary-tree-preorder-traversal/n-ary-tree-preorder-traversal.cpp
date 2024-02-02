/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int> res;
void pre(Node* n){
    if(n==NULL){return;}
    res.push_back(n->val);
for(Node* i : n->children){
    pre(i);
}
}
    vector<int> preorder(Node* root) {
        pre(root);
        return res;
    }
};