#include <conio.h>
#include <cstdlib>
#include <iostream>
using namespace std;


int checkcell (int a, int b, int f){ //1 ok, -1 no
	int res=-1;
	int getowner(int a, int b);
	int mapnum = getowner(a,b);	 
	int order = f;	
	int  getwidth();
	int getheight();
	
int l = -1; if (b-1>-1){l=getowner(a,b-1);}
int r = -1; if (b+1<getwidth()){r=getowner(a,b+1);}
int u = -1; if (a-1>-1){u=getowner(a-1,b);}
int d = -1; if (a+1<getheight()){d=getowner(a+1,b);}
// cout<<"\n==a: "<<a<<" b:"<<b<<" 	"<<l<<" "<<r<<" "<<u<<" "<<d<<" ==\n";
if (l==order || r==order || u==order || d==order)
{res=1;}else
{res=-1;}

if (res==1 && mapnum!=order && mapnum!=9){res=1;}
else{res=-1;}

int getvar3();
if (getvar3()==-3){if (mapnum==0){res=-1;} }
	return res;
	}


void answf(int a){
void read_input_console();	 
int input_norun = 0;	 
int  getphase();
void setphase(int d);
void show();
void read_input_console();
	int  getorder();	 
	int order = getorder();	
void setvar1(int d);
int getvar1();	
void setvar2(int d);
int getvar2();	
void setvar3(int d);
int getvar3();
void setvar4(int d);
int getvar4();
int  getvar5();	
void setvar5(int d);
int getsoldiers(int a);	
void setsoldiers(int a, int b);
int getgold(int a);
void setgold(int a, int b);
int  getprice();
int  getplnumstart();
void setaction (int a, int b, int c);
int getaction(int a, int b);

if (getphase()==51){				
   					}


if (getphase()==50){ //check Y N for answers
 int which_line_needs_to_answer(); 
int r = which_line_needs_to_answer(); 
if (r==-1){setphase(51); void sendreply(); sendreply(); }
else{
if (a==89) {//
if (getaction(r,0)==5){ //offer neutral 
int dgold   = 	getaction(r,3);
if (dgold<=getgold(r+1) && getgold(order)+dgold >=0)				   
{ setaction(r,4,1); 
setgold(order,getgold(order)+dgold);
setgold(r+1,getgold(r+1)-dgold);
} else{ setaction(r,4,-1);  }
} 

if (getaction(r,0)==2){ //attack
int dgold   = 	getaction(r,3);
if (dgold<getsoldiers(order))				   
{setaction(r,4,1); 
setsoldiers(order,getsoldiers(order)-dgold-1);
} else{setaction(r,4,-1);}
}  

if (getaction(r,0)==3){ //bribe
int dgold   = 	getaction(r,3);
if (dgold<=getgold(order))				   
{setaction(r,4,1); 
setgold(order,getgold(order)-dgold);
} else{setaction(r,4,-1);}
}
	 		   
   		   }//
if (a==78)	{setaction(r,4,-1);	 }   					
   					}
r = which_line_needs_to_answer(); 
if (r==-1){setphase(51); void sendreply(); sendreply(); } 					
					   }


if (getphase()==12){ //check readiness to neutral
int f = -getvar3();
if (a==89) {setvar3(f); 				   					  
setphase(6);
setvar2(-99999); 
void setansw_str();
setansw_str();
} 
else{a=555;	}						   
   				   }


if (getphase()==11){ //set price for neutral
input_norun=1;
int warnum=-1;
string text; text="";
cin >> text; 
warnum = atoi(text.c_str()); //negative value means you want $ from another player
int getsoldiers(int a);
int condition;
condition=getgold(order);
if (warnum<=condition ){
setphase(12); 
setvar4 (warnum);
input_norun=0;			   			   
   			   }
			}


if (getphase()==10){ //offer neutral to whom
int  getdiplom(int a, int b);
int order_switch(int z);
int z =  order_switch(a-1);
int f = getdiplom(order-1, z-1);
if (z<=getplnumstart() && f ==9)
{
setvar3 (-5);     					   
setvar1(z);
setphase(11);
input_norun=1;
}
   				   }


if (getphase()==9){ //diplomacy in general
if (a==1) { 
setphase(10); 		  
} 
if (a!=1){a=555;	}						   
   				   }

if (getphase()==8){ //check readiness to hire

int f = -getvar3();
if (a==89) {setvar3(f); 
setgold(order, getgold(order)-getvar4()*getprice()); 
setsoldiers(order, getsoldiers(order)+getvar4()); 				   					  
setphase(6);
setvar1(-99999); 
setvar2(-99999); 
void setansw_str();
setansw_str();
} 
else{a=555;	}						   
   				   }


if (getphase()==7){ //get warriors hire num
input_norun=1;
int warnum=-1;
string text; text="";
cin >> text; 
warnum = atoi(text.c_str());
int condition;
condition=getgold(order);
if (warnum*getprice()<=condition && warnum>0){
setphase(8); 
setvar4 (warnum);
input_norun=0;			   			   
   			   }
			}


if (getphase()==13){ //hire in general
if (a==1) { 
if (getgold(order)>=getprice()){
setphase(7);
setvar3(-4);
input_norun=1;
   		 }		  
} 
if (a!=1){a=555;	}						   
   				   }


if (getphase()==6){ //wait
   				   }

if (getphase()==5){ //check readiness to attack
 int  getplmax();
int f = -getvar3();
if (a==89) {setvar3(f); 
if (getvar3()==2){
int warnum=getsoldiers(order)-getvar4 ();
setsoldiers(order,warnum);
int getowner(int a, int b); int o = getowner(getvar1(), getvar2());
int r=-1;
 int  getdiplom(int a, int b); 
 if (o>0 && o<  getplmax()){
  r = getdiplom(order-1, o-1); 
}
if (r==8){
int  getlieprice();
int getrep(int a);
void setrep(int a, int b);
setrep(order,  	getrep(order)-	  getlieprice());
   		  }
}
if (getvar3()==3){
setgold(order, getgold(order)-getvar4()); 				   
					  }
setphase(6);
void setansw_str();
setansw_str();
} 
else{a=555;	}						   
   				   }

if (getphase()==4){ //get warriors num
input_norun=1;
int warnum=-1;
string text; text="";
cin >> text; 
warnum = atoi(text.c_str());
int getsoldiers(int a);
int condition;
if (getvar3()==-2){condition=getsoldiers(order);}
if (getvar3()==-3){condition=getgold(order);}

if (warnum<=condition && warnum>0){
setphase(5); 
setvar4 (warnum);
input_norun=0;			   			   
   			   }
			}

if (getphase()==3){ //check attack row
int  getheight();
if (a<getheight()+1){   				   
setphase(4);
input_norun=1;
setvar1(a-1);
int checkcell (int a, int b, int f);
int res = checkcell(a-1, getvar2(), getorder());
if (res==-1){  a=555;}
}   		 
			}
	 
   		 
if (getphase()==2){ //check attack column
int  getwidth();
if (a<getwidth()+1){   				   
setphase(3);
setvar2(a-1);
}   		 
			} 


if (a==4 && getphase()==1){ //diplomacy
setphase(9); 
   		 }



if (a==8 && getphase()==1){// hire in choosing action mode
setphase(13);
}
			

if (a==1 && getphase()==1){ //if printed attack in choosing action mode
setphase(2); 
setvar3(-2);  		 
   		 }
   		
		    
if (a==2 && getphase()==1){ //if bribe in choosing action mode
setphase(2); 
setvar3(-3);  		 
   		 }   		 
   		 

if (a==444 && getphase()==1){ //space to skip (do nothing)
setvar3(1); 
setvar1(-99999); 
setvar2(-99999); 
setvar4(-99999); 
setphase(6);
void setansw_str();
setansw_str(); 					 
   				   }			

int  getvar3();
if (a==555 && getvar3()<1){ //backpace to undo
void nullloc();
nullloc();
 setphase(1);  					 
   				   }						  		 

show();

if (input_norun==0){
read_input_console(); 
}
else{
answf(0);	 
	 }
	 	 
	 } //answf end
