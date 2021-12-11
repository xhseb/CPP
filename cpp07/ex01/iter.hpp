#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *addr, size_t len, void(*fnp)(T const &))
{
    for (size_t i = 0; i < len; i++)
        fnp(addr[i]);
}

template <typename T>
void print_ele(T ele)
{
    std::cout << ele << std::endl;
}

#endif