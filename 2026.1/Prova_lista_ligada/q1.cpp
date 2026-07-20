#include <iostream>

class single_list_int {
private:
    struct node{
        int value;
        struct node *next;
    };
    struct node *head, *tail;
    unsigned int size_;

public:

    //Construtor
    single_list_int(){
        this-> head = nullptr;
        this-> tail = nullptr;
        this-> size_= 0;
    }

    //Destrutor
    ~single_list_int(){
        node *current = this->head;
        while (current != nullptr){
            node *remove = current;
            current = current->next;
            delete remove;
        }
    }

    void push_front(int value){
        node *new_node = new node;
        new_node->value = value;
        new_node->next = this->head;
        if (this->head == nullptr){ 
            this->tail = new_node;
            this->head = new_node;
            this->size_ ++;
        }
    }
    void push_back(int value){
        
    }

};