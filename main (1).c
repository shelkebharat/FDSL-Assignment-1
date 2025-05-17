#include <stdio.h>

struct book
{
    int bookid;
    char bookname[20];
    char author[20];
};

void main()
{
int i, n, pos, a,del,b;
printf("Enter number of books: ");
scanf("%d", &n);
    
struct book b1[n+1];

for(i=0;i<n;i++)
{
printf("Enter bookid: ");
scanf("%d", &b1[i].bookid);
printf("Enter book name: ");
scanf("%s", b1[i].bookname);
printf("Enter book author: ");
scanf("%s", b1[i].author);
}
printf("Book record\n ");
printf("id\tname\tauthor\t\n");
for (i=0;i<n;i++)
{
printf("%d\t%s\t%s\n",b1[i].bookid,b1[i].bookname,b1[i].author);
}

printf("Do you want to add more book information? Y=0 or N=1: ");
scanf("%d",&a);
 if(a==0)
{
printf("Enter position at which you want to add a book: ");
scanf("%d",&pos);

if (pos>=0 && pos<=n)
{
 for (i=n;i>pos;i--)
{
 b1[i] = b1[i-1];
}

printf("Enter bookid: ");
scanf("%d", &b1[pos].bookid);
printf("Enter book name: ");
scanf("%s", b1[pos].bookname);
printf("Enter book author: ");
scanf("%s", b1[pos].author);
}
}
printf("Book record\n ");
printf("id\tname\tauthor\t\n");
for (i=0;i<=n;i++)
{
printf("%d\t%s\t%s\n", b1[i].bookid, b1[i].bookname, b1[i].author);
}
printf("Do you want to delete any position ? Y=0 OR N=1:");
scanf("%d",&b);
if(b==0)
{
printf("Enter position which you want to delete : ");
scanf("%d",&n-1);

if(pos>=0 && pos<=n )
{
for (i=pos;i<n-1;i++)
{
b1[i]=b1[i+1];
}
}
}
printf("Book record\n ");
printf("id\tname\tauthor\t\n");
for (i=0;i<n;i++)
{
printf("%d\t%s\t%s\n", b1[i].bookid, b1[i].bookname, b1[i].author);
}
}
