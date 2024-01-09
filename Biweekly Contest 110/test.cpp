#include <bits/stdc++.h>
using namespace std;


/*
void inorder(TreeNode *root, vector<int> &v)
{
    if (root != NULL)
    {
        inorder(root->left, v);
        if (root->left == NULL && root->right == NULL)
        {
            v.push_back(root->val);
        }
        inorder(root->right, v);
    }
}



bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
    vector<int> v, v1;
    inorder(root1, v);
    inorder(root2, v1);
    return v == v1;
}

*/

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    // cout << numberOfArithmeticSlices(arr);
}




/*


class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        function<void(TreeNode*, vector<int>&)> collectLeafValues =
            [&](TreeNode* root, vector<int>& leafValues) {
                if (!root) {
                    return;
                }
                if (!root->left && !root->right) {
                    leafValues.push_back(root->val);
                }
                collectLeafValues(root->left, leafValues);
                collectLeafValues(root->right, leafValues);
            };

        vector<int> leafValues1, leafValues2;
        collectLeafValues(root1, leafValues1);
        collectLeafValues(root2, leafValues2);

        return leafValues1 == leafValues2;
    }
};




class Solution {
public:
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root!=NULL)
        {
            inorder(root->left, v);
            if(root->left == NULL && root->right == NULL)
            {
                v.push_back(root->val);
            }
            inorder(root->right,v);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> v,v1;
        inorder(root1,v);
        inorder(root2,v1);
        return v==v1;
    }
};

*/