#include <REG51.H>
char led_mod[] = {0x38,0x5B};		//LED��ģ��L2��
void delay(unsigned int time);

void main() {
	char led_point = 0;
   	while (1) { 
		P3 = 2 - led_point; 		//���LEDλ��
		P2 = led_mod[led_point];	//�����ģ	
		led_point = 1 - led_point;	//ˢ��LEDλ��
		delay(10);			
    }
}

void delay(unsigned int time){ 
	unsigned int j = 0;
	for(;time>0;time--)
		for(j=0;j<125;j++);
}

