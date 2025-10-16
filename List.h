#ifndef LIST_H
#define LIST_H

using namespace std;

class List
{
	public:
		void insert(int pos, T e)
		{
			if(pos < 0 || pos > size())
			{
				throw out_of_range("Posicion fuera del rango valido.");
			}
			else
			{
				ListArray.arr[pos] = e;
			}
		}

		void append(T e)
		{
			
		}

		void prepend(T e)
		{
			
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
			
		}

		int size()
		{
			return n;
		}
};
