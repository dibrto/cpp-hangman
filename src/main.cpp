#include "vector.h"

int main(int argc, char const *argv[]){
    Vector<int> vec(1);
    
    vec.push_back(3);
    vec.push_back(4);
    vec.print();
    
    return 0;
}