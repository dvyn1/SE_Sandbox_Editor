#include "point.h"
#include<string>
#include "myObject.h"
#include "systemPositioning.h"
#define AU 150000000
void main(void)
{
	std::cout << std::setiosflags(std::ios_base::fixed) << std::setprecision(10);

	myObject galactiCenter = myObject("Origin",0.0,0.0,0.0);
	myObject BalBlackHole= myObject("Bal Blackhole", galactiCenter,0,0,0);
	myObject Sol = myObject("Sol", BalBlackHole,3*AU,288,0);
	Sol.setParent(&BalBlackHole);
	cout << Sol << endl;
}