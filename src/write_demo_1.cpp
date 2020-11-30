#include <iostream>
#include <fstream>
#include "json/json.h"

void writeFileJson()
{
	// ���ڵ�  
	Json::Value root;

	// ���ڵ�����  
	root["name"] = Json::Value("shuiyixin");
	root["age"] = Json::Value(21);
	root["sex"] = Json::Value("man");

	// �ӽڵ�  
	Json::Value friends;

	// �ӽڵ�����  
	friends["friend_name"] = Json::Value("ZhaoWuxian");
	friends["friend_age"] = Json::Value(21);
	friends["friend_sex"] = Json::Value("man");

	// �ӽڵ�ҵ����ڵ���  
	root["friends"] = Json::Value(friends);

	// ������ʽ
	Json::Value hobby(Json::arrayValue);
	hobby.append("sing");
	hobby.append("run");
	hobby.append("Tai Chi");
	root["hobby"] = hobby;

	//ֱ�����  
	//cout << "FastWriter:" << endl;
	//Json::FastWriter fw;
	//cout << fw.write(root) << endl << endl;

	// �������  
	std::cout << "StyledWriter:" << std::endl;
	Json::StyledWriter sw;
	std::cout << sw.write(root) << std::endl << std::endl;

	// ������ļ�
	std::ofstream os;
	os.open("demo.json", std::ios::out | std::ios::trunc);
	if (!os.is_open())
		std::cout << "error��can not find or create the file which named \" demo.json\"." << std::endl;
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
	writeFileJson(); // д��json

	system("pause");
	return 0;
}