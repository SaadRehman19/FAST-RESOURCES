#include<iostream>
using namespace std;
class Car
{
	private:
		int model_no;
		string color;
		string no_plate;
		public:
			void set_data();
			void display();
			Car(){
			}
			Car(Car &a);
			Car operator =(Car &a1);
	
};
