#include<string.h>
#include<stdlib.h>
#include<stdio.h>

unsigned long long raiseTo(unsigned long long base, unsigned long long power){
    unsigned long long result = 1,i;
    for (i=0; i 1)
			prod *= ((raiseTo(i,count + 1) - 1)/(i-1));
	}

	if(n>2)
		prod *= (n+1);

	return prod - temp;
}

void printSeries(unsigned long long* arr,int size,char* type){
	int i;

	printf("\nInteger : %llu, Type : %s, Series : ",arr[0],type);

	for(i=0;iprintf("%llu, ",arr[i]);
	printf("%llu",arr[i]);
}

void aliquotClassifier(unsigned long long n){
	unsigned long long arr[16];
	int i,j;

	arr[0] = n;

	for(i=1;ifopen(fileName,"r");
	char str[21];

	while(fgets(str,21,fp)!=NULL)
		aliquotClassifier(strtoull(str,(char**)NULL,10));

	fclose(fp);
}

int main(int argC,char* argV[])
{
    if(argC!=2)
		printf("Usage : %s ",argV[0]);
	else{
		if(strchr(argV[1],'.')!=NULL)
			processFile(argV[1]);
		else
			aliquotClassifier(strtoull(argV[1],(char**)NULL,10));
	}
	return 0;
}