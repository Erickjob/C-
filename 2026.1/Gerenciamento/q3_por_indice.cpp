#include <iostream>

class vector{
    private:
        int *data;
        unsigned int size_, capacity_, increase_capacity_;
        void increase_capacity(){
            this->capacity_+= this->increase_capacity_;
            int *new_data= new int[this->capacity_];
            for (unsigned int i = 0; i < this->size_; i++){
                new_data[i] = this->data[i];
            }
            delete[] this->data;
            this-> data = new_data;
        }

    public:
        vector(){
            this-> size_= 0;
            this-> capacity_ = 20;
            this-> increase_capacity_ = 20;
            this->data = new int[this-> capacity_];
        }

        void push_back(int value){
            if (this->size_== this->capacity_)
                increase_capacity();
            this->data[this->size_] = value;
            this->size_++;

        }
        bool remove (int index){
            for (unsigned int i = 0; i < this->size_; i++){
                if ( i == index){
                    for (unsigned int j = i; j < this->size_-1; j++){
                        data[j] = data[j+1];
                    }
                    this->size_--;
                    return true;
                   
                }
                
            }
            return false;
        }

        unsigned int size(){
            return this->size_;
        }

        int get(unsigned int index){
            if(index < this->size_)
                return this->data[index];
            else
                return -1;
        }

};

int main(){
    vector v1;
    int value;
    std::cin >> value;

    while (value != -1){
        v1.push_back(value);
        std::cin >> value;
    }

    int remover_index;
    std::cin >> remover_index;
    v1.remove(remover_index);
    for (int i = 0; i < v1.size(); i++){
        std::cout << v1.get(i) << "" << std::endl;
    }


    return 0;
}