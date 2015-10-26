#pragma once
#include<iostream>
#include<string>
#include<map>

using namespace std;

class Singleton
{
public:
	~Singleton();
	static Singleton *getInstance();
	static map<int, float> *taxlist;
private:
	static map<int, string> dictionary;
	int a = 0, b = 0, c = 0;
private:
	Singleton();
	static Singleton *m_pInstance;  // 非静态成员引用必须与对象绑定

};

