#include<stdio.h>


	struct mobile{
		char companyname[100];
		char colour[100];
		char model[100];
		float price;
		
	};
	
main()
{
	int i,n;
	
	printf("Enter the value of n = ");
	scanf("%d" ,&n);
	
	 struct mobile m[n];
	for(i=1;i<=n;i++)
	{
		printf("Enter the companyname =  ");
		scanf("%d\n" ,&m[n].companyname);
		printf("Enter the colour = ");
		scanf("%d\n" ,&m[n].colour);
		printf("Enter the model = ");
		scanf("%d\n" ,&m[n].model);
		printf("Enter the price = ");
		scanf("%f\n" ,&m[n].price);
	}
		for(i=1;i<=n;i++)
		{
		
	printf("The companyname is = %d\n " ,&m[n].companyname);
	printf("The colour is = %d\n " ,&m[n].colour);
	printf("The model is = %d\n " ,&m[n].model);
	printf("The price is = %f\n " ,&m[n].price);
}
	

	
	
}
