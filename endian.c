#include <stdio.h>
#include <inttypes.h>

int IsEndian();

int main(void){


	if(IsEndian())
		printf("LittleEndian\n");
	else
		printf("BigEndian\n");

return (0);


}

int IsEndian(){
	  
	        volatile uint32_t endiantester = 5;
	        return ( *(((uint8_t *)&endiantester) + 0) );
}
