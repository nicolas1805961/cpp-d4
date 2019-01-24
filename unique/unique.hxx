#include <vector>
template<typename T>
bool unique(std::vector<T> vec)
{
    for (long unsigned int i = 0; i < vec.size() - 1; i++)
    {
        for (long unsigned int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
                return false;
        }
    }
    return true;
}
