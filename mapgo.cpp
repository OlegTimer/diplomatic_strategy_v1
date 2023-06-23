#include <vector> 
using namespace std;
int width;
int  getwidth(){return width;}
void setwidth(int d){ width = d;}
int height;
int  getheight(){return height;}
void setheight(int d){ height = d;}

  class	Land {
  		public:
int land_get_owner(){ return owner;}
void  land_set_owner(int d){ owner = d;}
			  private:
			  		     int owner;
		  };
	 
vector<vector<Land> >  map;


int getowner(int a, int b){ 
if (a<height){	return map[a][b].land_get_owner();}
else{return 666;} //if map height is less than max players (8 by default)
	}

	
void setowner(int a, int b, int d){  map[a][b].land_set_owner(d);}


void fill_map(){ 
    for(int j=0;j<height;j++)
    {
      vector<Land> v1;
      for(int k=0;k<width;k++)
      {
	   		  Land land; 
			 	land.land_set_owner(0);
        v1.push_back(land); 
      }
      map.push_back(v1);
    }
	 }
