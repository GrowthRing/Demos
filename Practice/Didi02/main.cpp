#include <iostream>  
using namespace std;

int maxSubArray(int a[], int n)
{
	    int b = 0, sum = a[0];
	     for (int i = 0; i<n; i++)
		    {
		       if (b>0)
			         b += a[i];
		       else
			         b = a[i];
		       if (b>sum)
			          sum = b;
		     }
	    return sum;
	}
int maxSubMatrix(int array[][5], int n)
{
	          int i, j, k, max = 0, sum = -100000000;
	           int b[3];
	            for (i = 0; i<n; i++)
		           {
		                 for (k = 0; k<n; k++)//初始化b[]  
			                 {
			                       b[k] = 0;
			                 }
		               for (j = i; j<n; j++)//把第i行到第j行相加,对每一次相加求出最大值  
			                 {
			                       for (k = 0; k<n; k++)
				                        {
				                              b[k] += array[j][k];
				                       }
			                       max = maxSubArray(b, k);
			                        if (max>sum)
				                       {
				                              sum = max;
				                        }
			                  }
		           }
	           return sum;
	}
int main()
{
	    int n = 3;
		int array[3][5] = { { 1, 2, 0, 3, 4 }, { 2, 3, 4, 5, 1 }, { 1, 1 ,5 ,3, 0 } };
	
		    cout << "MaxSum: " << maxSubMatrix(array, n) << endl;
	
		 }
