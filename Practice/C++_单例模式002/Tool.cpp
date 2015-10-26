#include <map>
#include <string>
#include "Tool.h"

using namespace std;


map<short, string> Tool::dictionary;//����map����
Tool* Tool::instance = 0;//��.h�еľ�̬�������и�ֵ
Tool::Tool()
{
	//ʹ��pair��map�����<key,value>ֵ��
	dictionary.insert(pair<short, string>(1, "value"));

}
Tool* Tool::getInstance(){
	if (0 == instance)
	{
		instance = new Tool;
	}
	return instance;
}
string Tool::getDescription(short id){
	//����ʹ��<short,string>����ָ��ģ�����������ʹ�ú�����second
	std::map<short, string>::iterator it = dictionary.find(id);
	return (*it).second;
}