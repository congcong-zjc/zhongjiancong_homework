/*
 *文件名：Show_arr
 *描  述：显示：输出随机数
 *作  者：钟健聪
 *时  间：2020-6-18
 *版  权：Copyright (c) 2020 Zhong Jiancong
 */

 #include <iostream>
 #include <assert.h>
 #include <ctime>
 #include "Show_arr.hpp"
 #include "Arr_length.hpp"

 void Show_arr(int arr[]/*I*/,int ARR_LENGTH/*I*/)
 {
    assert(ARR_LENGTH > 0);     //使用断言，数组长度大于0
    assert(NULL != arr);        //使用断言，数组首地址不为空
    int iloopOfarr = 0;
	for (iloopOfarr; iloopOfarr < ARR_LENGTH; ++iloopOfarr)
    {
		cout<<arr[iloopOfarr]<<'\t';
	}
 }
