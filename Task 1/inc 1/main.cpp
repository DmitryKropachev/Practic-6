#include <iostream>
#include "road.h"
int main() {
	using namespace std;
	cout<<"Test v6.03: OK.\n";
	Road road;
	cout<<"Before Road width: "<<road.Width<<endl;
	road.Width=3;
	cout<<"Road width= "<<road.Width<<endl;
	return 0;
}
