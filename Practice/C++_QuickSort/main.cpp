#include<iostream>
#include<vector>
using namespace std;


// ������˼�롿
//  1. ���ȴ�������ѡȡһ������Ϊ��׼��
//  2. Ȼ�������е����ݽ��з������Ȼ�׼����ķ������ĺ��棬�Ȼ�׼��С�ķ�������ǰ��
//  3. ���Ŷ�ǰ����������ֱ�ʹ�õڶ����ķ������з�����ֱ����������ֻ��һ����Ϊֹ

// 
// �����岽�衿
//  1. ���ȶ�������ָ��i��j���ֱ�ָ�����е���β
//  2. Ȼ��ȡ����һ������Ϊ��׼������ָ��j��ָ������ݽ��бȽϣ����Ȼ�׼������j��ǰŲ��һλ�����Ȼ�׼��С����j��ָ�����ݷ���i��λ��
//  3. ����i��ǰŲ��һλ������׼����i��ָ�����ݽ��бȽϣ����Ȼ�׼��С����i����ƶ�һλ�����Ȼ�׼������i��ָ�����ݷ���j��ָ��λ�ã�j����ǰ�ƶ�һλ��ȡ�������׼���Ƚϣ������ظ���ֱ��i+1=jΪֹ����ʱ�����ݷ�Ϊ����������
//  4. ֮�󣬽��ֿ���ǰ�������������ν���ǰ��Ĳ�����ֱ��ÿ������ֻ��һ����Ϊֹ
// 
// ��֪ʶ�㡿 
//  O(N*logN)
//  ���ȶ�����
//  ��������ÿ�ν������������Ϊ�������֣�������״���£�ÿһ�ζ������������黮�ֳɵȳ��������֣�����Ҫlog2n�λ��֡�
//  ���������£��������Ѿ������������������£�ÿ�λ���ֻ�ܼ���һ��Ԫ�أ��������򽫲����˻�Ϊð���������Կ�������ʱ�临�Ӷ��½�ΪO(nlogn)������ΪO(n ^ 2)��
//  ��ʵ��Ӧ���У����������ƽ��ʱ�临�Ӷ�ΪO(nlogn)��
//  ���������ڶ����еĲ���������ֻ�軨�ѳ������Ŀռ䡣�ռ临�Ӷ�S(1)��
//  ����Ҫע��ݹ�ջ����Ҫ��������logn���n�Ŀռ�
// 




// ��������
void QucikSort(vector<int> &arr, int low, int high)
{

	if (low < high)
	{
		int left = low;
		int right = high;
		int key = arr[left];
		while (left < right)
		{

			while (left < right && arr[right] >= key)
				right--;
			arr[left] = arr[right];

			while (left < right &&  arr[left] < key)
				left++;
			arr[right] = arr[left];
		
		}
		arr[left] = key;

		QucikSort(arr, low, left - 1);
		QucikSort(arr, left + 1, high);


	}
	else{
		int p = 0;
	}

}


int main()
{
	vector<int>  arr = { 48, 62, 35, 77, 55, 14, 35, 98 };
	vector<int> mV = { 2, 4, 5, 11, 22, 3, 7, 8, 30 };



	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	QucikSort(mV, 0, mV.size() - 1);

	for (int i = 0; i < mV.size(); i++)
	{
		cout << mV[i] << "  ";
	}






	//cout << "HelloWorld!" << endl;
	//char *c1 = "0123456789";
	//char c2[] = "0123456789";
	//cout << "char *c1 = 0123456789--> \t sizeof(c1) \t" << sizeof(c1)  << endl;  // 4
	//cout << "char *c1 = 0123456789--> \t strlen(c1) \t" << strlen(c1) << endl;  // ��Ϊ������'\0'��β ���Ա���
	//cout << "char *c1 = 0123456789--> \t sizeof(*c1) \t" << sizeof(*c1) << endl;  // 1  ��Ϊ��*cc1  = '0'
	//cout << "char c2[] = 0123456789--> \t sizeof(c2) \t" << sizeof(c2) << endl;  // 11
	//cout << "char c2[] = 0123456789--> \t strlen(c2) \t" << strlen(c2) << endl;  // 10
	system("pause");
	return 0;
}