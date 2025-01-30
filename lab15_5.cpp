#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a,int *b,int *c,int *d){
	int array[] = {*a,*b,*c,*d};
	for(int i = 0;i<4;i++){
		int rand1 = rand() % 4;
		int rand2 = rand() %4;

		while(rand1 == rand2) {
        	rand2 = rand() % 4; 
    	}

		int x = array[rand1];
		array[rand1] = array[rand2];
		array[rand2] = x;
	}
	
	*a = array[0];
	*b = array[1];
	*c = array[2];
	*d = array[3];
    }