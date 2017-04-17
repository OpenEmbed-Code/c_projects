#include <stdio.h>
#include<string.h>
int main(int argc, char ** argv)
{
	int orientationMatrix[9];
	int i = 0,temp=9;
	static const int OriMatrix[][9]=
	{
		1,	0,	0,	0,	1,	0,	0,	0,	1,
		1,	0,	0,	0,	1,	0,	0,	0,	1,
		0,	-1,	0,	1,	0,	0,	0,	0,	1,
		-1,	0,	0,	0,	-1,	0,	0,	0,	1,
		0,	1,	0,	-1,	0,	0,	0,	0,	1,
		0,	-1,	0,	-1,	0,	0,	0,	0,	-1,
		1,	0,	0,	0,	-1,	0,	0,	0,	-1,
		0,	1,	0,	1,	0,	0,	0,	0,	-1,
		-1,	0,	0,	0,	1,	0,	0,	0,	-1,
		0,	0,	1,	-1,	0,	0,	0,	-1,	0	//9
	};
	//void *memcpy(void *dest, const void *src, size_t n);
	memcpy(orientationMatrix,OriMatrix[temp],sizeof(OriMatrix[temp]));
	for(i = 0; i < 9; i++)
	{
		printf("%d ",orientationMatrix[i]);
	}
	printf("\n");
}
