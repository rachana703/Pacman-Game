#include<stdio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
float octave[7]={130.81,146.83,164.81,174.61,196,220,246.94};
int circles_matrix[300][3]={{20,20,0},{20,40},{20,60},{20,80},{20,100},{20,120},{20,135},
	{40,135},{60,135},{80,135},{105,135},{105,155},
	{20,225},{40,225},{60,225},{80,225},
	{280,120},{300,120},{320,120},{340,120},{360,120},
	{260,130},{260,150},
	{105,175},{105,195},{105,215},{105,235},{105,255},{105,275},{105,295},{105,315},{105,335},{105,355},{105,375},{105,395},
	{75,395},{55,395},{55,375},{55,355},{55,335},
	{55,315},{80,315},{35,315},{15,315},
	{15,335},{15,355},{15,375},{35,355},
	{105,415},{80,415},{60,415},{40,415},{20,415},
	{20,435},
	{20,455},{40,455},{60,455},{80,455},{100,455},{120,455},{140,455},{160,455},{180,455},{200,455},{220,455},{240,455},{260,455},{280,455},{300,455},{320,455},{340,455},{360,455},{380,455},{400,455},{420,455},{440,455},{460,455},{480,455},
	{470,435},
	{470,415},{440,415},{420,415},{400,415},{380,415},{360,415},
	{370,395},{370,375},{370,355},{370,335},
	{390,335},{410,335},{430,335},{450,335},{470,335},{490,335},
	{490,355},{490,375},
	{470,365},{450,365},{430,365},{410,365},
	{420,390},
	{40,15},{60,15},{80,15},{100,15},{120,15},{140,15},{160,15},{180,15},{200,15},{220,15},
	{265,15},{285,15},{305,15},{325,15},{345,15},{365,15},{385,15},{405,15},{425,15},{445,15},{465,15},{485,15},
	{485,35},{485,55},{485,115},{485,135},
	{465,135},{445,135},{420,135},
	{265,35},{265,55},{265,75},
	{385,35},{385,55},{385,75},
	{210,35},{210,55},{210,75},{210,95},
	{195,95},{175,95},{155,95},{135,95},{105,95},{225,95},{245,95},{265,95},{285,95},{305,95},{325,95},{345,95},{365,95},{385,95},{405,95},
	{395,115},{395,135},{395,155},{395,175},{395,195},{395,215},{395,235},{395,255},{395,275},{395,295},{395,315},{295,335},
	{415,225},{435,225},{455,225},{475,225},{495,225},
	{425,85},{445,85},{465,85},{485,85},
	{105,115},{105,75},{105,55},{105,35},
	{40,85},{60,85},{80,85},

	{155,115},{155,135},{175,135},{195,135},{215,135},
	{205,155},{205,175},
	{185,165},{165,165},{145,165},{225,165},{245,165},{265,165},{285,165},{305,165},{325,165},{345,165},{365,165},
	{345,185},{345,205},{345,225},
	{305,185},{305,205},{305,225},{305,245},{305,265},{305,285},{305,305},
	{325,295},{345,295},{370,295},{275,295},{255,295},
	{255,325},{255,345},{255,365},{255,385},
	{145,385},{165,385},{185,385},{215,385},{235,385},{275,385},{295,385},{325,385},{345,385},{295,360},
	{320,335},{345,335},
	{215,365},{215,345},{215,325},{215,305},{215,285},
	{195,305},{175,305},{155,305},
	{155,285},{155,265},{155,245},{155,225},{155,205},{155,185},
	{175,265},{195,265},{215,265},{235,265},{255,265},{275,265},
	{195,325},{175,325},{155,325},{135,325},{115,325}};
