#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int x;
	char y;
	do
	{
		cout<<"Please enter first number";
		cin>>a;
		cout<<"Please enter second number";
		cin>>b;
		cout<<"Please enter your choice\n1: Add\2: Subtraction\n3: sinof valueOne\4: cos of valueTwo\n5: for the Square Rootof valueOne\6; To check the larger number\n7: For the multiplication";
		cin>>y;
		  switch(x)
		  {
		  	case 1:
		  	cout<<a+b;
		  	break;
			case 2:
		  	cout<<a-b;
		  	break;
		  	case 3:
		  	cout<<" sina";
		  	break;
		  	case 4:
		  	cout<<" cos(b)";
		  	break;
		  	case 5:
		  	cout<<" square()";
		  	break;
		  	case 6:
		  	cout<<" larger number";
		  	break;
		  	case 7:
		  	cout<<" multiplication";
		  	break;
		  	default:
		  	      cout<<"invaled statement";
		  	    break;
		  }
		  cout<<"Press y to continue anyother key to exist";
		  cin>>y;
	      }
		  while("char==y");
		  return 0;
}
