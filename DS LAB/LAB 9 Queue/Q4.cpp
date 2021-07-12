#include<iostream>
#define Size 100
using namespace std;
class Stack{
	int top;
	int data[Size];
	public:
		Stack(){
			top=-1;
		}
		bool isEmpty(){
			if(top<=-1){
				return true;
			}else{
				return false;
			}
		}
		bool isFull(){
			if(top>=Size-1){
				return true;
			}else{
				return false;
			}
		}
		int isPeek(){
			return data[top];
		}
		void push(int num){
			if(isFull()){
				cout<<"\nStack Overflow!!!!!!!!";
			}
			else{
				data[++top]=num;
			}
		}
		int Pop(){
			if(isEmpty()){ 
			cout<<"\nStack Empty!!!!";
			return -1;
			}
			else{
			return data[top--];
			}
		}
		void Enqueue(int num){
			Stack s;
			int tmp;
			while(!isEmpty()){
				tmp=Pop();
				s.push(tmp);	
			}
			push(num);
			while(!s.isEmpty()){
				tmp=s.Pop();
				push(tmp);
			}
		}
		int Dequeue(){
			int num;
			num=Pop();
			return num;
		}
	void Display(){
		for(int i=0;i<top;i++){
			cout<<" "<<data[i];
		}
	}	
};
int main(){
	Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    s.push(33); 
    s.push(65); 
    s.push(12);
    cout<<"\nBEFORE ENQUEUE OPERATION USE TO INSERT 89 :";
  //  s.Display();
    s.Enqueue(89);
    cout<<"\nAFTER ENQUEUE OPERATION USE TO INSERT 89 :";
    s.Display();
  //  s.Dequeue();
    //s.Dequeue();
   // cout<<"\nAFTER TWO TIMES OF CALLING DEQUEUE FUNCTION:";
//	s.Display();
//	return 0;
}
