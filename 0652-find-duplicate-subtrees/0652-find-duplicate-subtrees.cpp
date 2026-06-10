/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    //subtree problem 
    //returning : vector filled with the root of duplicate subtree
    //duplicate subtree: the same exact sequence of number
    //check if next until null will cause the hashmap to be empty?


public:
    //approach 1: im going to try to make a unordererd map outside the function for then the traverse function to beable to insert into as it goes all the way down.
    //hashmap[node->val]= the number of occurances of a number in hashmap, 
    //traverse through entire branch of a subtree , and record all numbers, 


    //Approach 3:
    // has a serialized subtree with string for each value
    //hashmap[string] is the occurance
    //hashmap[key] identifies with key being the the serialized subtring 
    unordered_map<string,int> hashmap; //serialized subtree -> pointing at the occurances
    std::vector<TreeNode*> result;


    //this is how we should traverse and using a helper function since it has to be recursive , gets a top node and goes all the way down it 
    string serialize(TreeNode* node){
        if(!node) return "#";
        string left = serialize(node->left) ; //add +"Left?" didnt work
        string right = serialize(node-> right) ;
        string key= left + "," + right + "," + to_string(node->val);

        hashmap[key]++;
        if(hashmap[key]==2 ) { //when seen exactly the second time push , but not after that...
            result.push_back(node); 
        }
        return key;

    }


    // void traverse(TreeNode* node) {
    //   if (!node) return;
    //   hashmap.insert(node->val)      // preorder — print before going down
    //   traverse(node->left);
    //   traverse(node->right);
    // }
    //might not need traverse function and can just be done regionally 
    //dont i have to check the subtree of every pair against every other subtree
    //if there is a subtree with 2 nodes, check all wiht 2 nodes, but one with 3 nodes needs to be ckeced aaint every other one

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        //serialize does the serialized tree for an entire subtree , starting at the node you give it
        serialize(root);
        return result;
        
        
    }
};