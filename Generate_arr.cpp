/*
 *�ļ�����Generate_arr.cpp
 *��  ��������10��100���ڵ������
 *��  �ߣ��ӽ���
 *ʱ  �䣺2020-6-18
 *��  Ȩ��Copyright (c) 2020 Zhong Jiancong
 */

#include <ctime>
#include <cstdlib>
#include <assert.h>
#include "Generate_arr.hpp"
#include "Arr_length.hpp"

 void Generate_arr(int arr[]/*O*/,int ARR_LENGTH/*I*/)
 {
     assert(ARR_LENGTH > 0);     //ʹ�ö��ԣ����鳤�ȴ���0
     assert(NULL != arr);        //ʹ�ö��ԣ������׵�ַ��Ϊ��
     srand((unsigned)time(NULL));//Ϊrand()�������ɲ�ͬ���������
     int iloopOfarr = 0;
     for(iloopOfarr; iloopOfarr < ARR_LENGTH; ++iloopOfarr)
    {
        assert(iloopOfarr >= 0 && iloopOfarr < ARR_LENGTH);//ȷ�����鲻Խ��
        arr[iloopOfarr] = rand() % 100;   //����10�������������������
    }
 }
