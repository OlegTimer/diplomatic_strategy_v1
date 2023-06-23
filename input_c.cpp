#include <conio.h>
#include <cstdlib>
using namespace std;

void read_input_console(){
void answf(int a);
int answ=666;
	 
	 while(true){
if(kbhit()){ 
switch(getch()){ 
case 27: { exit(0); break;  }	//esc

case 8: { answ=555; break;  }	//backspace
case 13: { answ=777; break;  }	//enter
case 32: { answ=444; break;  }	//space
case '-': { answ=999; break;  } //minus

case 48: { answ=0;  break;  }
case 49: { answ=1;  break;  }
case 50: { answ=2;  break;  }
case 51: { answ=3;  break;  }
case 52: { answ=4;  break;  }
case 53: { answ=5;  break;  }
case 54: { answ=6;  break;  }
case 55: { answ=7;  break;  }
case 56: { answ=8;  break;  }
case 57: { answ=9;  break;  }
case 'A' : { answ=1;  break;  }
case 'a' : { answ=1;  break;  }
case 'B' : { answ=2;  break;  }
case 'b' : { answ=2;  break;  }
case 'C' : { answ=3;  break;  }
case 'c' : { answ=3;  break;  }
case 'D' : { answ=4;  break;  }
case 'd' : { answ=4;  break;  }
case 'E' : { answ=5;  break;  }
case 'e' : { answ=5;  break;  }
case 'F' : { answ=6;  break;  }
case 'f' : { answ=6;  break;  }
case 'G' : { answ=7;  break;  }
case 'g' : { answ=7;  break;  }
case 'H' : { answ=8;  break;  }
case 'h' : { answ=8;  break;  }
case 'N' : { answ=78;  break;  }
case 'n' : { answ=78;  break;  }
case 'Y' : { answ=89;  break;  }
case 'y' : { answ=89;  break;  }
default: { answ=666;  break;  }
}
if  (answ!=666) {answf(answ); break; }
}
}
	 }
