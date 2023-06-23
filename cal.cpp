void setphase(int d);
int  getplnumstart();
int getbot(int a);
int cal_lands(int d);
int  getpstate();
int  getorder();
void finfail();
void finwin();
int getrep(int a);

void cal(){
setphase(52);	 
	 	 
int  getpstate();
void cal1();
if (getpstate()==1){cal1();}		 
	 }	 

void cal1(){ 	 
int getplmax();	
int getaction(int a, int b);
for (int i= 0; i<getplmax(); i++){
int act=-99999; int t=-1; int t2=-1; int t3=-1;		
	for (int i2= 0; i2<getplmax(); i2++){		
	int p = getaction(i,i2);
	if (i2==0){act=p; }
	
if (act==5){ //offer neutral
if (i2==1){t=p; }
if (i2==4 && p==1) {void  setneutral(int a, int b);	setneutral(i+1,t);}
}

if (act==3){//bribe
if (i2==1){t=p; }
if (i2==2){t2=p; }
if (i2==4 && p==-1) {void setowner(int a, int b, int d); setowner(t,t2,i+1);}
}

if (act==2){//attack
void  setenemy(int a, int b);
void setsoldiers(int a, int b);
int getsoldiers(int a);
if (i2==1){t=p; }
if (i2==2){t2=p; }
if (i2==3){t3=p; }
if (i2==4 && p!=1){ // if attack meets No resistance
int getowner(int a, int b); int o = getowner(t, t2); 
if (o!=0 && o!=9){setenemy(i+1, o);} 		  
void setowner(int a, int b, int d); setowner(t,t2,i+1);
setsoldiers(i+1, getsoldiers(i+1)+t3);
	 			  }
if (i2==4 && p==1){// if attack meets Yes - fight back
int getowner(int a, int b); int o = getowner(t, t2); 
if (o!=0 && o!=9){setenemy(i+1, o);} 		  
setsoldiers(o, getsoldiers(o)+1); //owner gets back def 1 troop (1 more than attackers)		  
	 			  }	 			  
}	//attack end

									}
		 }

void calres();
calres();	 
	 }


void calres(){
int  getpriceland();
int getgold(int a);
void setgold(int a, int b);

 for(int i=0;i<getplnumstart();i++){
	 	if  ( getbot(i+1)!=-1){//if not dead
		int mylands=	cal_lands(i)*getpriceland();
setgold(i+1, getgold(i+1)+mylands);
							} 
	 	 }	

void calcheck();
calcheck();
	 }
	 
	 
void calcheck(){
void setdead(int a);

 for(int i=0;i<getplnumstart();i++){
if  ( getbot(i+1)!=-1){int mylands=	cal_lands(i);
if (mylands==0){setdead(i+1);}
} }	

 for(int i=0;i<getplnumstart();i++){
if  ( getbot(i+1)!=-1){int r=	getrep(i+1);
if (r<1){setdead(i+1);}
} }	

int ifonlymeisleft=1;
 for(int i=0;i<getplnumstart();i++){
if  ( getbot(i+1)!=-1){
if (i+1!=getorder()){ifonlymeisleft++;}	
} }	

if  (getpstate()==1 && ifonlymeisleft==1){finwin();}
if  (getpstate()==1 && getbot(getorder())==-1){finfail();} 	
 setphase(1); 	 
	 }	
	 
	 
int cal_lands(int d){//from 0
int z=0;	 
int w, h;
int  getwidth(); 
int  getheight();	 
 w = getwidth();
 h = getheight();	 	 
int getowner(int a, int b);
	 
 for(int j=0;j<h;j++)
    {
      for(int k=0;k<w;k++)
      {
int o = getowner(j, k); 
if (o==d+1){z++;}	   		  
}
}
return z;
}


void zero_lands(int d){//from 0	 
void setowner(int a, int b, int d);
int w, h;
int  getwidth(); 
int  getheight();	 
 w = getwidth();
 h = getheight();	 	 
int getowner(int a, int b);	 
 for(int j=0;j<h;j++)
    {
      for(int k=0;k<w;k++)
      {
int o = getowner(j, k); 
if (o==d+1){ setowner(j,k,0);}	   		  
}
}
}	  
