#ifndef ENABLE_IF_HPP
#define ENABLE_IF_HPP

template <bool B, typename T = void>
struct enable_if
{
};

// Specialization
template <typename T>
struct enable_if <true, T>
{
    using type = T;
};

#endif //ENABLE_IF_HPP