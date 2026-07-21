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
            node *to_remove = current;
            current = current->next;
            delete to_remove;
        }
    }

        //Insere no início
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
        //Insere no final
    void push_back(int value){
        node *new_node = new node;
        new_node-> value = value;
        new_node->next = 0;
        if (this->head == 0)
            this->head = new_node;
        else
            this->tail->next=new_node;
            this->tail=new_node;
    }

    bool remove (int value){
        if (this->head == nullptr){return false;}

        node *current = this->head;
        while (current->next != 0 && current->next-> value != value){
            current = current->next;
        }
        if (current->next == 0){
            return false;
        }
        node *to_remove = current->next;
        current->next = to_remove->next;

        if (to_remove == this->tail){
            this->tail = current;
        }
        delete to_remove;
        return true;
        

    }
};