#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
int main()
{
	fstream outfile;
	outfile.open("1.txt",ios::out);
	if (!outfile)
	{
		cout<<"�ļ���ʧ�ܣ�"<<endl;
		abort();
	}
	outfile<<"aaaaaaaaaaaaaa"<<endl;
	outfile<<"bbbbbbbbbbbbbb"<<endl;
	outfile.close();
	
	system("pause");
	return 0;
}

