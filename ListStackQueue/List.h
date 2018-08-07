#pragma once
template<class T> class List
{
protected: 
	T * ts;// array of elements
	int count;
public:
	List();
	virtual ~List();
	virtual void insert(T t) = 0;
	virtual void eject() = 0;
};

template<class T>
inline List<T>::List()
{
	ts = NULL;
	count = 0;
}

template<class T>
inline List<T>::~List()
{
	if (ts != NULL) {
		delete[] ts;
		count = 0;
	}
}
