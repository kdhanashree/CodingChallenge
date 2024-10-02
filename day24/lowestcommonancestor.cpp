#include<bits/stdc++.h>
using namespace std;
// Problem : Lowest Common Ancestor (LCA) in a Binary Tree
// You are given a binary tree and two distinct nodes within the tree. Your task is to find the lowest common ancestor (LCA) of these two nodes. The LCA of two nodes p and q is defined as the lowest node in the tree that has both p and q as descendants (where we allow a node to be a descendant of itself).

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL || root == p || root == q)
        return root;

        TreeNode * left = lowestCommonAncestor(root->left , p ,q);

        TreeNode * right = lowestCommonAncestor(root->right , p , q);

        if(left == NULL)return right;
        else if(right == NULL)return left;
        else{
            return root;
        } 
    }

//time-Complexity:O(n)
//space-Complexity:O(n)