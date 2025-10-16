#include <ostream>
#include "List.h"

using namespace std;

template <typename T> 
class ListArray : public List<T> {

    private:
        T* arr;
        int max;
        int n;
        static const int MINSIZE;

    public:
        ListArray()
        {
            
        }
    
};
