#include <iostream>
using namespace std;

int main() 
          {
          	int number[7];
          	string name[7];
          	for(int i=0;i<=6;i++)
          	    {
          	    	cout<<"Please enter a name\n";
          	    	cin>>name[i];
          	    	cout<<"Please enter a mark\n";
          	    	cin>>number[i];
          	    }
          	    cout<<"Rejected names:\n";
          	     for(int i=0;i<=6;i++)
          	          {
          	          	if(number[i]<10)
          	          	  {
          	          	  	cout<<name[i]<<endl;
						  }
					  }
			    
return 0;
          }
