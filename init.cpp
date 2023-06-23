void init(){
void intro();
intro();	 
	 
void setwidth(int d);
void setheight(int d);	 
 setwidth(8);
 setheight(8);	 
	 
void fill_map();	
fill_map();

void setstate(int d);
setstate(1);

void clear_action();
clear_action();

void setplnumstart(int d);
setplnumstart(4);
void fill_players();
fill_players();

void setorder(int d);
int mynum = 1;
setorder(mynum);
void sethuman(int a);
sethuman(mynum);

void setrep(int a, int b);
setrep(1,100); setrep(2,100); setrep(3,100); setrep(4,100);
void setgold(int a, int b);
setgold(1,5); setgold(2,5); setgold(3,5); setgold(4,5);
void setsoldiers(int a, int b);
setsoldiers(1,2); setsoldiers(2,2); setsoldiers(3,2); setsoldiers(4,2);

void setprice(int d);
setprice(5);
void setlieprice(int d);
setlieprice(50);
void setpriceland(int d);
setpriceland(1);

void setowner(int a, int b, int d);
 setowner(0,0,1); setowner(0,1,1); setowner(0,2,1);
 setowner(0,3,2); setowner(0,4,2); setowner(0,5,2);
 setowner(7,7,3); setowner(7,6,3); setowner(7,5,3);
 setowner(7,0,4); setowner(6,0,4); setowner(5,0,4);
 setowner(4,4,9);

void zerodiplom();
zerodiplom();

void  setneutral(int a, int b);
void  setenemy(int a, int b);
void  setally(int a, int b);
void  setzerodip(int a, int b);
setenemy(1, 2); setenemy(1, 3); setenemy(1, 4);
setenemy(2, 3); setenemy(2, 4);
setenemy(3, 4);
 setneutral(1, 2); //
 
// void setdead(int a); setdead(3); setdead(4); 

void setphase(int d);
setphase(1);

void show();
show();	 

void read_input_console();
read_input_console();	 
	 }
