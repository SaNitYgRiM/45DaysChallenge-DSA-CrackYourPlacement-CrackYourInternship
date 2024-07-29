class Solution
{
    public:
    Node *compute(Node *head)
    {
      if (head->next == nullptr) {
            return head;
        }
        
        head->next = compute(head->next);
        if (head->data < head->next->data) {
            return head->next;
        }
        
        return head;
    }
    
};