int coordinate_matrix[80][4]={
	{0,0,500,0},
      {0,0,0,150},
      {0,150,80,150},
      {80,150,80,200},
      {0,200,80,200},
      {0,250,80,250},
      {80,250,80,300},
      {0,300,80,300},
      {0,300,0,470},
      {500,0,500,150},
      {420,150,500,150},
      {420,150,420,200},
      {420,200,500,200},
      {420,250,500,250},
      {420,250,420,300},
      {420,300,500,300},
      {500,300,500,470},
      {0,470,500,470},
      {130,100,130,200},
      {130,150,185,150},
      {190,115,270,115},
      {230,115,230,150},
      {130,250,130,300},
      {35,330,90,330},
      {90,330,90,370},
      {0,380,35,380},
      {35,430,190,430},
      {130,400,130,430},
      {130,350,190,350},
      {190,400,270,400},
      {230,400,230,430},
      {200,190,230,190},
      {200,190,200,240},
      {200,240,230,240},
      {200,280,270,280},
      {230,280,230,320},
      {250,190,280,190},
      {280,190,280,240},
      {250,240,280,240},
      {280,320,370,320},
      {280,320,280,360},
      {320,430,430,430},
      {350,380,350,430},
      {400,350,450,350},
      {400,350,400,400},
      {450,390,500,390},
      {370,100,370,200},
      {290,150,370,150},
      {350,240,350,280},
      {35,25,90,25},
	  {35,70,90,70},
	  {35,25,35,70},
	  {90,25,90,70},
	{35,100,90,100},
	{35,100,35,120},
	{90,120,90,100},
	{35,120,90,120},
	{130,25,185,25},
	{130,25,130,70},
	{130,70,185,70},
	{185,25,185,70},
	{230,0,250,0},
	{230,0,230,70},
	{230,70,250,70},
	{250,0,250,70},
	{290,25,365,25},
	{290,25,290,70},
	{365,25,365,70},
	{290,70,365,70},
	{415,25,465,25},
	{415,70,465,70},
	{415,25,415,70},
	{465,25,465,70},
	{415,100,465,100},
	{415,120,465,120},
	{415,100,415,120},
	{465,120,465,120},
};


