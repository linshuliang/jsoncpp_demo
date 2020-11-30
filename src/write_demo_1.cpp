#include <iostream>
#include <fstream>
#include "json/json.h"

void writeFileJson()
{
	// 根节点  
	Json::Value root;

	// 根节点属性  
	root["name"] = Json::Value("shuiyixin");
	root["age"] = Json::Value(21);
	root["sex"] = Json::Value("man");

	// 子节点  
	Json::Value friends;

	// 子节点属性  
	friends["friend_name"] = Json::Value("ZhaoWuxian");
	friends["friend_age"] = Json::Value(21);
	friends["friend_sex"] = Json::Value("man");

	// 子节点挂到根节点上  
	root["friends"] = Json::Value(friends);

	// 数组形式
	Json::Value hobby(Json::arrayValue);
	hobby.append("sing");
	hobby.append("run");
	hobby.append("Tai Chi");
	root["hobby"] = hobby;

	//直接输出  
	//cout << "FastWriter:" << endl;
	//Json::FastWriter fw;
	//cout << fw.write(root) << endl << endl;

	// 缩进输出  
	std::cout << "StyledWriter:" << std::endl;
	Json::StyledWriter sw;
	std::cout << sw.write(root) << std::endl << std::endl;

	// 输出到文件
	std::ofstream os;
	os.open("demo.json", std::ios::out | std::ios::trunc);
	if (!os.is_open())
		std::cout << "error：can not find or create the file which named \" demo.json\"." << std::endl;
	else
	{
		os << "[";
		for (int i = 0; i < 2; i++)
		{
			os << sw.write(root) << ",";
		}
		os << sw.write(root) << "]";
	}
	
	os.close();
}

int main()
{
	writeFileJson(); // 写入json

	system("pause");
	return 0;
}