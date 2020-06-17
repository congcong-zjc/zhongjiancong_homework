/*
 *文件名：Generate_arr.cpp
 *描  述：生成10个100以内的随机数
 *作  者：钟健聪
 *时  间：2020-6-18
 *版  权：Copyright (c) 2020 Zhong Jiancong
 */

#include <ctime>
#include <cstdlib>
#include <assert.h>
#include "Generate_arr.hpp"
#include "Arr_length.hpp"

 void Generate_arr(int arr[]/*O*/,int ARR_LENGTH/*I*/)
 {
     assert(ARR_LENGTH > 0);     //使用断言，数组长度大于0
     assert(NULL != arr);        //使用断言，数组首地址不为空
     srand((unsigned)time(NULL));//为rand()函数生成不同的随机种子
     int iloopOfarr = 0;
     for(iloopOfarr; iloopOfarr < ARR_LENGTH; ++iloopOfarr)
    {
        assert(iloopOfarr >= 0 && iloopOfarr < ARR_LENGTH);//确保数组不越界
        arr[iloopOfarr] = rand() % 100;   //生成10个随机数并存入数组中
    }
 }
