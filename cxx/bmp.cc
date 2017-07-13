#include <fstream>
#include <iostream>

using namespace std;

struct BMP {
	BMP(ifstream &fin)
	{
	}
};

int main(int argc, char *argv[])
{
	ifstream fin(argv[1]);
}
