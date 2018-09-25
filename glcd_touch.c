#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/input.h>



int x,y;
        int a=0,b=0,a1=0,b1=0,c1=0,d1=0,c=0,d=0,e=0,f=0,h=0,j=0,i=0,g=0,o=0;
	
void calc(int choice)
{
switch(choice)
{
case 1: printf("\nadding two values");
        int a1=a+b;
	printf("\n result =  %d\n\n",a1);
	break;
case 2: printf("\nsubtracting 2 values");
	int b1=a-b;
	printf("\n result=  %d\n\n",b1);
case 3: printf("\nmultiplying 2 values");
	int c1=a*b;
	printf("\n result=  %d\n\n",b1);
case 4: printf("\ndividing 2 values");
	int d1=a/b;
	printf("\n result=  %d\n\n",b1);
}


}

void init()
{
/*printf("x=%d",x);
printf("y=%d",y);
printf("enterd in initialisation");*/


if((x>200&&x<600)&&(y>2000&&y<2600))
      {
	a=1;
//value_1(a);

//call_touch();
//sleep(5);
//init();

         printf("\na\n=%d\n",a);
      }
	if((x>1200&&x<1600)&&(y>2200&&y<2700))
	{

	b=2;
printf("\nb=\n%d\n",b);
}
if((x>2000&&x<2500)&&(y>2100&&y<2550))
{
printf("/nmental");
c=3;
printf("\nc=\n%d\n",c);
}
if((x>1700&&x<2500)&&(y>1200&&y<1750))
{
d=4;
printf("\nd=\n%d\n",d);
}
if((x>1000&&x<1500)&&(y>1200&&y<1800))
{
e=5;
printf("\ne=\n%d\n",e);
}
 if((x>200&&x<600)&&(y>1200&&y<1900))
      {
	f=6;
         printf("\nf=\n%d\n",f);
      }
	if((x>100&&x<800)&&(y>300&&y<1000))
	{
	g=7;
printf("\ng=\n%d\n",g);
}
if((x>1000&&x<1600)&&(y>400&&y<900))
{
h=8;
printf("\nh=\n%d\n",h);
}
if((x>1800&&x<2500)&&(y>400&&y<950))
{
i=9;
printf("\ni=\n%d\n",i);
}
if((x>1000&&x<1600)&&(y>3000&&y<3700))
{
j=0;
printf("\n%d\n",j);
}


//addition
 if((x>2600&&x<3000)&&(y>1000&&y<2900))
      {
call_touch();
init();
printf("\n values read");
printf("\n calling calc");
	calc(1);
        
      }



if((x>3000&&x<3600)&&(y>500&&y<1800))
	{
call_touch();
init();
printf("\n values read");
printf("\n calling calc");
calc(2);
}
if((x>3000&&x<3750)&&(y>2200&&y<2700))
{
call_touch();
init();
printf("\n values read");
printf("\n calling calc");
calc(3);

}
if((x<2900&&x<3800)&&(y=3000&&y<3650))
{
call_touch();
init();
printf("\n values read");
printf("\n calling calc");
calc(4);
}
if((x>3000&&x<3600)&&(y>500&&y<900))
{
o="=";
printf("%d",o);
}}



//printf("exit from initialisation");	




int call_touch()
{

	int fd,b1;
	char buff[256] = "Name";
	int i,rb;
	int Xval=0,Yval=0;
        struct input_event ev;
        struct input_absinfo ab;

	if ((fd = open("/dev/input/touchscreen0", O_RDONLY)) < 0) 
	{
		printf ("Error Opening the Device\n");
                return 1;
    }

	ioctl(fd, EVIOCGNAME(sizeof(buff)), buff);
	printf("Touch Input device name: \"%s\"\n", buff);

//while(1)
//{

        for (i = 0; i < 5; i++)
	{
	
        	rb=read(fd,&ev,sizeof(struct input_event));

		//printf ("After read\n");
		if ((ev.type == 1) && (ev.code == 330))
		{
			//printf ("Touch Event = %d\n",ev.code);
		}

		if ((ev.type == 3) && (ev.code == 0))
		{
			//printf ("X Value  = %d\n",ev.value);
			x=ev.value;
		}
		if ((ev.type == 3) && (ev.code == 1))
		{
			//printf ("Y Value  = %d\n",ev.value);
			y=ev.value;
		}
		if ((ev.type == 3) && (ev.code == 24))
		{
		        //	printf ("Touch Pressure  = %d\n",ev.value);
		}
			
	}


	//if(Xval!=0 && Yval!=0)
//sleep(2);
 
//break; 

   

//}

close(fd);
//printf("\nwait for 5 second");
sleep(5);
//printf("god save me pls. im stuck at touch_call");

init();
	return 0;
}

int main()
{
printf("\nenter the value1 \n:");
call_touch();
//sleep(5);
printf("\nenter the symbol");


call_touch();

}
