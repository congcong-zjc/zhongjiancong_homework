/****************************************************
    *文件名：main.cpp
    *创建人：钟健聪
    *日  期：2020-6-18
    *描  述：编程随机生成10个100以内的随机数排序并显示
    *学  院：汽车工程学院
    *学  号：21903144
    *版  本：1.4.0
    *Copyright (c) 2020 Zhong Jiancong

    （1）100以内随机数生成
    （2）生成10个100以内的随机数
    （3）随机数排序
    （4）显示
    ****************************************************/


#include "Generate_arr.hpp"
#include "Sort_arr.hpp"
#include "Show_arr.hpp"
#include "Arr_length.hpp"

using namespace std;

int main()
{
	assert( ARR_LENGTH == 10);  //使用断言检验数组元素个数arr_length是否为10
	int arr[ARR_LENGTH];        //创建一个长度为arr_length的数组

	Generate_arr(arr , ARR_LENGTH);          //生成10个100以内的随机数

	cout<<"排序前随机数为："<<endl;
	Show_arr(arr , ARR_LENGTH);          //显示排序前随机数
	Sort_arr(arr , ARR_LENGTH);          //对随机数进行排序
    cout<<endl;

    cout<<"排序后随机数为："<<endl;
    Show_arr(arr , ARR_LENGTH);          //显示排序后随机数
    cout<<endl;

	system("pause");            //使输出窗口保持开启，按任意键退出

	return 0;
}
