#include <iostream>
#include <string>

class Hello {
    public:

        Hello() : size(0), messages(nullptr) {
            std::cout << "No arg constructor for " << this << std::endl;
        }

        Hello(int size) {
            this->size = size;
            messages = new std::string[size];
            

            //TODO
            //create an array of strigns of 'size' elements dynamically
            //store an array in messages pointer
            //initizalize the string with random messages
            
            for (int i = 0; i < size; i++){
                messages [i] = (i % 2) ? "Welcome!" : "Good Bye!";
            }
        }

        //destructor
        ~Hello() {
            std::cout << "Destructor for " << this << std::endl;
            if(messages != nullptr) {
                delete [] messages;
            }
        }

        void bye() const {
            std::cout <<"Bye!!!!!!!!!!\n\n";
        }
    private:
    int size;
    std::string* messages;
};


int main(void){
    Hello* hi = new Hello;
    Hello* hello = new Hello(5);

    for (int i = 0; i < 9999999999; i++) {
        Hello(99999999);
    }
    //call bye method
    hi->bye();

    delete hi;
    delete hello;

    return 0;
}