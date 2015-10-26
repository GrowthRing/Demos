#include <string>
#include <map>
using namespace std;
class Tool
{
protected:
	Tool();
public:
	static Tool* getInstance();
public:
	string getDescription(short id);
private:
	static map<short, string> dictionary;
private:
	static Tool* instance;
};