#include"strm_func.h"

using namespace std;

void clr_strm(istream& in){
		if(in.fail()) in.clear();
		in.ignore(numeric_limits<streamsize>::max(),'\n');
}

int read_int(const char* message) {
	int key = 1;
	int c;
	while (key) {
		key = 0;
		cout << message;
		cin >> c;
		if (cin.fail()) {
			cout << "Try again" << endl;
			clr_strm(cin);
			key = 1;
		}
	}
	return c;
}
