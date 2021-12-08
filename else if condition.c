#include<stdio.h>
void main()
{int eng,mat,phy,che,cs;
  printf("Enter the Eng marks:");
  scanf("%d",&eng);
  printf("Enter the mat marks:");
  scanf("%d",&mat);
  printf("Enter the phy marks:");
  scanf("%d",&phy);
  printf("Enter the che marks:");
  scanf("%d",&che);
  printf("Enter the cs marks:");
  scanf("%d",&cs);
  if(mat>35&&eng>35&&phy>35&&che>35&&cs>35)
  printf("The student is pass");
  else
  printf("The student is fail");
}
