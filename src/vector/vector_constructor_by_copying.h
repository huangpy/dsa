/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T>
Vector<T>::Vector(T const* arr, Rank lo, Rank hi) {
	_elem = new T[_capacity = 2 * (hi - li)];
	_size = 0;
	while (lo < hi) {
		_elem[_size++] = arr[lo++];
	}
}