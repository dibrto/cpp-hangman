#include <iostream>
#include "vector.h"

using namespace std;

int main(int argc, char const *argv[]){
    Vector<int> vec;
    Vector<int> vec2(vec);
    Vector<int> vec3;
    vec3 = vec;

    
    return 0;
}