#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int ppd(){
	int a, b;
	for (a = 100; a <= 200; a++){
		for (b = 2; b < sqrt(a); b++){
			//ÅÐ¶ÏÊÇ·ñÕû³ý
			if (a % b == 0) {
				break;
			}
		}
		if (b >= sqrt(a)){
			printf("%d\n", a);
	}
}
system("pause");
return 0;
}