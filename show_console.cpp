#include <iostream>
using namespace std;

void show_console(){
int w, h;
int  getwidth(); 
int  getheight();	 
 w = getwidth();
 h = getheight();	 
	 
int getowner(int a, int b);
int  getorder();	 
int order = getorder();	 
int getplmax();
int getdiplom(int a, int b);
int plmax = getplmax();
int th=h; if (plmax>h){th=plmax;}
int fh;
int fw;	 
char letter;
char separ = ' '; 

cout<<separ<<separ<<separ;
for(letter='A'; letter < 'A'+w; letter++) {cout<<separ << letter;} 
cout<<separ<<separ<<separ<<separ<<separ<<separ;
for (int r = 0; r<plmax; r++){cout<<r+1<<separ;}
cout<<"\n\n";
	 
	 for (int i2 = 0; i2<th; i2++){
for (int i = 0; i<w; i++){
if (i==0){cout<<i2+1<<separ<<separ<<separ;}	
int mapnum = getowner(i2,i);
if (mapnum==order){mapnum=1;}
else{
if (mapnum==1){mapnum=order;}
}

if (mapnum!=9) {
   			   if (mapnum!=666){cout<<mapnum<<separ;}
			   else{cout<<" "<<separ;
			   }
}
else{
	 cout<<"~"<<separ;
	 }
	 
if (i==w-1){cout<<separ<<separ<<i2+1<<separ<<separ;}
	}
	for (int t=0;t<	 plmax; t++){
fh=i2; 
fw=t;		
if (i2==0){fh=order-1;}	
if (i2==order-1){fh=0;}	
if (t==0){fw=order-1;}
if (t==order-1){fw=0;}		
if (t==i2||getdiplom(fh,fw)==0){cout<<" ";}else{
if (getdiplom(fh,fw)==9) {cout<<"w";}
if (getdiplom(fh,fw)==8) {cout<<"n";}
if (getdiplom(fh,fw)==7) {cout<<"f";}
}
cout<<separ;
	}	
	cout<<"\n\n";
}
cout<<separ<<separ<<separ;
for(letter='A'; letter < 'A'+w; letter++) {cout<<separ << letter;} 
cout<<"\n__________________________________________________\n";		 
	 }
