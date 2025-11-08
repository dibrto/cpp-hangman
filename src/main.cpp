#include "vector.h"

int main(int argc, char const *argv[]){
    Vector<int> vec;
    Vector<int> vec2(vec);
    Vector<int> vec3;
    vec3 = vec;

    cout << vec.getSize() << endl;
    cout << vec.empty() << endl;
    cout << vec.at(0) << endl;
    
    return 0;
}