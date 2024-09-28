node* getmiddle(node* head) {
    if (head == nullptr) {
        return nullptr;
    }

    node* slow = head;
    node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}
