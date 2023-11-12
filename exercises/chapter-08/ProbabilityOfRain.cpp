#ifndef PROBABILITYOFRAINDEF
#define PROBABILITYOFRAINDEF

#include <cassert>
#include <cmath>

template<unsigned int N> class ProbabilityOfRain
{
private:
    double mData[N];

public:
    double& operator[] (int index) // overloading the [] operator
    {
        // Assertion of the size
        assert(index < N);
        assert(index > -1);

        // Accessing an individual entry of the array
        double entry = mData[index];
        double entry_returned;
        assert(-pow(10, -6) <= entry < 1 + pow(10, -6));
        if (0 <= entry <= 1)
        {
            entry_returned = entry;
        }
        else if (-pow(10, -6) <= entry < 0)
        {
            entry_returned = 0;
        }
        else if (1 < entry < 1 + pow(10, -6))
        {
            entry_returned = 1;
        }
        return entry_returned;
    }
};

#endif
