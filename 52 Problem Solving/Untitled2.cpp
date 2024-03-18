#include<stdio.h>
#include<math.h>
int main()
{
	int p[6][2],d1,d2,i,j,x,y;
	double dis,min_dis=1e20; 
	for(i=0;i<6;i++){
		scanf("%d%d",&p[i][0],&p[i][1]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<6;j++){
			x=pow(p[i][0]-p[j][0],2);
			y=pow(p[i][1]-p[j][1],2);
			dis=sqrt(x+y);
			if(dis<min_dis){
				min_dis=dis;
				d1=i;
				d2=j;
			}
		}
	}
	printf("minimum distance:%g\n",min_dis);
	printf("point 1:(%d,%d)\n",p[d1][0],p[d1][1]);
	printf("point 2:(%d,%d)\n",p[d2][0],p[d2][1]);
	return 0;
}
