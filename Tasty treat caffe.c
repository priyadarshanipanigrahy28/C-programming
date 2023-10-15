
/*Title: "Tasty Treats Cafe: Bill Calculator"
Introduction:
Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you! Let's calculate your bill based on your preferences.
Question:
How many cups of tea, cups of coffee, and biscuits would you like to order?
Instructions:
Each cup of tea costs ?15, each cup of coffee costs ?25, and each biscuit costs ?10
Please provide the quantity for each item you wish to order.
Example:
Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please."
Bill Calculation:
2 cups of tea � ?15 = ?30
1 cup of coffee � ?25 = ?25
3 biscuits � ?10 = ?30
Total Bill:
?30 (Tea) + ?25 (Coffee) + ?30 (Biscuits) = ?85
Input as :
-------------
Welcome to Tasty Treats Cafe!
How many cups of tea would you like to order? : 2
How many cups of coffee would you like to order? : 1
How many biscuits would you like to order? : 3
Output as :
-----------------
2 cups of tea
1 cup of coffee
3 biscuits
Total Bill Amount: ?85
Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.*/

#include<stdio.h>
int main()
{
	int tea,coffee,biscuit,total;
	printf("Tasty treat caffe: Bill Calculator");
	printf("\n Welcome to Tasty Treats Cafe!\n We provide a delightful selection of beverages and snacks to satisfy your cravings.\n Today, you are our esteemed customer, and we are eager to serve you! \nLet's calculate your bill based on your preferences.");
	printf("\n How many cups of tea would you like to order:");
	scanf("%d",&tea);
	printf("How many cups of coffee would you like to order:");
	scanf("%d",&coffee);
	printf("How many biscuits would you like to order:");
	scanf("%d",&biscuit);
	printf("\n%d cups of tea",tea);
	printf("\n%d cups of coffee",coffee);
	printf("\n%d biscuits",biscuit);
	total=(tea*15)+(coffee*25)+(biscuit*10);
	printf("\nTotal Bill Amount:%d",total);
	
}


