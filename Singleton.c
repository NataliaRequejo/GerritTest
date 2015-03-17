#include "Singleton.h"
Singleton* Singleton::pinstance = 0;// Inicializar el puntero
Singleton* Singleton::Instance (){
	if (pinstance == 0){
		pinstance = new Singleton;
	}
	return pinstance;
}
Singleton::Singleton()
{
  
}
	