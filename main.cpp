#include<graphics.h>
#include <conio.h>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<double> a) 
{ 
    int i, j, min_idx; 
    int n= a.size();
    //setlinestyle(0,0,3);
    //line(0,getmaxy()-50,getmaxx(),getmaxy()-50);
    
    for (i = 0; i < n-1; i++) 
    { 
        
        min_idx = i; 
        
        for (j = i+1; j < n; j++)
		{
			setfillstyle(1,RED);
			delay(1); // decrease program timer here
			floodfill(5*j+2, a[j]+170, BLACK);
			if (a[j] > a[min_idx]) 
            min_idx = j;
			setfillstyle(1,WHITE);
			floodfill(5*j+2, a[j]+170, BLACK); 
			
		 } 
//		delay(0.01);
		setfillstyle(1,BLACK);
        floodfill(5*min_idx+2, a[min_idx]+170, BLACK);
        swap(a[min_idx],a[i]);
        setfillstyle(1,BLACK);
        floodfill(5*i+2, a[i]+170, BLACK);
		setfillstyle(1,GREEN);
		bar(i*5,a[i]+150,i*5+4,getmaxy());
//		delay(20);
//		 setfillstyle(1,WHITE);
//		bar(i*5,a[i]+100,i*5+4,getmaxy());
        //floodfill(5*i+2, a[i]+110, BLACK);
        
    } 
} 

int main()
{
    int i,gd = DETECT, gm,j=0;
//    initgraph(&gd,&gm, "C:\\tc\\bgi");
    initwindow(1600,900);
    vector<double> a;
    
    for(int i=1;i<320;i++)
    {
    	a.push_back(i);
	}
//	reverse(a.begin(),a.end());
	random_shuffle(a.begin(),a.end());
	setlinestyle(0,0,3);
//	line(0,getmaxy()-100,getmaxx(),getmaxy()-100);
//	setfillstyle()
	for(i=0;i<getmaxx();i=i+5)
	{
		bar(i,a[j]+150,i+4,getmaxy());
		j++;
	}
	
outtextxy(25, 20, "Sorting..."); 
selectionSort(a);
	
	for(i=0;i<a.size();i++)
	{
		delay(1);
		setfillstyle(1,WHITE);
        floodfill(5*i+2, a[i]+200, BLACK);
	}
	
    getch();
}

