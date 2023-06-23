#include <iostream>
using namespace std;


void print_actions(){
 int  getvar1(); int  getvar2(); int getvar3(); int  getvar4();	
 int  getorder();
 int order =   getorder();
 int  getprice(); 
 int order_switch(int z);
 int  getplmax();
 string s; s="";	 
cout<<"\n__________________________________________________\n";		 
int  getphase();
int phase = getphase();
switch(phase){ 
case 1: { cout<<"<A>ttack <B>ribe <D>iplomat <H>ire <Space>skip >>"; break; } 
case 2: { cout<<"Choose a land (press column):" ;	 break;  } 
case 3: { cout<<"Choose a land (press row):" ;	 break;  } 
case 4: { 
if (getvar3()==-2){s="warriors";}
if (getvar3()==-3){s="bribe";}
	 cout<<"Type "<<s<<" count and press <Enter>: >" ; break;  }
case 5: {  
	 string s2; s2="";
	 char l ='A'+getvar2();
if (getvar3()==-2){s="Attack";
int getowner(int a, int b); int o = getowner(getvar1(), getvar2());
int r=-1;
 int  getdiplom(int a, int b); 
 if (o>0 && o<  getplmax()){
  r = getdiplom(order-1, o-1); 
}
if (r==8){s2="neutral";}
}
if (getvar3()==-3){s="Bribe ";}
cout<<s<<" "<<s2<<" "<<l<<" "<<getvar1()+1<<" with  "<<getvar4()<<"\t Y/N? >" ; break; } 
case 6: {   cout<<"Done. Wait " ; break;  } 
case 7: {    int pr =  getprice();
cout<<"Warrior costs "<<pr<<". Type number and press <Enter>: >" ; break; } 
case 8: {  int f = getvar4()*getprice();
cout<<"Hire "<<getvar4()<<" warriors for "<<f<<"\t Y/N? >" ; break; } 
case 9: {   cout<<"Diplomacy: <1> offer neutral " ; break;  } 
case 10: {   cout<<"Type number to whom offer neutral " ; break;  } 
case 11: {   cout<<"Type price and press <Enter>: >" ; break;  }
case 12: {  int f = order_switch(getvar1()-1);
cout<<"Offer neutral to "<<f<<" for "<< getvar4()<<"\t Y/N? >" ; break;  }
case 13: {   cout<<"Hire: <1> warriors " ; break;  }  
case 50: {  int which_line_needs_to_answer(); 
int r = which_line_needs_to_answer(); 
if (r!=-1){
int order_switch(int z);
int z = order_switch(r);
cout<<z<<" ";
void print_info_line(int l);
 print_info_line(r);
cout<<"\t Y/N? >" ; 
}
break; 	  }
case 51: {   cout<<"Answers given. Wait " ; break;  } 
case 52: {   cout<<"Calculating. Wait " ; break;  } 
default: { cout<<"Err input" ;	 break;  }
}	
// cout<<"\n"; void print_action(); print_action();
// cout<<"\n"; int getbot(int a); for (int i; i<4; i++){cout<<getbot(i+1)<<"	";}
	 }	
