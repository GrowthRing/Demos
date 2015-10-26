

#include<stdio.h>
#include <algorithm>
#include<math.h>
using namespace std;

struct xy
{
	double x;
	double y;
};

// �Ƚ�
bool compare(struct xy a, struct xy b)
{

	if (a.x > b.x)return true;
	else if (a.x == b.x)
	{
		if (a.y > b.y)return true;
		else return false;
	}
	else return false;
}



/* �����������ĺ��� */
static inline double get_dist(const struct xy *p1, const struct xy *p2)
{
	double dx = p1->x - p2->x;
	double dy = p1->y - p2->y;
	return sqrt(dx * dx + dy * dy);
}

void get_closest(const struct xy points[], unsigned int n, unsigned int result[2])
{
	/* �����ﲹ�����, ע�⣬Ҫ��result[0] < result[1] */

	struct xy *arr = new struct xy[n];
	for (int i = 0; i<n; i++)
	{
		arr[i] = points[i];

	}
	sort(arr, arr + n, compare);

	int pos = 0;
	int pos_ = 0;

	double d = 99999999.0;
	//for (int i = 0; i < n - 1; i++)
	//{
	//	double temp = 0;
	//	temp = get_dist(&arr[i], &arr[i + 1]);
	//	if (temp<d)
	//	{
	//		d = temp;
	//		pos = i;
	//	}
	//}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1; j < n-1; j++)
		{
			double temp = 0;
			temp = get_dist(&arr[i], &arr[j]);
			if (temp < d)
			{
				d = temp;
				pos = i;
				pos_ = j;
			}
		}

	}
	result[0] = pos;
	result[1] = pos_;

	//int rt1 = -1;
	//int rt2 = -1;
	//for (int i = 0; i<n; i++)
	//{
	//	if ((points[i].x == arr[pos].x && points[i].y == arr[pos].y) || (points[i].x == arr[pos + 1].x&&points[i].y == arr[pos + 1].y))
	//	{
	//		if (rt1 == -1)  rt1 = i;
	//		else
	//		{
	//			rt2 = i;
	//			break;
	//		}

	//	}
	//}


	//result[0] = rt1;
	//result[1] = rt2;
}

int main(void)
{
	unsigned int result[2];
	struct xy *points;
	unsigned int n;
	unsigned int i;

	scanf("%u\n", &n);
	points = (struct xy *)malloc(n * sizeof (struct xy));

	for (i = 0; i < n; i++)
		scanf("%lf %lf\n", &points[i].x, &points[i].y);

	get_closest(points, n, result);

	printf("Closest points: %u, %u\n", result[0], result[1]);

	return 0;
}
