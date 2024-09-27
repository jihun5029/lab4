include <iostream>

class Myclass{
    public: 
        void myFunction();
        int myVariable;
};

void Myclass::myFunction(){
    std::cout << "Hello World!" << std::endl;
}

int main(){
    Myclass obj;
    obj.myFunction();
    return 0;
}
