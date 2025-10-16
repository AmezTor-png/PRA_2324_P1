#include <ostream>
#include "List.h"

using namespace std;

template <typename T> 
class ListArray : public List<T>
{

    private:
        T* arr;
        int max;
        int n;
        static const int MINSIZE;

        void resize(int new_size)
        {
            if(new_size < MINSIZE)
            {
                new_size = MINSIZE;
            }
            
            T* new_arr = new T[new_size];

            for(int i = 0; i < new_size; i++)    /*inicializar las nuevas casillas del nuevo array a nullptr ya que es una calse OO*/
            {
                new_arr[i] = nullptr;
            }
            
            for(int i = 0; i < n; i++)    /*sobreescribir en nullptr la información de array anterior*/
            {
                new_arr[i] = arr[i];
            }
        
            delete[] arr;

            arr = new_arr;
            max = new_size;
        }

    public:
        ListArray()
        {
            arr = new T[MINSIZE];
            max = MINSIZE;
            n = 0;
        }

        ~ListArray()
        {
            delete[] arr;
        }

        void insert(int pos, T e)
		{
			if(pos < 0 || pos > size())
			{
				throw out_of_range("Posición fuera del rango valido.");
			}

            if(n == max)    /*añade una casilla para la nueva información*/
            {
                resize(max + 1);
            }

            if(arr[pos] != nullptr)    /*está ocupada*/
            {
                    for(int i = max - 1; i > pos; i--)    /*mueve todos los valores a la derecha*/
                    {
                        arr[i] = arr[i- 1];
                    }
            }
            
            arr[pos] = e;
            n++;
		}

		void append(T e)
		{
			if(n == max)    /*añade una casilla para la nueva información*/
            {
                resize(max + 1);
                arr[max - 1] = e;
                n++;
            }
            else
            {
                for(int i = max - 1; i >= 0 ; i--)    /*busca empezando desde atrás el último sitio en la fila*/
                {
                    if(arr[i] == nullptr && arr[i - 1] != nullptr) 
                    {
                        arr[i] = e;
                        n++;
                    }
                    else    /*es un array vacío y e va en la primera posición*/
                    {
                        arr[0] = e;
                        n++;
                    }
                }
            }
		}

		void prepend(T e)
		{
			if(n == max)    /*añade una casilla para la nueva información*/
            {
                resize(max + 1);
            }
            
            if(arr[0] == nullptr)    /*la casilla 0 está libre*/
            {
                arr[0] = e;
                n++;
            }
            else
            {
                for(int i = max - 1; i > 0; i--)    /*mueve todos los valores a la derecha*/
                {
                    arr[i] = arr[i- 1];
                }
            
                arr[0] = e;
                n++;
            }
		}

		T remove(int pos)
		{
			
		}

		T get(int pos)
		{
			
		}

		int search(T e)
		{
			
		}

		bool empty()
		{
			if(n == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
		}

		int size()
		{
			return n;
		}

        T operator[](int pos)
        {
            
        }

        friend ostream& operator<<(ostream &out, const ListArray<T> &list)
        {
            
        }
};
