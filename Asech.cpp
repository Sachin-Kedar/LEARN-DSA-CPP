#include <iostream>
#include <algorithm>

using namespace std;

// Definition of TreeNode structure
struct TreeNode {
    int label;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : label(val), left(nullptr), right(nullptr) {}
};

// Depth-first search (DFS) function
int dfs(TreeNode* node, int max_label, int min_label) {
    if (node == nullptr)
        return max_label - min_label;

    max_label = max(max_label, node->label);
    min_label = min(min_label, node->label);

    int left_diff = dfs(node->left, max_label, min_label);
    int right_diff = dfs(node->right, max_label, min_label);

    return max(left_diff, right_diff);
}

// Function to find the largest difference of labels on the path from node to root
int find_largest_difference(TreeNode* root, TreeNode* node) {
    return dfs(root, node->label, node->label);
}

// Build the binary tree from the given input
TreeNode* build_tree(int n, vector<vector<int>>& nodes) {
    vector<TreeNode*> tree(n);

    for (int i = 0; i < n; ++i) {
        int label = nodes[i][0];
        int left = nodes[i][1];
        int right = nodes[i][2];

        tree[i] = new TreeNode(label);
        if (left != -1)
            tree[i]->left = tree[left];
        if (right != -1)
            tree[i]->right = tree[right];
    }

    return tree[0];
}

// Main function to handle input and output
int main() {
    int n;
    cin >> n;
    vector<vector<int>> nodes(n, vector<int>(3));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> nodes[i][j];

    TreeNode* root = build_tree(n, nodes);

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;
        int result = find_largest_difference(root, root);
        cout << result << endl;
    }

    return 0;
}