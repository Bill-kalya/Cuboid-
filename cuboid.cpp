#include<iostream>
using namespace std;

int main()
{
	double length,width,height;
	double volume,surfaceArea;
	
	cout<<"would you like to calculate volume or surface area of the selected polygon?";
	string option;
	cin>>option;
	
	if(option=="volume")
	{
		cout<<"enter the length:"<<endl;
		cin>>length;
		cout<<"enter the width:"<<endl;
		cin>>width;
	    cout<<"enter the height:";
		cin>>height;
		   
		volume=length*width*height;
		cout<<"volume is:"<<volume;
	}
	else if(option=="surfaceArea")
	{
	    cout<<"enter the length:"<<endl;
		cin>>length;
		cout<<"enter the width:"<<endl;
		cin>>width;
	    cout<<"enter the height:";
		cin>>height;
		
		surfaceArea=2*(height*width)+2*(length*width)+2*(length*height);
		cout<<"the surface area is:"<<surfaceArea;
	}
	
	return 0;
}
