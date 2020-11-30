#include <iostream>
#include <fstream>
#include "json/json.h"
using std::string;
using std::cout;
using std::endl;

void readFileJson()
{
	Json::Reader reader;
	Json::Value root;

	//从文件中读取，保证当前文件有demo.json文件  
	std::ifstream in("demo.json", std::ifstream::binary);

	if (!in.is_open())
	{
		std::cout << "Error opening file\n";
		return;
	}

	if (reader.parse(in, root, false))
	{
		for (int rs = 0; rs < root.size(); rs++)
		{
			// 读取根节点信息  
			string name = root[rs]["name"].asString();
			int age = root[rs]["age"].asInt();
			string sex = root[rs]["sex"].asString();

			std::cout << "My name is " << name << std::endl;
			std::cout << "I'm " << age << " years old" << std::endl;
			std::cout << "I'm a " << sex << std::endl;

			// 读取子节点信息  
			string friend_name = root[rs]["friends"]["friend_name"].asString();
			int friend_age = root[rs]["friends"]["friend_age"].asInt();
			string friend_sex = root[rs]["friends"]["friend_sex"].asString();

			std::cout << "My friend's name is " << friend_name << std::endl;
			std::cout << "My friend's sex is " << friend_sex << std::endl;
			std::cout << "My friend is " << friend_age << " years old" << std::endl;

			// 读取数组信息 
			std::cout << "Here's my hobby:" << std::endl;
			for (unsigned int i = 0; i < root[rs]["hobby"].size(); i++)
			{
				string ach = root[rs]["hobby"][i].asString();
				std::cout << ach << '\t';
			}
			std::cout << std::endl << std::endl;
		}
	}
	else
	{
		std::cout << "parse error\n" << std::endl;
	}

	in.close();
}

int main()
{
	readFileJson(); // 写入json

	system("pause");
	return 0;
}