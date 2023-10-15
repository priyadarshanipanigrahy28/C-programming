/*Description:
You are the owner of a bakery shop and need to create a program to generate invoices for your customers. 
The program should prompt the user to enter the item they want to buy, the quantity they wish to purchase,
 and the price of the item. Based on this input, the program should calculate the total cost and display an invoice 
 with all the details, including the item, quantity, price per item, and total cost. At the end of the invoice, 
 don't forget to thank the user for shopping at your bakery shop. Your task is to write a C program that accomplishes this.

Instructions:
----------------
-> Display a welcome message along with a separator line to greet the customer.
-> Prompt the customer to enter the quantity they wish to purchase and store it in an integer variable.
-> Get the price of the item from the customer and store it in a floating-point variable.
-> Calculate the total cost by multiplying the price with the quantity.
-> Display the invoice with all the details, including item, quantity, price per item, and total cost.
-> Make sure the total cost is displayed with two decimal places.
-> End the invoice with a thank-you message for shopping at your bakery shop.

Example Output:
------------------
Welcome to My Bakery Shop!
----------------------------
Available Item is : Chocolate Cake
Enter the quantity you want to purchase: 2
Enter the price of Chocolate Cake: 250

------ Invoice ------
Quantity: 2
Price per item: Rs.250
Total cost: Rs.500
Thank you for shopping at My Bakery Shop! Have a nice day!
You can start by defining the necessary variables and then implement the user interactions using printf and scanf functions.
 Calculate the total cost and display the invoice accordingly. Finally, remember to thank the customer at the end of the
  program.
 */
 
 #include<stdio.h>
 int main()
 {
 	int qty,price;
 	printf("Welcome to my bakery shop!");
 	printf("\n-----------------------------------");
 	printf("\n Available item:Chocolate cake");
 	printf("\n Enter the quantity you want to purchase:");
 	scanf("%d",&qty);
 	printf("Enter the price of chocolate cake:");
 	scanf("%d",&price);
 	printf("-----------Invoice---------");
 	printf("\n Quantity:%d",qty);
 	printf("\n Price per item:%d",price);
 	printf("\n Total Cost:%d",qty*price);
 	printf("\nThank you for shopping at My Bakery Shop! Have a nice day!");
 }
