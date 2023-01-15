#include <iostream>
#include <fstream> 
#include <string>
#include <direct.h>
#include <math.h>

using namespace std;

int main()
{
	long long i = 0, cnt = 2;
	const char* path = "F:\\";
	string content = "당신의 컴퓨터 살아 계시나요?";
	_mkdir(path);
	while (1) {
		i++;
		ofstream file;
		file.open(path + to_string(i) + ".txt", ios_base::out);
		while (pow(cnt, cnt)) {
			content = cnt+"0";
			cnt++;
			file << content;
		}
		file.close();
		cout << "File created: " + to_string(i) + "\r\n";
	}
}