#ifndef MVECTOR_H
#define MVECTOR_H

#include <cstdint>
#include <initializer_list>
#include "iterator.h"
#include "pair.h"

template<typename T>
class Mvector {
    using b_iterator = Iterator<T>;
    using r_iterator = RIterator<T>;
    using c_iterator = Iterator<const T>;
private:
    T *arr_ = nullptr;
    size_t size_ = 0;
    size_t capacity_ = 0;

public:
    Mvector();

    explicit Mvector(size_t n);

    Mvector(Mvector<T> const &tmp_);

    Mvector(std::initializer_list<T> list_);

    ~Mvector();

    /*Mvector<T> &operator=(Mvector<T> &tmp_);*/



    T &operator[](size_t n_) const;

    // Add something

    template<typename ... Args>
    void emplace(c_iterator pos, Args &&... args);

    template<typename ... Args>
    void emplace_back(Args &&... args);

    void insert(c_iterator pos_, T const &tmp_);

    void insert(c_iterator pos_, T &&tmp_);

    void push_back(T tmp_);

    // Delete

    void assign(size_t n, T tmp_);

    void assign(c_iterator beg, c_iterator end);

    void clear();

    void erase(Mvector<T>::b_iterator tmp);

    void erase(Mvector<T>::b_iterator beg, Mvector<T>::b_iterator end);

    void pop_back();

    // links

    T &front();

    T &back();

    T &at(size_t pos_);

    T *data();

    // sizes

    size_t capacity();

    size_t size();

    size_t max_size();

    void resize(size_t size_, T tmp_ = T());

    void reserve(size_t size_);

    bool empty();

    // swap
    void swap(Mvector<T> &toSwap);

    // Iterators
    b_iterator begin();

    b_iterator end();

    r_iterator rbegin();

    r_iterator rend();

    c_iterator cbegin() const;

    c_iterator cend() const;


};


#endif
