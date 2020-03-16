#ifndef CFB_ULTRASSONICO_H_INCLUDED
#define CFB_ULTRASSONICO_H_INCLUDED

#include <arduino.h>
class CFB_ultrassonico {
public:
	CFB_ultrassonico(int pt,int pe);
	double distancia_cm();
	double distancia_m();
private:
	int pino_trigger;
	int pino_echo;
	



};


#endif
