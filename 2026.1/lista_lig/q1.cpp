class ll_int
{
private:
    struct ll_int_node
    {
        int value;
        struct ll_int_node *next;
    };
    ll_int_node *first, *last;
    unsigned int size_;

public:
    ll_int()
    {
        this->first = nullptr;
        this->last = nullptr;
        this->size_= 0;
    }

    void push_front(int value)
    {
        ll_int_node *new_node = new ll_int_node;
        new_node->value = value;
        new_node->next = this->first;
        if (this->first == nullptr)
            this->last = new_node;
        this->first = new_node;
    }
    void push_back(int value)
    {
        ll_int_node *new_node = new ll_int_node;
        new_node->value = value;
        new_node->next = nullptr;
        if (this->first == nullptr)
            this->first = new_node;
        else
            this->last->next = new_node;
        this->last = new_node;
    }
    void pop_front()
    {
        if (this->first == nullptr)
            return;
        ll_int_node *to_remove = this->first;
        if (this->last == this->first)
            this->last = nullptr;
        this->first = this->first->next;
        delete to_remove;
    }
    void pop_back()
    {
        if (this->last == nullptr)
            return;
        if (this->first == this->last)
        {
            delete this->first;
            this->first = nullptr;
            this->last = nullptr;
        }
        ll_int_node *current = this->first;
        while (current->next != this->last)
            current = current->next;
        current->next = nullptr;
        delete this->last;
        this->last = current;
    }

     
    int front()
    {
        if (this->first != nullptr)
            return this->first->value;
        else
            return -1;
    }
    unsigned int back()
    {
        if (this->last != nullptr)
            return this->last->value;
        else
            return -1;
    }
    int sum()
    {
        int ans = 0;
        ll_int_node *current = this->first;
        while (current != 0)
        {
            ans += current->value;
            current = current->next;
        }
        return ans;
    }
    bool insert_after(int index, int value){
        if(this->first == nullptr || index > this->size_)
            return false;

        ll_int_node *current = this->first;
        
        while (current->value != x){
            current = current->next;
        }
        current = current->next;
        current
        

        }

    }

    unsigned int size(){   
        return this->size_;
    }

    int get_at(int index){                        //O(n)
        ll_int_node *current = this-> first;
        int indice=0;
        while (indice != index){
            current = current->next;
        }
        int value = current->value; 
        return value;
    }

    void set_at(int indice, int value){           //O(n)
        ll_int_node *current = this->first;
        for (int i=0; i < indice; i++){
            current = current->next;
        }
        current->value = value;
    }

    ~ll_int(){                                  //O(n²)
        ll_int_node *current, *to_remove;
        current = this -> first;
        while(current != 0){
            to_remove = current;
            current = current->next;
            delete[] current;
        }
    }
};