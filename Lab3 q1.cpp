#include<iostream>

using namespace std;

 class FRACTION
   {
   	   private:
   	   	 int numerator = 1, denominator = 1;
   	   	 
   	   public:
   	   	 
   	   	 FRACTION()
   	   	  {}
   	   	  
   	   	  FRACTION(int num, int den)
   	   	    {
   	   	    	numerator = num;
   	   	    	
   	   	    	if(den==0)
   	   	    	  cout<<" Denominator can never be zero ";
   	   	    	
   	   	    	else
   	   	    	  denominator = den;
   	   	    	
		  }
		  
		  FRACTION sum(FRACTION f2)
		     {
		     	int num = numerator * f2.denominator + f2.numerator * denominator;
		     	int den = denominator * f2.denominator;
		     	
		     	return FRACTION(num, den);
		     	
			 }
			 
		  FRACTION subtract(FRACTION &f)
		     {
		     	int num = numerator * f.denominator - f.denominator * numerator;
		     	int den = denominator * f.denominator;
		     	return FRACTION(num/gcd(num,den), den/gcd(num,den));
		     	
			 }
			 
			 
		  FRACTION product(FRACTION *f)
		     {
		     	int num = numerator * (f->numerator);
		     	int den = denominator * (f->denominator);
		     	return FRACTION(num/gcd(num,den), den/gcd(num,den));
		     	
			 }
			 
			 
		  int gcd(int num, int den)
		    {
		    	int remainder;
		    	  while(den!=0)
		    	   {
		    	   	 remainder = num % den;
		    	   	 num = den;
		    	   	 den = remainder;
		    	   	 
				   }
				   
				   return num;
			}
			
		  void show()
		     {
		     	 if(denominator==1)
		     	   cout<<numerator<<endl;
		     	   
		     	else
		     	   cout<<numerator<<"/"<<denominator<<endl;
		     	   
		}
    };
    
          int main()
           {
           	  int x = 4, y = 7, z = 3;
           	  
           	  FRACTION a(x,y);
           	  FRACTION b(z,x);
           	  FRACTION c;
           	  
           	  c = a.sum(b);
           	  c.show();
           	  
           	  c = a.subtract(b);
           	  c.show();
           	  
           	  c = a.product(&b);
           	  c.show();
           	  
           	  return 0;
           	  
		   }
			 
			
			
			 
