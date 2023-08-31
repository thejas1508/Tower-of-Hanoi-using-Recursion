#include <stdio.h> 
#include <stdlib.h>
void tower_of_hanoi(int n, char from, char to, char aux)
{
if (n == 1)
{
printf("\n Move disk 1 from peg %c to peg %c", from, to); 
return;
}
tower_of_hanoi(n-1, from, aux, to);
printf("\n Move disk %d from peg %c to peg %c", n, from, to); 
tower_of_hanoi(n-1, aux, to, from);
}
int main()
{
int n;
printf("Enter the Number of disks : "); 
scanf("%d",&n);
tower_of_hanoi(n, 'A', 'C', 'B'); // A, B and C are names of peg 
return 0;
}
