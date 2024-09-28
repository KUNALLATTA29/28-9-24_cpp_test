void deletebyvalue(int value) {
        if (!head){
            cout<<"empty"<<endl;
            return;
        }

        if (head->data == value) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* current = head;
        node* pre = NULL;

        while (current && current->data != value) {
            pre = current;
            current = current->next;
        }
        
        if (!current) {
            cout<<" not found."<<endl;
            return;
        }

        pre->next = current->next;
        delete current;
    }
