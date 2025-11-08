#pragma once

template<typename T> class Vector {
    public:
        Vector(int cap = 100);
        ~Vector();
        Vector(const Vector& other);
        Vector& operator=(const Vector& other);

        // void push_back(const T& value);
        // void pop_back();
        // T& at(int index);
        // int size() const;
           
    private:
        T* data;
        int lastElem;
        int capacity;
        // void resize();
};

template <typename T> Vector<T>::Vector(int cap)
    : data(new T[100])
    , lastElem(0)
    , capacity(cap) {}

template <typename T> Vector<T>::~Vector() { delete[] data; }

template <typename T> Vector<T>::Vector(const Vector &other)
    : capacity(other.capacity)
    , lastElem(other.lastElem)
    , data(new T[capacity])
{
    for (int i = 0; i < lastElem; i++){
        data[i] = other.data[i];
    }
}

template <typename T> Vector<T> &Vector<T>::operator=(const Vector<T> &other){
    if (this == &other){
        return *this;
    }

    delete[] data;

    capacity = other.capacity;
    lastElem = other.lastElem;
    data = new T[capacity];

    for (int i = 0; i < lastElem; i++){
        data[i] = other.data[i];
    }

    return *this;
}
