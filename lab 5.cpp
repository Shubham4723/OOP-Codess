#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class Book
{
	char author[100];
	char title[100];
	char publisher[100];
	double price;
	int numcopies;
	
	public:
		 Book()
		  {
		  	char author = {'ABC'};
		  	char title = {'XYZ'};
		  	char publisher = {'PQR'};
		    price = 100;
		    numcopies = 50;
		  	
		  }
		  
		  int access_title(char a[])
		   {
		   	 if(strcmp(title,a))
		   	    return 0;
		   	    
		   	 else
		   	    return 1;
		   }
		   
		   void getdata(int num)
		     {
		     	if(numcopies>=num)
		     	  cout<<" Cost of "<<num<<" Books is Rs "<<(price*num);
		     	  
		     	else
		     	   cout<<" \n Sorry! These many copies are unavailable ";
		}
		
		 void input()
		  {
		  	 cout<<"\n Title: ";
		  	 gets(title);
		  	 
		  	 cout<<endl<<" Author: ";
		  	 gets(author);
		  	 
		  	 cout<<endl<<" Publisher: ";
		  	 gets(publisher);
		  	 
		  	 cout<<endl<<" Price: ";
		  	 cin>>price;
		  	 
		  	 cout<<endl<<" No of copies: ";
		  	 cin>>numcopies;
		  }
  };
  
  
  int main()
    {
    	
    	Book obj[2];
    	
    	int n;
    	
    	char title2[100];
    	cout<<" Enter details of the books: "<<endl;
    	for(int i=0;i<2;i++)
    	 {
    	 	obj[i].input();
    	 	
		 }
		 
		 cout<<endl;
		 
		 cout<<" Enter title of book required: "<<endl;
		 gets(title2);
		 
		 for(int i=0;i<2;i++)
		  {
		  	 if(obj[i].access_title(title2))
		  	 { 
		  	    cout<<" How many copies required: ";
		  	    cin>>n;
		  	    obj[i].getdata(n);
			   }
			   
			else
			  cout<<endl<<"Book unavailable ";
		  }
		  
		  return 0;
	}


