node* merge(node* a, node* b) {
    node* ans = NULL;

    if (a == NULL){
        return (b);
    }else if (b == NULL){
        return (a);
    }

    if(a->data <= b->data){
        ans = a;
        ans->next = merge(a->next, b);
    }else{
        ans = b;
        ans->next = merge(a, b->next);
    }
    return ans;
}
