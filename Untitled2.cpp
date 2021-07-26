#include<iostream>

using namespace std;

 class COMPLEX
   {
   	  public: 
   	    int real, imag, a;
   	    
   	    void getData()
   	      {
   	      	 cout<<" Enter real number = ";
   	      	 cin>>real;
   	      	 
   	      	 cout<<" Enter imaginary number = ";
   	      	 cin>>imag;
			 
			 }
			 
		  void showData()
		    {
		       cout<<real<<"+"<<imag<<"i"<<endl;
			}
			
			void add(int a, COMPLEX c2)
			  {
			  	 real = a + c2.real;
			  	 imag = c2.imag;
			  	 
			  }
			  
			  void add(COMPLEX c1, COMPLEX c2)
			    {
			    	real = c1.real + c2.real;
			    	imag = c1.imag + c2.imag;
				}
   };
   
      int main()
        {
        	 COMPLEX c1,c2,c3;
        	 int a;
        	 
        	 cout<<" Enter first complex no = "<<endl;
        	 c1.getData();
        	 cout<<" \n a = ";
        	 cin>>a;
        	 
        	 cout<<" Enter second complex no = "<<endl;
        	 c2.getData();
        	 cout<<" First complex no = ";
        	 c1.showData();
        	 cout<<endl<<" Second complex no = ";
        	 c2.showData();
        	 
        	 c3.add(a,c2);
        	 cout<<" The sum is ";
        	 c3.showData();
        	 
        	 c3.add(c1,c2);
        	 cout<<" The sum is ";
        	 c3.showData();
        	 
        	 return 0;
		}
