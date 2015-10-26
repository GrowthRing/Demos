#include "Singleton.h"

#include<iostream>
#include<math.h>
using namespace std;
Singleton* Singleton::m_pInstance = NULL;  // 定义并初始化静态数据成员
map<int, float> * Singleton::taxlist;
Singleton::Singleton()
{
	//taxlist->insert(map<int, float>::value_type(2, 0.1));
	dictionary.insert(pair<int, string>(1, "value"));

}


Singleton::~Singleton()
{
}

Singleton * Singleton::getInstance(){
	if (m_pInstance == NULL)
		m_pInstance = new Singleton();
	return m_pInstance;
}
