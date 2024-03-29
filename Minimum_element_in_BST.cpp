
Given an array of size N which represents the elements to be inserted into BST (considering first element as root). The task is to find the minimum element in this given BST. If the tree is empty, there is no minimum elemnt, so print -1 in that case.

Input:
The input line contains T, denoting the number of testcases. Each testcase contains two lines. The first line contains N (number of nodes in BST). The second line contains N nodes of the BST separated by space.

Output:
For each testcase in new line, print the minimum element in BST.

User Task:
The task is to complete the function minValue() which takes root as the argument and returns the minimum element of BST.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
6
5 4 3 6 7 1
3
9 10 11

Output:
1
9

Explanation:
Testcase 1: The minimum value in the given BST is 1.


Sol:

/*
Structure of the node of the binary search tree is as
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
// your task is to complete the below function
int minValue(Node* root)
{
    if(!root)
    {
        return -1;
    }
    if(!root->left)
    {
        return root->data;
    }
    return minValue(root->left);
}

