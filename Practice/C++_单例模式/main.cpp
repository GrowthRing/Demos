#include<iostream>
#include<math.h>
using namespace std;

// �ο����ͣ�http://www.cnblogs.com/cxjchen/p/3148582.html
//          http://www.jellythink.com/archives/82
// ��ش�����Ҫ����!!!  http://www.cnblogs.com/loveis715/archive/2012/07/18/2598409.html  
// http://blog.csdn.net/zhangfulin_hwatop/article/details/7686471
// http://blog.cnbang.net/tech/2229/

// ���̰߳�ȫ����ģʽ(ʹ��ͬ������) 
// һ����ס��һ�������� ��������е�� ���Ľ�����ֻ��ס���е�new����OK��������ν�ġ�˫���������ơ� 
class CSingleton{  
private:
	CSingleton(){

	}
	static CSingleton *m_pInstance;  // �Ǿ�̬��Ա���ñ���������
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


// ���̰߳�ȫ����ģʽʵ����(ʹ��˫��ͬ����) 
// m_pInstance �Ƿ�Ϊ�����������жϣ���Ϊ�÷�������һ�ξͲ����˶���pInstance == NULL �󲿷�����¶�Ϊfalse���������ԭ���ķ�����ÿ�λ�ȡʵ������Ҫ������Ч��̫�͡����Ľ��ķ���ֻ��Ҫ�ڵ�һ�� ���õ�ʱ��������ɴ�����Ч�ʡ�

class CSingleton_{
private:
	CSingleton_(){

	}
	static CSingleton_ *m_pInstance;  // �Ǿ�̬��Ա���ñ���������
public:
	~CSingleton_(){

	}

	static CSingleton_ *getInstance(){
		if (m_pInstance == NULL)
		{
			//lock();  // C++û��ֱ�ӵ�Lock��������ʹ���������Lock������Boost���˴���Ϊ��˵��
			if (m_pInstance == NULL)
				m_pInstance = new CSingleton_();
			// unlock()
			return m_pInstance;
		}
	}

public:
	int a = 0, b = 0, c = 0;
};

// ��Ϊ��̬��ʼ���ڳ���ʼʱ��Ҳ���ǽ���������֮ǰ�������߳��Ե��̷߳�ʽ����˳�ʼ�������Ծ�̬��ʼ��ʵ����֤���̰߳�ȫ�ԡ�������Ҫ��Ƚϸ�ʱ���Ϳ���ʹ�����ַ�ʽ���Ӷ�����Ƶ���ļ����ͽ�����ɵ���Դ�˷ѡ�
// �ڲ���̬ʵ��������ģʽ
// �����Զ�����
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




CSingleton* CSingleton::m_pInstance = NULL;  // ���岢��ʼ����̬���ݳ�Ա

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