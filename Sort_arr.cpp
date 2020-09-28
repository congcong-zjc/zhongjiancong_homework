/*
 *�ļ�����Sort_arr
 *��  �����������������,����
 *��  �ߣ��ӽ���
 *ʱ  �䣺2020-6-18
 *��  Ȩ��Copyright (c) 2020 Zhong Jiancong
 */

 #include <assert.h>
 #include <ctime>
 #include "Generate_arr.hpp"
 #include "Arr_length.hpp"

 void Sort_arr(int arr[]/*IO*/,int ARR_LENGTH/*I*/)
 {
    assert(ARR_LENGTH > 0);     //ʹ�ö��ԣ����鳤�ȴ���0
    assert(NULL != arr);        //ʹ�ö��ԣ������׵�ַ��Ϊ��
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
