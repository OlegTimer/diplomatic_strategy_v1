int  getplnumstart();

void ai_action(int f){
	 int getbot(int a);
	 void ai_think(int a);
 for(int i=0;i<getplnumstart();i++){
	 	if  ( getbot(i+1)==1){//if bot
			if (f==1)	{ai_think(i);			}
							} //
	 	 }			
			}


void ai_think(int a){
void setaction (int a, int b, int c);

 int  getdiplom(int a, int b); 
 int  getorder();
int r = getdiplom(getorder()-1, a); 
 if(r==9){setaction(a,0,5);setaction(a,1,getorder());setaction(a,3,3);}else{setaction(a,0,1);}
   		  
// setaction(a,0,1); //skip
// setaction(a,0,5); setaction(a,1,1); setaction(a,3,0); //offer neutr to 1 for $
// setaction(a,0,2); setaction(a,1,0); setaction(a,2,2);  setaction(a,3,1); //attack C1 w 1
// setaction(a,0,3); setaction(a,1,0); setaction(a,2,2);  setaction(a,3,4); //bribe C1 w 4
// setaction(a,0,4); setaction(a,3,2); //hire 2 warriors   		  
	   }
	   
void ai_answ(){
void setaction (int a, int b, int c);
int getaction(int a, int b);
int  getpstate();
int getowner(int a, int b);

if (getpstate()==1){//local
 for(int i=0;i<getplnumstart();i++)		{
if (getaction(i, 0)==2 || getaction(i, 0)==3){ 	//if attacked or bribe	 
int o = getowner(getaction(i, 1), getaction(i, 2));		 
if (getaction(i, 4)==-99999 && o!=0)		{
setaction(i,4,-1); //no   
				   		  					} 				 	 
	 									 }

if (getaction(i, 0)==5){ //if diplom and no answered yet
if (getaction(i, 4)==-99999 )		{
setaction(i,4,-1); //no   
				   		  					}   				 
					}

}
        }//
	 }	   
