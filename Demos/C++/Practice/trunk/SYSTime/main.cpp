#include<iostream>
//#include<ctime>
#include<time.h>
#include <windows.h> 

using namespace std;

int main()
{
	//time_t t = time(0);
	//char tmp[64];
	//tm timeinfo;
	//localtime_s(&timeinfo, &t);
	////strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A 本年第%j天 %z", &timeinfo);
	//strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A", &timeinfo);

	//puts(tmp);
	//cout << tmp;

	//time_t now;
	//now = time(NULL);
	//cout << now;
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	printf("%02d%02d%02d",   sys.wHour, sys.wMinute, sys.wSecond);
	//printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d/n", sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
		 
	system("time");
	system("pause");
}