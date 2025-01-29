#include<stdio.h>
main()
{
	int n,x,a[3]={0,0,0,0},Total_amt;
	char ch;
	do{
	printf("\n\n\t 1.Pizza   Price = 180rs/pcs");
	printf("\n\n\t 2.Burger  Price = 100rs/pcs");
	printf("\n\n\t 3.Dosa    Price = 120rs/pcs");
	printf("\n\n\t 4.Idli    Price = 50rs/pcs");
	printf("\n\n\t Please Enter your choose.... :");
	scanf("%d",&n);
	switch(n)
	{case 1 :
		printf("\n\n\t You have selected pizza.");
		printf("\n\n\t Enter the quanity :");
		scanf("%d",&x);
		a[0] = 180*x;
		printf("\n\n\t Amount : %d",a[0]);
	break;
    case 2 :
		printf("\n\n\t You have selected burger.");
		printf("\n\n\t Enter the quanity :");
		scanf("%d",&x);
		a[1] = 100*x;
		printf("\n\n\t Amount : %d",a[1]);
	break;
	case 3 :
		printf("\n\n\t You have selected dosa.");
		printf("\n\n\t Enter the quanity :");
		scanf("%d",&x);
		a[2] = 120*x;
		printf("\n\n\t Amount : %d",a[2]);
	break;
	case 4 :
		printf("\n\n\t You have selected idli.");
		printf("\n\n\t Enter the quanity :");
		scanf("%d",&x);
		a[3] =50*x;
		printf("\n\n\t Amount : %d",a[3]);	
	break;
	default : printf("\n\n\t Pless enter valid number.");
	}
		Total_amt=a[0]+a[1]+a[2]+a[3];
		printf("\n\n\t Total Amount is : %d",Total_amt);
		printf("\n\n\t Do you want to continue? (y/n) : ");
		scanf(" %c",&ch);	
	}while(ch=='y' || ch=='Y');	
}
