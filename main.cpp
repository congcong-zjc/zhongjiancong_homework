/****************************************************
    *�ļ�����main.cpp
    *�����ˣ��ӽ���
    *��  �ڣ�2020-6-18
    *��  ��������������10��100���ڵ������������ʾ
    *ѧ  Ժ����������ѧԺ
    *ѧ  �ţ�21903144
    *��  ����1.4.0
    *Copyright (c) 2020 Zhong Jiancong

    ��1��100�������������
    ��2������10��100���ڵ������
    ��3�����������
    ��4����ʾ
    ****************************************************/


#include "Generate_arr.hpp"
#include "Sort_arr.hpp"
#include "Show_arr.hpp"
#include "Arr_length.hpp"

using namespace std;

int main()
{
	assert( ARR_LENGTH == 10);  //ʹ�ö��Լ�������Ԫ�ظ���arr_length�Ƿ�Ϊ10
	int arr[ARR_LENGTH];        //����һ������Ϊarr_length������

	Generate_arr(arr , ARR_LENGTH);          //����10��100���ڵ������

	cout<<"����ǰ�����Ϊ��"<<endl;
	Show_arr(arr , ARR_LENGTH);          //��ʾ����ǰ�����
	Sort_arr(arr , ARR_LENGTH);          //���������������
    cout<<endl;

    cout<<"����������Ϊ��"<<endl;
    Show_arr(arr , ARR_LENGTH);          //��ʾ����������
    cout<<endl;

	system("pause");            //ʹ������ڱ��ֿ�������������˳�

	return 0;
}
