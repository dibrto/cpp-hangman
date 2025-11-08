#pragma once

#include <iostream>

using std::cout;
using std::endl;

template<typename T> class Vector {
    public:
        Vector(int cap = 100);
        ~Vector();
        Vector(const Vector& other);
        Vector& operator=(const Vector& other);

        int getSize() const;
        bool empty() const;
        T& at(int index);
        // void push_back(const T& value);
        // void pop_back();
           
    private:
        T* data;
        int size;
        int capacity;
        // void resize();
};

template <typename T> Vector<T>::Vector(int cap)
    : data(new T[100])
    , size(0)
    , capacity(cap) {}

template <typename T> Vector<T>::~Vector() {
    delete[] data; 
}

template <typename T> Vector<T>::Vector(const Vector &other)
    : capacity(other.capacity)
    , size(other.size)
    , data(new T[capacity])
{
    for (int i = 0; i < size; i++){
        data[i] = other.data[i];
    }
}

template <typename T> Vector<T> &Vector<T>::operator=(const Vector<T> &other){
    if (this == &other){
        return *this;
    }

    delete[] data;

    capacity = other.capacity;
    size = other.size;
    data = new T[capacity];

    for (int i = 0; i < size; i++){
        data[i] = other.data[i];
    }

    return *this;
}

template <typename T> int Vector<T>::getSize() const {
    return size;
}

template <typename T> bool Vector<T>::empty() const {
    return size == 0;
}

template <typename T> T &Vector<T>::at(int index){
    if (empty()){
       throw std::out_of_range("Index out of range");
    }

    return data[index];
}
