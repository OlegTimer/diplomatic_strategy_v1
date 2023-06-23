#define PLMAX 8
int  getplmax(){return PLMAX;}

int diplom[PLMAX+1][PLMAX+1];


int  getdiplom(int a, int b){return diplom[a][b];} //from 0


void  setdiplom(int a, int b, int d){
if (a!=b) {a--;b--; diplom[a][b]=d; diplom[b][a]=d; }
	  }
	  
	  
void  setneutral(int a, int b){
setdiplom(a,b,8);
	  }
	  	  

void  setenemy(int a, int b){
setdiplom(a,b,9);
	  }


void  setally(int a, int b){
setdiplom(a,b,7);
	  }
	  
	  
void  setzerodip(int a, int b){
setdiplom(a,b,0);
	  }	  
	  
	  
void zerodiplom(){
for (int i=0;i<	 PLMAX+1; i++){
	for (int i2=0;i2<	 PLMAX+1; i2++){
diplom[i][i2]	=0;	
	}
	}
	 }
