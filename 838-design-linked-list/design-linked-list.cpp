class MyLinkedList {
public:
    int val;
    MyLinkedList* next;
    MyLinkedList* head;
    MyLinkedList* tail;

    MyLinkedList() {
        this->val = -1;
        this->next = NULL;
        this->head = NULL;
        this->tail = NULL;
    }
    
    int get(int index) {
        int count = 0;
        MyLinkedList* temp = this->head;

        while(count < index){
            if(temp != NULL){
                temp = temp->next;
            }
            count++;
        }

        if(temp != NULL){
            return temp->val;
        }
        else{
            return -1;
        }
    }
    
    void addAtHead(int val) {
        if(this->head == NULL){
            MyLinkedList* temp = new MyLinkedList();
            temp->val = val;
            temp->next = NULL;
            this->head = temp;
            this->tail = temp;
            return;
        }
        else{
            MyLinkedList* temp = new MyLinkedList();
            temp->val = val;
            temp->next = this->head;
            this->head = temp;
            return;
        }
    }
    
    void addAtTail(int val) {
        if(this->head == NULL){
            MyLinkedList* temp = new MyLinkedList();
            temp->val = val;
            temp->next = NULL;
            this->head = temp;
            this->tail = temp;
            return;
        }
        else{
            MyLinkedList* temp = new MyLinkedList();
            temp->val = val;
            this->tail ->next = temp;
            this->tail = temp;
            return;
        }
    }
    
    void addAtIndex(int index, int val) {
        //Case 1, if head pr joda
        if(index == 0){
            addAtHead(val);
            return;
        }

        //Case 2, if any position
        int count = 0;
        MyLinkedList* temp = this->head;
        while(count < index-1){
            if(temp != NULL)
                temp = temp->next;
            count++;
        }

        if(temp == NULL){ // out of index
            return;
        }

        //Case 3, If tail pr hai
        if(temp->next == NULL){
            addAtTail(val);
            return;
        }

        MyLinkedList* nodeToInsert = new MyLinkedList();
        nodeToInsert->val = val;
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
    
    void deleteAtIndex(int index) {
        //if Head delete
        if(index == 0){
            MyLinkedList* temp = this->head;
            this->head = this->head->next;
            temp->next = NULL;
            delete temp;
        }
        else{ // Any node delete
            MyLinkedList* temp = this->head;
            MyLinkedList* prev = NULL;
            int count = 0;

            while(count < index){
                prev = temp;
                if(temp != NULL)    
                    temp = temp->next;
                count++;
            }

            //Tail delete krna hua
            if(temp != NULL && temp->next == NULL){
                this->tail = prev;
            }

            if(temp != NULL){
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
