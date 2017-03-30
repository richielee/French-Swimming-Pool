#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int board[8],count;
 
int main()
{
 int n,i,j;
 void queen(int row,int n);

 count = 0;
 queen(1,8);
 printf("%d\n", count);
 return 0;
}
 
 
/*funtion to check conflicts
If no conflict for desired postion returns 1 otherwise returns 0*/
int place(int row,int column)
{
 int i;
 for(i=1;i<=row-1;++i)
 {
  //checking column and digonal conflicts
  if(board[i]==column)
   return 0;
  else
   if(abs(board[i]-column)==abs(i-row))
    return 0;
 }
 
 return 1; //no conflicts
}
 
//function to check for proper positioning of queen
void queen(int row,int n)
{
 int column;
 for(column=1;column<=n;++column)
 {
  if(place(row,column))
  {
   board[row]=column; //no conflicts so place queen
   if(row==n) //dead end
    count++; //printing the board configuration
   else //try queen with next position
    queen(row+1,n);
  }
 }
}
