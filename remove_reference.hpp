#ifndef REMOVE_REFERENCE_HPP
#define REMOVE_REFERENCE_HPP

template <typename T>
struct remove_reference
{
    using type = T;
};

// Specialization for lvalue references
template <typename T>
struct remove_reference<T&>
{
    using type = T;
};

// Specialization for rvalue references
template <typename T>
struct remove_reference<T&&>
{
    using type = T;
};

// Helper
template <typename T>
using remove_reference_t = typename remove_reference<T>::type;

#endif // REMOVE_REFERENCE_HPP
