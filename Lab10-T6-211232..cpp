#include <iostream>

using namespace std;

int main() 
{
	int nums[10]; // array declaration
	//variables declaration
	int odd=0,even=0,positive=0,negative=0
	,zero=0,prime=0,composite=0,palendrome=0,check=0;
	cout<<"Please Enter Any Ten Numbers: "<<endl;
	for(int i=0;i<10;i++) //loop for inputs
	{
		cin>>nums[i];
	}
	for(int i=0;i<10;i++)  //identifiers loop
	{
		if(nums[i]%2==1) //statement for odd number
		odd++;
		if(nums[i]%2==0) //statement for even number
		even++;
		if(nums[i]>0) //statement for positve number
		positive ++;
		if(nums[i]<0) //statement for negative number 
		negative++;
		if(nums[i]==0) //statement for zeros number
		zero++; 
		// For prime number
		int j=1;
	while(j<=nums[i])
	{
		if(nums[i]%j==0)
		{
			check++;
		}
		j++;
	}

		if(check==2)
		prime++;
	    else
		composite++;
	check=0;
		
		//For  plaendrom
	int x,flip,y=10,store=0;  //variables and constants declaration
	
	x=nums[i]; //stores value of num into x, So that we can use it on end "If" call 
	do 
	{
		flip=nums[i]%y;  //stores the value of remaider into flip
		store=(store*10)+flip; //"store" will store the totall value at the end of loop
		nums[i]=nums[i]/y; //will tells about the number of repetition of loop
			
	}while(nums[i]!=0); //termination condition of loop
    if (store==x) //when value of x, which is actually num becomes = value in store, then palindrome.
    palendrome++;
    
	}
	
	cout<<"Number of odd numbers= "<<odd<<endl;
	cout<<"Number of even numbers= "<<even<<endl;
	cout<<"Number of positive numbers= "<<positive<<endl;
	cout<<"Number of negative numbers= "<<negative<<endl;
	cout<<"Number of zero numbers= "<<zero<<endl;
	cout<<"Number of prime numbers= "<<prime<<endl;
	cout<<"Number of composite numbers= "<<composite<<endl;
	cout<<"Number of palendrome numbers= "<<palendrome<<endl;
return 0;
}
