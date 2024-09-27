#include <iostream>

int main(){
    int x = 0;
    for (int i=0; i<10; i++){
        x += i;
        std::cout << "x: " << x << std::endl;
    }
    return 0;
}

