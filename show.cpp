#include <iostream>
using namespace std;

void show(){ 
void show_upbar();
show_upbar();	 	 	 	 
void show_console(); 
show_console();
void print_info();
print_info();
void print_actions();
print_actions(); 
		 }
	 

void show_upbar(){
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	 
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
	 
int  getorder();	 
int order = getorder();	
int getrep(int a);
int rep = 	getrep(order);
string repstr = "Reputation";
int getgold(int a); 
int gold = getgold(order);
string goldstr = "Gold";
int getsoldiers(int a); 
int soldiers = getsoldiers(order);
string soldiersstr = "Warriors";
cout<<repstr<<":"<<rep<<"	"<<goldstr<<":"<<gold<<"	"<<soldiersstr<<":"<<soldiers;
cout<<"\n__________________________________________________\n";		 
	 }
	 
	 
int order_switch(int z){
int  getorder();	
z++;
if (z==getorder()){z=1;}else{
if (z==1){z=getorder();}	}	
	return z;
	}	 
	 

void print_info(){	 	 
int getplmax();	
int  getorder();
int getaction(int a, int b);
void print_info_line(int l);
int order_switch(int z);

for (int i= 0; i<getplmax(); i++){		
int z= order_switch(i);
if (getaction(z-1,0)!=-99999){cout<<"\n"<<i+1<<" ";}
print_info_line(z-1);	
	}  
	 }	 	 


void print_info_line(int l){
int getaction(int a, int b);
int  getorder();
int getplmax();
int  getprice();
int  getphase();
int tp=0;
int act=-99999;

	for (int i2= 0; i2<getplmax(); i2++){			
	int p = getaction(l,i2);
if (p==-99999){cout<<"";}
else{ //  					    					      					   

if (i2==0){
act=p;   		   
if (p==1){cout<<"skips";}
if (p==2){cout<<"attacks";}  
if (p==3){cout<<"bribes";}
if (p==4){cout<<"hires";} 
if (p==5){cout<<"offers neutral to ";}       		   
}
 
if (i2==1){
int f = order_switch(p-1);   		   
if (act==5){cout<<f<<" for ";}   		   
tp = p+1;  		   
}

if (i2==2){
char letter;
letter= 'A'+p;
cout << letter <<" "<<tp;   		   
}

if (i2==3){
if (act==2 || act==3)  {cout<<   "with ";}
cout<<" ";		   
cout << p;
if (act==4)  {cout<<" warriors for "<<p*getprice();}   		   
}

if (act==2 || act==3 || act==5){
if (i2==4 ) {
if (p==-1){cout<<"\t-N\t";} else {cout<<"\t-Y\t";}   		  
			  			 	   }
}

if (act==2 || act==3 ){			  			 	   
if (i2==5 ) {
if (p==-1){cout<<"!W";} else {cout<<"!F";}   		  
			  			 	   }
							   }								  			   
	 } //
	 cout<<" ";	
	 }
	 }
 
