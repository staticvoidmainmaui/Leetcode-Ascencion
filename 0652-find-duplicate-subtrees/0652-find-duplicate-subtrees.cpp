/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    // subtree problem
    // returning : vector filled with the root of duplicate subtree
    // duplicate subtree: the same exact sequence of number
    // check if next until null will cause the hashmap to be empty?

public:
    // approach 1: im going to try to make a unordererd map outside the function
    // for then the traverse function to beable to insert into as it goes all
    // the way down. hashmap[node->val]= the number of occurances of a number in
    // hashmap, traverse through entire branch of a subtree , and record all
    // numbers,

    // Approach 3:
    //  has a serialized subtree with string for each value
    // hashmap[string] is the occurance
    // hashmap[key] identifies with key being the the serialized subtring
    unordered_map<string, int> hashmap; // serialized subtree -> pointing at the
                                        // occurances : String -> occurances
    std::vector<TreeNode*> result;

    // this is how we should traverse and using a helper function since it has
    // to be recursive , gets a top node and goes all the way down it
    string serialize(TreeNode* node) {
        if (!node)
            return "#";
        string left = serialize(node->left);
        string right = serialize(node->right);
        string key = left + "," + right + "," + to_string(node->val);

        if (hashmap[key] == 1) { // when seen exactly the second time push , but
                                 // not after that...
            result.push_back(node);
        }
        hashmap[key]++;
        return key;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        // serialize does the serialized tree for an entire subtree , starting
        // at the node you give it
        serialize(root);
        return result;
    }
};