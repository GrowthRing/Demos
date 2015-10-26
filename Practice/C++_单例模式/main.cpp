#include<iostream>
#include<math.h>
using namespace std;

// 参考博客：http://www.cnblogs.com/cxjchen/p/3148582.html
//          http://www.jellythink.com/archives/82
// 这回答尼玛要命啊!!!  http://www.cnblogs.com/loveis715/archive/2012/07/18/2598409.html  
// http://blog.csdn.net/zhangfulin_hwatop/article/details/7686471
// http://blog.cnbang.net/tech/2229/

// 多线程安全单例模式(使用同步方法) 
// 一次锁住了一个方法， 这个粒度有点大 ，改进就是只锁住其中的new语句就OK。就是所谓的“双重锁”机制。 
class CSingleton{  
private:
	CSingleton(){

	}
	static CSingleton *m_pInstance;  // 非静态成员引用必须与对象绑定
public:
	~CSingleton(){

	}

	static CSingleton *getInstance(){
		if (m_pInstance == NULL)
			m_pInstance = new CSingleton();
		return m_pInstance;
	}

public:
	int a=0, b=0, c=0;
};


// 多线程安全单例模式实例三(使用双重同步锁) 
// m_pInstance 是否为空做了两次判断，因为该方法调用一次就产生了对象，pInstance == NULL 大部分情况下都为false，如果按照原来的方法，每次获取实例都需要加锁，效率太低。而改进的方法只需要在第一次 调用的时候加锁，可大大提高效率。

class CSingleton_{
private:
	CSingleton_(){

	}
	static CSingleton_ *m_pInstance;  // 非静态成员引用必须与对象绑定
public:
	~CSingleton_(){

	}

	static CSingleton_ *getInstance(){
		if (m_pInstance == NULL)
		{
			//lock();  // C++没有直接的Lock操作，请使用其它库的Lock，比如Boost，此处仅为了说明
			if (m_pInstance == NULL)
				m_pInstance = new CSingleton_();
			// unlock()
			return m_pInstance;
		}
	}

public:
	int a = 0, b = 0, c = 0;
};

// 因为静态初始化在程序开始时，也就是进入主函数之前，由主线程以单线程方式完成了初始化，所以静态初始化实例保证了线程安全性。在性能要求比较高时，就可以使用这种方式，从而避免频繁的加锁和解锁造成的资源浪费。
// 内部静态实例的懒汉模式
// 可以自动销毁
class CSingleton_1{
private:
	CSingleton_1(){

	}
public:
	~CSingleton_1(){

	}

	static CSingleton_1 *getInstance(){
		static CSingleton_1 m_pInstance;
		return &m_pInstance;
	}

public:
	int a = 0, b = 0, c = 0;
};




CSingleton* CSingleton::m_pInstance = NULL;  // 定义并初始化静态数据成员

int main()
{
	
	//CSingleton *p1 = CSingleton::getInstance();
	//p1->a = 1;
	//p1->b = 2;
	//p1->c = 3;

	//CSingleton *p2 = CSingleton::getInstance();
	//CSingleton *p3 = CSingleton::getInstance();

	//p3->a = 1000;
	//CSingleton *p4 = CSingleton::getInstance();

	//delete(p4);

	CSingleton_1 *p5 = CSingleton_1::getInstance();
	p5->a = 1;
	p5->b = 2;
	p5->c = 3;

	CSingleton_1 *p6 = CSingleton_1::getInstance();
	CSingleton_1 *p7 = CSingleton_1::getInstance();

	p7->a = 1000;
	CSingleton_1 *p8 = CSingleton_1::getInstance();


	unsigned int a = 6;
	int b = -20;
	a + b > 6? cout<< ">6":cout<<"<=6";
	//unsigned int c = a + b;
	cout << endl;

	cout << pow(2,32);
	return 0;
}