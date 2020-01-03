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
    int maxDepth(Node* root)
    {
        int depth = 0;
        int maxd = 0;
        if(root)
        {
            lookup(root, depth + 1, maxd);
        }
        return maxd;
    }
    void lookup(Node* root, int depth, int &maxd)
    {
        maxd = max(depth, maxd);
        for(auto i : root->children)
        {
                lookup(i, depth+1, maxd);
        }
    }
};
