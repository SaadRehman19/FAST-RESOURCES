//Write a program that uses a stack to print the prime factors of a positive integer in descending
order.
#include<iostream>
using namespace std;
#define Size 1000
template<class T>
class Stack{
	int top;
	T data[Size];
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
		T isPeek(){
			return data[top];
		}
		void push(T num){
			if(isFull()){
				cout<<"\nStack Overflow!!!!!!!!";
			}
			else{
				data[++top]=num;
							}
		}
		T Pop(){
			if(isEmpty()){ 
			cout<<"\nStack Empty!!!!";
			 return -1;
			}
			else{
			return data[top--];
			}
		}
		void FindPrime(int num){
			int flag;
			for(int i=2;i<num;i++){
				if((num%i)==0){
					flag=1;
				   
				   for(int j=2;j<=i/2;j++){
				   	if((i%j)==0){
				   	flag=0;
				   break;
				   }
				   }
				   if(flag==1){
				   	push(i);
				   	
				   }
				}
				
			}
		}
};
int main(){
	Stack<int > s;
	int num;
	cout<<"ENTER THE POSITIVE INTEGER WHOSE PRIME FACTORS YOU WANT TO FIND:";
	cin>>num;
	s.FindPrime(num);
	cout<<"\nTHE PRIME FACTORS OF "<<num<<" ARE:";
	while(!s.isEmpty()){
		cout<<s.Pop()<<" ";
	}
}