int i=110,j=250;
int x1=300,y1=100;
int bar_check(){
	for(int h=0;h<77;h++){

			if(x1>=coordinate_matrix[h][0]-10 &&x1<=coordinate_matrix[h][2]+10 &&y1>=coordinate_matrix[h][1]-10 &&y1<=coordinate_matrix[h][3]+10){
				if(x1==coordinate_matrix[h][0]-10){
					if(y1>j){y1=y1-2;}
					else if(y1<j){y1=y1+2;}
					else{x1=x1-1;}
				}
				else if(x1==coordinate_matrix[h][2]+10){
					if(y1>j){y1=y1-2;}
					else if(y1<j){y1=y1+2;}
					else{x1=x1+1;}
				}
				else if(y1==coordinate_matrix[h][1]-10){
					if(x1>i){x1=x1-1;}
					else if(x1<i){x1=x1+1;}
					else{y1=y1-1;}
				}
				else if(y1==coordinate_matrix[h][3]+10){
					if(x1>i){x1=x1-2;}
					else if(x1<i){x1=x1+2;}
					else{y1=y1+1;}
				       //	return 4;
				}return 0;
			}
		}
		return 1;
}
void ghost(){
      /*	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	circle(x1,y1,10);
	floodfill(x1,y1,BLUE); */
	setcolor(getmaxcolor());
	setfillstyle(SOLID_FILL,1);
	arc(x1,y1,0,180,10);
	line(x1-10,y1,x1-10,y1+10);
	line(x1+10,y1,x1+10,y1+10);
	line(x1-10,y1+10,x1-5,y1+6);
	line(x1-5,y1+6,x1,y1+10);
	line(x1,y1+10,x1+5,y1+6);
	line(x1+5,y1+6,x1+10,y1+10);
	circle(x1-5,y1-2,3);
	circle(x1+5,y1-2,3);
	floodfill(x1-5,y1,getmaxcolor());
	floodfill(x1,y1,getmaxcolor());


	int flag;
	while(1){
		flag=bar_check();
		if(flag==1){
		       if(x1>i){x1=x1-1;}
		       else if(x1<i){x1=x1+1;}
		       else if(y1>j){y1=y1-1;}
		       else if(y1<j){y1=y1+1;}
		}/*else if(flag==0){
			for(int a=0;a<5;a++){
				if(y1>j){y1=y1-1;}
				else if(y1<j){y1=y1+1;}
			}
		}else if(flag==2){
			if(y1>j){y1=y1-1;}
			else if(y1<j){y1=y1+1;}
			x1=x1+1;
		}else if(flag==3){
			if(x1>i){x1=x1-1;}
			else if(x1<i){x1=x1+1;}
			y1=y1-1;
		}else if(flag==3){
			if(x1>i){x1=x1-1;}
			else if(x1<i){x1=x1+1;}
			y1=y1+1;
		}  */
		break;
	}
}
char intAsString[10];
void map(){
	int x=0,y=-1,ch;
	int angle=3;
	int score=0;
	while(1)                                                               //infiniteloop
      {

      setlinestyle(SOLID_LINE,100,500);
      setcolor(CYAN);
      for(int z=0;z<80;z++)
      {
		line(coordinate_matrix[z][0],coordinate_matrix[z][1],coordinate_matrix[z][2],coordinate_matrix[z][3]);
      }


      for(int f=0;f<300;f++)
      {
      if(circles_matrix[f][2]==1)
      {setcolor(BLACK);}
      else
      {setcolor(WHITE);}
      circle(circles_matrix[f][0],circles_matrix[f][1],3);
      }

      if((x1==i || (x1>i-14 && x1<i+14))   && (y1==j || (y1>j-14 && y1<j+14)))
      {
      //setcolor(RED);
      //	outtextxy(100,100,"ghost cought you!!");
			       /*	int intToConvert1 =score;
				char intAsString1[10]; //int will be stored here as a string
				itoa (intToConvert1,intAsString1,10);
				outtextxy(100,150,"Final Score:");
				outtextxy(150,150,intAsString1);            */
				//outtextxy(100,200,"Press any key to exit!");
	goto endd;
      }

				//pacman smiley
				setcolor(YELLOW);
				setfillstyle(SOLID_FILL,YELLOW);
				if(angle==0)
				{
					pieslice(i,j,30,330,10);
					setcolor(BLACK);
					circle(i,j-7,2);
					setfillstyle(SOLID_FILL,BLACK);
					floodfill(i,j-7,BLACK);

				}
				else if(angle==1)
				{
					pieslice(i,j,0,250,10);
					pieslice(i,j,290,360,10);
					setcolor(BLACK);
					circle(i+7,j,2);
					setfillstyle(SOLID_FILL,BLACK);
					floodfill(i+7,j,BLACK);

				}
				else if(angle==2)
				{
					pieslice(i,j,0,160,10);
					pieslice(i,j,200,360,10);
					setcolor(BLACK);
					circle(i,j-7,2);
					setfillstyle(SOLID_FILL,BLACK);
					floodfill(i,j-7,BLACK);


				}
				else
				{
					pieslice(i,j,0,70,10);
					pieslice(i,j,110,360,10);
					setcolor(BLACK);
					circle(i-7,j,2);
					setfillstyle(SOLID_FILL,BLACK);
					floodfill(i-7,j,BLACK);


				}
			   //displaying scores
			       setcolor(WHITE);
				int intToConvert =score;
			      //	char intAsString[10]; //int will be stored here as a string
				itoa (intToConvert,intAsString,10);
				outtextxy(550,300,"Score:");
				outtextxy(600,300,intAsString);
				outtextxy(540,330,"Press Esc ");
				outtextxy(540,340,"to Exit..");

				//keyboard inputs
				if(kbhit())                                            //checkif a key is pressed
				{
						ch=getch();
						if(ch==72)                           //move upward
						{
								x=0;
								y=-1;
								angle=3;
						}

						if(ch==75)                           //move left
						{
								x=-1;
								y=0;
								angle=2;
						}

						if(ch==77)                           //move right
						{
								x=1;
								y=0;
								angle=0;
						}

						if(ch==80)                           //move downward
						{
								x=0;
								y=1;
								angle=1;
						}

						if(ch==27)                           //exit when escpressed
								exit(0);
				}
				ghost();
				for(int l=0;l<300;l++){
				if(i>=circles_matrix[l][0]-15 && i<=circles_matrix[l][0]+15 && j>=circles_matrix[l][1]-15 && j<=circles_matrix[l][1]+15)
				{
					if(circles_matrix[l][2]==0){
					setcolor(BLACK);
					score++;
					sound(octave[6]*2);
					delay(5);
					nosound();
					circle(circles_matrix[l][0],circles_matrix[l][1],3);
					circles_matrix[l][2]=1;

					}
				}
				}
				int flag=1;
			     //	setcolor(RED);
			       //	line(130,350,190,350);
				for(int h=0;h<77;h++){
					if(i>=coordinate_matrix[h][0]-10 &&i<=coordinate_matrix[h][2]+10 &&j>=coordinate_matrix[h][1]-10 &&j<=coordinate_matrix[h][3]+10){
						if(i==coordinate_matrix[h][0]-10){i--;}
						else if(i==coordinate_matrix[h][2]+10){i++;}
						else if(j==coordinate_matrix[h][1]-10){j--;}
						else if(j==coordinate_matrix[h][3]+10){j++;}
						flag=0;
					}

				}
				if(flag==1){
					i=i+x;
					j=j+y;
				}else if(flag==0){
					continue;
				}
				delay(5);
				cleardevice();
		}
		endd:

		if(score<300)
		{

			cleardevice();




			setcolor(15);
			setfillstyle(SOLID_FILL,1);
			arc(100,100,0,180,40);
			line(60,100,60,140);
			line(140,100,140,140);
			line(60,140,80,130);
			line(80,130,100,140);
			line(100,140,120,130);
			line(120,130,140,140);
			circle(80,90,10);
			circle(120,90,10);
			floodfill(100,100,15);

			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,YELLOW);

			int midx=500;
			int midy=100;


			pieslice(midx,midy,30,330,40);
			setcolor(BLACK);
			circle(midx+5,midy-25,8);
			setfillstyle(SOLID_FILL,BLACK);
			floodfill(midx+5,midy-25,BLACK);
			setcolor(CYAN);
			outtextxy(midx-200,midy,"PACMAN");







			setcolor(YELLOW);
			outtextxy(200,200,"Ghost caught you!!");
			setcolor(WHITE);
			outtextxy(200,250,"Final Score:");
			setcolor(CYAN);
			outtextxy(300,250,intAsString);
			setcolor(YELLOW);
			outtextxy(350,400,"Press any key to exit!");
			for(int k=6;k>=0;k--)
			{
				sound(octave[k]);
				delay(50);
			}
			nosound();
			getch();
		}
		else
		{
			cleardevice();
			outtextxy(100,100,"You won!!");
			outtextxy(100,150,"Final Score:");
			outtextxy(250,150,intAsString);
			outtextxy(100,200,"Press any key to exit!");
			getch();
		}
}
void main(){
	clrscr();
	int ch,gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//	sound(octave[6]*2);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);

	int midx=getmaxx()/2;
	int midy=getmaxy()/2;


	pieslice(midx,midy,30,330,40);
	setcolor(BLACK);
	circle(midx+5,midy-25,8);
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(midx+5,midy-25,BLACK);
	setcolor(CYAN);
	outtextxy(midx-25,midy+55,"PACMAN");
	setcolor(WHITE);
	outtextxy(midx+50,midy+150,"Press any key to continue...");
	outtextxy(midx+50,midy+200,"Press X to exit.");

	int n;
	for(int z=0;z<30;z++){
		n=random(6);
		sound(octave[n]*4);
		delay(50);
	}
	nosound();
      char c=getch();
      if(c=='x'||c=='X')
      {
		goto end;
      }

	 map();
	 end:
}