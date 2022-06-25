// file_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main()
{
    std::cout << "Hello World!\n"; 

	//std::ofstream ofs;
	//ofs.open("write.text",std::ios::out | std::ios::app);
	//ofs << " my name is wayne" << std::endl;
	//// 需要注意的是，如果先运行了一次，再运行另一次则之前写入 txt 中的内容会被覆盖
	//// 如果想之前运行执行输出的内容不被下一次运行覆盖，则使用 ios::app格式
	////ofs << " wayne is the best" << std::endl;// 
 //   ofs.close();

	std::ifstream ifs;
	ifs.open("write.text",std::ios::in);
	std::string buf;
	while (getline(ifs, buf))
	{
		//std::cout << buf << std::endl;

		/*std::stringstream str(buf);
		std::string str1, str2, str3, str4;
		str >> str1 >> str2 >> str3 >> str4;
		std::cout << str1 << " " << str2 << " " << str3 << " " << str4 << " " << std::endl;*/

		
		std::string str1, str2, str3, str4;
		// 爆错的是原因是 buf 是一个 std::string类型的数据，而输入输出运算符的数据类型是一个 IO 类型
		//buf >> str1 >> str2 >> str3 >> str4;
		std::cout << str1 << " " << str2 << " " << str3 << " " << str4 << " " << std::endl;

	}


}
