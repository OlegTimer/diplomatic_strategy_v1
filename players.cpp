#include <vector> 
using namespace std;

int plnumstart;
int  getplnumstart(){return plnumstart;}
void setplnumstart(int d){ plnumstart = d;}

  class	Player {
  		public:
int  pgetrep(){return reputation;}
void psetrep(int d){ reputation = d;}
int  pgetgold(){return gold;}
void psetgold(int d){ gold = d;}
int  pgetsoldiers(){return soldiers;}
void psetsoldiers(int d){ soldiers = d;}
int  pgetbot(){return bot;}
void psetbot(){ bot = 1;}
void psethuman(){ bot = 0;}
void psetdead(){ bot = -1;}
			  private:
			  		     int reputation;
			  		     int gold;
		  		         int soldiers;
	  		          	 int bot;
		  };
	 
vector<Player>   players;


int getrep(int a){ a--;
return players[a].pgetrep();
	}
	

void setrep(int a, int b){ a--;
 players[a].psetrep(b);
	}
	
int getgold(int a){ a--;
return players[a].pgetgold();
	}
	

void setgold(int a, int b){ a--;
 players[a].psetgold(b);
	}
	
int getsoldiers(int a){ a--;
return players[a].pgetsoldiers();
	}
	

void setsoldiers(int a, int b){ a--;
 players[a].psetsoldiers(b);
	}			



void fill_players(){ 
	 void setbot(int a);	 
    for(int j=0;j<plnumstart;j++)
    {
	   		  Player pl; 
        players.push_back(pl); 
         setbot(j+1);
      }
	 }


void setbot(int a){ a--;
 players[a].psetbot();
	}
	
	
void sethuman(int a){ a--;
 players[a].psethuman();
	}
	
	
int getbot(int a){ a--;
return players[a].pgetbot();
	}		


void setdead(int a){ a--;
void zero_lands(int d);
 zero_lands(a);
 players[a].psetdead();
 void  setzerodip(int a, int b);
 for(int i=0;i<plnumstart;i++)
    	 {
		  setzerodip(a+1,i+1);					  
	 	 }
	}
