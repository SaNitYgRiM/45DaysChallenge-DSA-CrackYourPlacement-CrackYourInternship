class Solution {
  public:
    Node* Bst(int pre[], int size) {
        if (canRepresentBST(pre, size) == false) {
            cout << "NO";
            return NULL;
        }
        Stack* stack = createStack(size);
        Node* root = newNode(pre[0]);
        push(stack, root);
        int i;
        Node* temp;
        for (i = 1; i < size; ++i) {
            temp = NULL;
            while (!isEmpty(stack) && pre[i] > peek(stack)->data)
                temp = pop(stack);
            if (temp != NULL) {
                temp->right = newNode(pre[i]);
                push(stack, temp->right);
            }
            else {
                peek(stack)->left = newNode(pre[i]);
                push(stack, peek(stack)->left);
            }
        }
        return root;
    }
};
