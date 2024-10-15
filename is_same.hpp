#ifndef IS_SAME_HPP
#define IS_SAME_HPP

// Types are not the same
template <typename T, typename U>
struct is_same
{
    static constexpr bool value = false;
};

// Types are the same (Specialization)
template <typename T>
struct is_same<T, T>
{
    static constexpr bool value = true;
};

#endif // IS_SAME_HPP