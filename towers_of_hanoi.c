//TOWER OF HANOI

#include<stdio.h>

void tower_of_hanoi(int,char,char,char);

int main (){
	int n; // n is the number of towers
	printf("Enter the number of disks: ");
	scanf("%d", &n);
	tower_of_hanoi(n,'A','B','C'); // A,B,C are threee towers 
	return 0;
}


void tower_of_hanoi(int n,char from,char to,char through){
	if(n==1){
		printf("\nDisk %d has been moved from %c to %c", n,from,through);
		return;
	}
	tower_of_hanoi(n-1, from, through, to);
	printf("\nDisk %d has been moved from %c to %c", n,from,through);
	tower_of_hanoi(n-1, to, from, through);
}
