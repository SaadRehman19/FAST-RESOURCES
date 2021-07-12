#include<iostream>
#include <string.h>
#include<cstdlib>
using namespace std;
class DSA
{
	protected:
		
	int *data;
	int size;
	int nsize;
	int loc;
	int temp;
	int a;
	public:
	void ReSize(int ns);
	void get();
	void set();		
		DSA(){};
};
class ODSA : public DSA
{
	public:
	ODSA(){};	
	ODSA(int n);
	
	void insertion();
	
	void searching();
		
		
};
class UDSA:public DSA
{
	public:
		UDSA(){};
		UDSA(int n);
		
	void insertion1();	
	void searching1();
	
};


