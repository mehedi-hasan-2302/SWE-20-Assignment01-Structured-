#include<stdio.h>
#include<math.h>

struct player{
	int score[10];
};


int main()
{
	struct player p[3];

	for(int i=0; i<3; i++){
		for(int j=0; j<5; j++){
			scanf("%d",&p[i].score[j]);
		}
	}
	float a[3];

	for(int i=0; i<3; i++){
		int x=0,y=0,j;
		for(j=0; j<5; j++){
			x+=p[i].score[j];
		}
		x=x/5;
		for(int k=0; k<5; k++){
		y=sqrt(((p[0].score[k]-x)*(p[0].score[k]-x)+(p[1].score[k]-x)*(p[1].score[k]-x)+(p[2].score[k]-x)*(p[2].score[k]-x))/5);
		}
		a[i]=y;
	}
	int i=0,num=0;
	float z=a[0];
	for(i=1; i<=3; i++){
		if(z<=a[i]){
			z=a[i];
			num=i;
		}
	}

	printf("%dth player is the most consistent batter\n",num);

	return 0;


}