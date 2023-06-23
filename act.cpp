#include <iostream>
#include <sstream> 
#include <vector> 
#include <string> 
using namespace std;

vector <vector<int> >  action;
int getplmax();	

void clear_action(){
action.clear();	 
for (int i= 0; i<getplmax(); i++){
	 vector<int> v1;
	for (int i2= 0; i2<getplmax(); i2++){
	 v1.push_back(-99999); 
		}
		action.push_back(v1);
	}
	 }


void print_action(){
int getplmax();	
int getaction(int a, int b);
cout<<"\n";
for (int i= 0; i<getplmax(); i++){
	for (int i2= 0; i2<getplmax(); i2++){
		cout<<getaction(i,i2)<<"\t";
		}
		cout<<"\n";
	} 
	 }


int getaction(int a, int b){return action[a][b]; }


void setaction (int a, int b, int c){action[a][b]=c; } //player, sort, value


void setaction (string s){	 
void setaction (int a, int b, int c);
vector<string> arr;
  string delim("\t");
  size_t prev = 0;
  size_t next;
  size_t delta = delim.length();
  while( ( next = s.find( delim, prev ) ) != string::npos ){
    arr.push_back( s.substr( prev, next-prev ) );
    prev = next + delta;
  }
arr.push_back( s.substr(prev ) );

int arrnum = atoi(arr[0].c_str())-1;

for (int i = 1; i < arr.size(); i++) {
int t = atoi(arr[i].c_str());	
	setaction(arrnum,i-1,t);
	}
	 } 
	 
	 
string send_actions(){
string s; s="";	
string text;   text = "";
int getaction(int a, int b);

for (int i= 0; i<getplmax(); i++){
	for (int i2= 0; i2<getplmax()-1; i2++){
std::ostringstream str;	
if (i2==0){str <<i<<"\t";}			
str << getaction(i,i2);
text = str.str();
s+=text+"\t";
		}
	}
	return s;	   
	   }
	   
	   
void decode_actions(string s){
void clear_action();
clear_action();	 	 
void setaction (int a, int b, int c);
vector<string> arr;
  string delim("\t");
  size_t prev = 0;
  size_t next;
  size_t delta = delim.length();
  while( ( next = s.find( delim, prev ) ) != string::npos ){
    arr.push_back( s.substr( prev, next-prev ) );
    prev = next + delta;
  }
arr.push_back( s.substr(prev ) );

int counter=0;
int rcounter=-1;
for (int i = 0; i < arr.size(); i++) {
int t = atoi(arr[i].c_str());
rcounter++;
if (rcounter==getplmax()){rcounter=0; counter++;}	
if (rcounter!=0){	setaction(counter,rcounter-1,t);}
	}	   
	   }	   


int if_local_needs_to_answer(){ //1 ok, -1 no
int z=-1;
int  getplnumstart(); 
int if_local_needs_to_answer_line(int i);

for (int i= 0; i<getplnumstart(); i++){
int r=	if_local_needs_to_answer_line(i);
if (r>0){z=1; break;}
}	
return z;	 
	 }


int if_local_needs_to_answer_line(int i){ //1 ok, -1 no
int z=-1;	
 int  getorder();
 int order =   getorder();
int getplmax();	
int getaction(int a, int b);

int t=-1; int t1=-1; int t2=-1;	
if (getaction(i,0)!=order)					{ // player is not answering to himself
	for (int i2= 0; i2<getplmax(); i2++)		{
if (i2==0){t=getaction(i,i2);}		
if (t==2 || t==3)	//if attack or bribe are on player's land
{//
if (i2==1){t1=getaction(i,i2);} 
if (i2==2){t2=getaction(i,i2);
int getowner(int a, int b); int o = getowner(t1, t2);
if (o==order){
z=1;   			  
			  }
}
}//  					
if (t==5)	{if (i2==1){t1=getaction(i,i2);} 
if (t1==order){z=1;}
}		
												}
		 									}					
return z;
	}


int which_line_needs_to_answer(){ //  -1 no
int  getplnumstart(); 
int if_local_needs_to_answer_line(int i);
int getaction(int a, int b);
int i;  int r; int t=-1;
for (i= 0; i<getplnumstart(); i++){
 r=	if_local_needs_to_answer_line(i);
if (r>0 && getaction(i,4)==-99999){
 t=1; break;  
 }
}
if (t==-1){i=-1;}
return i;	 
	 }
