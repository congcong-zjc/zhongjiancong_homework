/*
 *�ļ�����Show_arr
 *��  ������ʾ����������
 *��  �ߣ��ӽ���
 *ʱ  �䣺2020-6-18
 *��  Ȩ��Copyright (c) 2020 Zhong Jiancong
 */

 #include <iostream>
 #include <assert.h>
 #include <ctime>
 #include "Show_arr.hpp"
 #include "Arr_length.hpp"

 void Show_arr(int arr[]/*I*/,int ARR_LENGTH/*I*/)
 {
    assert(ARR_LENGTH > 0);     //ʹ�ö��ԣ����鳤�ȴ���0
    assert(NULL != arr);        //ʹ�ö��ԣ������׵�ַ��Ϊ��
    int iloopOfarr = 0;
	for (iloopOfarr; iloopOfarr < ARR_LENGTH; ++iloopOfarr)
    {
		cout<<arr[iloopOfarr]<<'\t';
	}
 }
