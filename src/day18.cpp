//day 18: memory and linked limits
#include <iostream>
using namespace std;

void foo(int *x)
{
	*x = 5; //DEREFERENCED!!!!!
}

/*int main()
{
	int *changeMe = 2;
	cout << *changeMe << endl;
	foo(changeMe);
	cout << *changeMe << endl;
}
*/
//see output picture for memory management.


//second version

void bar(int & x) //& is "reference parameter"
{
	x = 25;
}
int main()
{
	int changeMe = 2;
	cout << changeMe << endl;
	foo(&changeMe); //& is "address-of" in arguments
	cout << changeMe << endl;
}

