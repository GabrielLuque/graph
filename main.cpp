#include <iostream>
#include <sys/ioctl.h>
#include <string>

using namespace std;

struct graph{
	double xstep;
	double ystep;

};
void drawgraph(graph coord){
	struct winsize w;
	ioctl(0, TIOCGWINSZ,&w);

	for(int i=0;i<w.ws_row;i++){
		for(int j=0;j<w.ws_col;j++){
			if(j==w.ws_col/2||i==w.ws_row/2){
				cout << "#";

			}
			else{
				cout << ".";
			}
		}
		cout << endl;
	}

}

int main(){

	graph graph;
	graph.xstep = 32;
	graph.ystep = 50;	
	drawgraph(graph);
	return 0;
}
