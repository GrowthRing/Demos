#include <map>
#include <string>
#include "Tool.h"

using namespace std;


map<short, string> Tool::dictionary;//定义map对象
Tool* Tool::instance = 0;//对.h中的静态参量进行赋值
Tool::Tool()
{
	//使用pair向map中填充<key,value>值对
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
	//必须使用<short,string>进行指定模板参数，才能使用后续的second
	std::map<short, string>::iterator it = dictionary.find(id);
	return (*it).second;
}