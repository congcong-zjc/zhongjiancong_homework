/*
 *文件名：Sort_arr
 *描  述：对数组进行排序,升序
 *作  者：钟健聪
 *时  间：2020-6-18
 *版  权：Copyright (c) 2020 Zhong Jiancong
 */

 #include <assert.h>
 #include <ctime>
 #include "Generate_arr.hpp"
 #include "Arr_length.hpp"

 void Sort_arr(int arr[]/*IO*/,int ARR_LENGTH/*I*/)
 {
    assert(ARR_LENGTH > 0);     //使用断言，数组长度大于0
    assert(NULL != arr);        //使用断言，数组首地址不为空
    int temp;
    int iloopOfarr = 0;
    int jloopOfarr = 0;
    for (iloopOfarr=0; iloopOfarr<ARR_LENGTH-1; ++iloopOfarr)
    {
        assert(iloopOfarr >= 0 && iloopOfarr < ARR_LENGTH-1);
        for (jloopOfarr=0; jloopOfarr<ARR_LENGTH-1-iloopOfarr; ++jloopOfarr)
        {
            assert(jloopOfarr >= 0 && jloopOfarr < ARR_LENGTH-1-iloopOfarr);
            if (arr[jloopOfarr] > arr[jloopOfarr+1])
            {
                temp = arr[jloopOfarr];
                arr[jloopOfarr] = arr[jloopOfarr+1];
                arr[jloopOfarr+1]= temp;
            }
        }
    }
 }
