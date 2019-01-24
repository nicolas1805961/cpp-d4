#include <vector>
template<typename T>
bool palindrome(std::vector<T> vec)
{
    typename std::vector<T>::reverse_iterator it1 = vec.rbegin();
    typename std::vector<T>::iterator it2 = vec.begin();
    if (vec.empty())
        return true;
    while (it1 - vec.rbegin() < vec.end() - 1 - it2)
    {
        if (*it1 != *it2)
            return false;
        it1++;
        it2++;
    }
    return true;
}
