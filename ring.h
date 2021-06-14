#pragma once
template<class T>
class ring
{
private:
	T* items;
	int index = 0;
	int len = 0;
public:
	ring(int len) : len(len)
	{
		items = new T[len];
	}
	virtual ~ring() { delete[] items; }

	void add(T val)
	{
		items[index] = val;

		index != len - 1 ? index++ : index = 0;
	}

	T &get(int index) const
	{
		return items[index];
	}

	int size()
	{
		return len;
	}
	class iterator;

	iterator begin()
	{
		return iterator(0, *this);
	}
	iterator end()
	{
		return iterator(len, *this);
	}
};
template<class T>
class ring<T>::iterator
{
	int pos;
	ring& curRing;
public:
	iterator(int pos, ring& curRing): pos(pos), curRing(curRing){}

	iterator& operator++()
	{
		pos++;
		return *this;
	}

	T& operator*()
	{
		return curRing.get(pos);
	}

	bool operator!=(const iterator& other) const
	{
		return pos != other.pos;
	}
};