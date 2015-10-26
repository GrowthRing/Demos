#include<iostream>
#include<map>
#include<string>



using namespace std;

/*
	1)STL中map中数据是按照<key，value>进行存储的
	2)map中的元素对是按照key进行自动升序排列的,包括int、char、string类型的key
	3)map中不包含重复的key
	4)count(key)取值为0或1，表示包含与否
	5)find(key):在STL中的容器，有泛型算法find(begin,end,target)查找目标，map还提供了一个成员方法find(key)

*/

struct STest
{
	int a;
	bool b;
	char d;
	short c;
	union{
		char e[200];
		struct
		{
			long f;
			int g[40];
		}h;
	}i;
	int(*j)(int v, char *r);
};




#define f(x) x*x



int fun(int a)
{
	a ^= (1 << 5) - 1;
	return a;
};


int func(long x)
{
	int countx = 0;
	while (x)
	{
		countx++;
		x = x&(x - 1);
	}
	return countx;
}


class Myclass
{
public:
	Myclass(int i = 0)
	{
		cout << i;
	}
	Myclass(const Myclass &x)
	{
		cout << 2;
	}
	Myclass &operator =(const Myclass &x)
	{
		cout << 3;
		return *this;
	}
	~Myclass()
	{
		cout << 4;
	}
};

struct Data
{
	char a;
	int b;
	//int64_t c;
	char d;
};
Data data[2][4];


int main()
{
	//map<int, char> map01;
	//// insert插入数据
	//map01.insert(pair<int, char>(1, 'a'));
	//map01.insert(map<int, char>::value_type(3, 'c'));
	//map01.insert(pair<int,char>(2,'b'));
	//map01.insert(pair<int, char>(4, 'd'));
	//map01.insert(pair<int, char>(5, 'e'));
	//map01.insert(pair<int, char>(7, 'g'));
	//map01.insert(pair<int, char>(6, 'f'));
	//map01.insert(pair<int, char>(8, 'f'));
	//map01.insert(pair<int, char>(8, 'f'));
	//map01.insert(pair<int, char>(8, 'f'));

	//int n = map01.count(8);
	//cout << n << endl;
	//map<int, char>::iterator mapit;
	//for (mapit = map01.begin(); mapit != map01.end(); mapit++)
	//{
	//	cout << mapit->first << "\t" << mapit->second << endl;

	//}
	//// erase删除数据
	//map01.erase(6);
	//cout << "-------------------------" << endl;
	//for (mapit = map01.begin(); mapit != map01.end(); mapit++)
	//{
	//	cout << mapit->first << "\t" << mapit->second << endl;

	//}

	//map02.insert(pair<char, string>('a', "aa"));
	//map02.insert(map<char, string>::value_type('c', "aa"));
	//map02.insert(pair<char, string>('b', "aa"));
	//map02.insert(pair<char, string>('d', "aa"));
	//map02.insert(pair<char, string>('e', "aa"));
	//map02.insert(pair<char, string>('g', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('f', "aa"));
	//map02.insert(pair<char, string>('h', "aa"));
	//int n = map02.count('f');
	//cout << n << endl;
	//map<char, string>::iterator mapit;
	//for (mapit = map02.begin(); mapit != map02.end(); mapit++)
	//{
	//	cout << mapit->first << "\t" << mapit->second << endl;

	//}


	//map<string, string> map03;

	//map03.insert(pair<string, string>("aa", "aa"));
	//map03.insert(map<string, string>::value_type("c", "aa"));
	//map03.insert(pair<string, string>("sb", "aa"));
	//map03.insert(pair<string, string>("ad", "aa"));
	//map03.insert(pair<string, string>("ae", "aa"));
	//map03.insert(pair<string, string>("fg", "aa"));
	//map03.insert(pair<string, string>("fsa", "aa"));
	//map03.insert(pair<string, string>("jf", "aa"));
	//map03.insert(pair<string, string>("hi", "aa"));
	//map03.insert(pair<string, string>("sb", "bb"));
	//map03.insert(pair<string, string>("sb", "cc"));
	//map03.insert(pair<string, string>("sb", "dd"));
	//map03.insert(pair<string, string>("sb", "ffaa"));
	
	//cout << map03["sb"] << endl;
	//int m = map03.count("sb");
	//cout << m << endl;
	//map<string, string>::iterator mapit;
	//for (mapit = map03.begin(); mapit != map03.end(); mapit++)
	//{
	//	cout << mapit->first << "\t" << mapit->second << endl;

	//}

	


	//int i = 0, a = 1, b = 2, c = 3;
	//i = ++a || ++b || ++c;
	//cout << i << " - ";
	//cout << a << " - ";
	//cout << b << " - ";
	//cout << c << " - ";




	//int a = 6, b = 2, c;
	//c = f(a) / f(b);
	//cout << c << " - ";


	//char dog[] = "wang\0miao";
	//cout << sizeof(dog);
	//cout << strlen(dog);


	//int a[5] = {1,2,3,4,5};

	//int *ptr = (int *)(&a + 1);
	//cout << *(a + 1) << endl;
	//cout << *(ptr-1);


//cout << sizeof(struct STest);


//for (int i = 0; i < 2; i++)
//{
//	fork();
//	printf("-\n");
//}


//cout << fun(21);



//cout << func(65530);


	
//Myclass obj1(1);
//Myclass obj2(2);
//Myclass obj3 = obj1;
	


//cout << sizeof(struct Data);


//int arr[2], b;
//b = arr * 10;




//int *a[10] = { 0 };
//int (*b)[10] = { 0 };
//
//
//cout << a[1] << endl;
//cout << b[1];



int a[4] = { 1, 2, 3, 4 };
int *ptr = (int *)(&a + 1);
cout << *(ptr - 1);

system("pause");
	return 0;
}