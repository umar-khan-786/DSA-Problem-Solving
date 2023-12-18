#include<iostream>
using namespace std;

/*
trun off kth bit: Given an integer n and positive k

input: n=20,k=3
output: 16

20 in binary---->000010100
16 in binary---->000010000

input: n=-20,k=3
output: -24

-20 in binary---->11111...10100
-24 in binary---->11111...10000
  
*/
int turnOffKthBit(int n,int k){
	int mask=1;
	int i=1;
	while(i<k){
		mask=(mask<<1);
		i++;
	}
	int ans=(n^mask);
	return ans; 
}
int main(){
	int n,k;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Enter  a kth Bit: ";
	cin>>k;
	cout<<"Answer is: "<<turnOffKthBit(n,k)<<endl;
}