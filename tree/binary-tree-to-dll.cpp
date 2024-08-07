class Solution
{
    public: 
    void bToDLLUtil(Node *root, Node **head_ref)
    {
        if(root == NULL)
            return;
        bToDLLUtil(root->right, head_ref);
    
        root->right = *head_ref;
        if (*head_ref != NULL)
            (*head_ref)->left = root;
        *head_ref = root;
        bToDLLUtil(root->left, head_ref);
    }

    public:
    Node* bToDLL(Node *root)
    {
        Node *head = NULL;
        bToDLLUtil(root,&head);
        return head;
    }
};
