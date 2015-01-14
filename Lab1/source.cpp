#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[]) {


	ifstream ifs (argv[1], ifstream::in);
	ofstream ofs ("out.txt");
	string s;
	int tot = 0;
	string str;
	int tmp;
	while(!ifs.eof()){
		ifs >> tmp;
		tot += tmp;
		ofs << tmp << " \t" << tmp*tmp << "\t" << tot << endl;

	}

	ifs.close();

	return 0;
}