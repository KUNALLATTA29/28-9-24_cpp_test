int length(){
        int count=0;
        node* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
