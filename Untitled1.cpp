#include<iostream>

using namespace std;
 
  class Distance
    {
       private:
       	
       	   int feet, inch;
       	   
       	public:
       		
       		void getDist()
       		  {
       		  	 cout<<" Enter the value of feets and inches = ";
       		  	 cin>>feet>>inch;
			   }
			   
				  
			void showDist()
			   {
			   	  cout<<endl<<" Feets = "<<feet;
			   	  cout<<endl<<" Inches = "<<inch;
			   	 
			   }
			   
			Distance addDist(Distance D2)
			   {
			   	  feet = feet + D2.feet;
			   	  inch = inch + D2.inch;
			   	  Distance newDist;
			   	  newDist.feet = feet;
			   	  newDist.inch = inch;
			   	  
			   	  return newDist;
			   }
	};
	
	   int main()
	     {
	     	 Distance d1,d2,d3;
	     	 
	     	 cout<<" Enter Distance 1 = "<<endl;
	     	 d1.getDist();
	     	 
	     	 cout<<" Enter Distance 2 = "<<endl;
	     	 d2.getDist();
	     	 
	     	 cout<<endl<<" Distance 1 = ";
	     	 d1.showDist();
	     	 
	     	 cout<<endl<<" Distance 2 = ";
	     	 d2.showDist();
	     	 
	     	 d3 = d1.addDist(d2);
	     	 cout<<endl<<" Sum of both the distance = ";
	     	 d3.showDist();
	     	 
	     	 cout<<endl;
	     	 
	     	 return 0;
		 }
