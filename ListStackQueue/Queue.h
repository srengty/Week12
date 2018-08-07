#pragma once
#include "List.h"
template<class T> class Queue :
	public List<T>
{
public:
	Queue();
	virtual ~Queue();
	virtual void insert(T t);
	virtual void eject();
};

