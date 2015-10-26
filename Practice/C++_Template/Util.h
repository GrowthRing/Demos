#pragma 

template <class T>
class Util
{
public:
	Util()
	{

	}
	~Util(){

	}
	int getArraySize1(T &a)
	{
		return sizeof(a) / sizeof(a[0]);
	}
	
	int getArraySize2(){
		cout << "getArraySize2" << endl;
		return 0;

	}
	int getArraySize3(T a){

	}
};

