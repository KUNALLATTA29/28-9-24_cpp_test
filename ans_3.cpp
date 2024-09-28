 bool search(int value){
        node* temp = head;
        while (temp) {
            if (temp->data == value){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
