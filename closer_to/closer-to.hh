#pragma once
class CloserTo
{
    public:
        CloserTo(int x) : x_(x)
        {}
        bool operator()(int& a, int& b)
        {
            int y = x_ - a;
            int z = x_ - b;
            if (y < 0)
                y *= -1;
            if (z < 0)
                z *= -1;
            return y < z;
        }
    private:
        int x_;
};
