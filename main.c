#include "Singleton.h"

void main(void){
	
	Singleton *p1 = Singleton::Instance();
	Singleton *p2 = p1->Instance();
	Singleton &ref = * Singleton::Instance();

}
