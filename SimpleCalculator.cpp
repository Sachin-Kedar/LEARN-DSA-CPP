#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int label;
    int left;
    int right;
};

vector<TreeNode> tree;

// Function to find the path from a node to the root
void findPath(int node, vector<int>& path) {
    while (node != 0) {
        path.push_back(node);
        if (tree[node].left != -1)
            node = tree[node].left;
        else
            node = tree[node].right;
    }
    path.push_back(0);
}

// Function to calculate the largest difference in the path
int largestDifference(const vector<int>& path) {
    int min_label = tree[path.back()].label;
    int max_label = tree[path.back()].label;

    for (int i = path.size() - 2; i >= 0; --i) {
        min_label = min(min_label, tree[path[i]].label);
        max_label = max(max_label, tree[path[i]].label);
    }

    return max_label - min_label;
}

int main() {
    int N;
    cin >> N;
    tree.resize(N);

    for (int i = 0; i < N; ++i) {
        cin >> tree[i].label >> tree[i].left >> tree[i].right;
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int query;
        cin >> query;

        vector<int> path;
        findPath(query, path);

        int result = largestDifference(path);
        cout << result << endl;
    }

    return 0;
}
