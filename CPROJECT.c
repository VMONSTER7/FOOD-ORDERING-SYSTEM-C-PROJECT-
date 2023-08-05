#include <stdio.h>
#include <stdlib.h>

#define ITEM_COUNT 5
#define RESTAURANT_COUNT 3

int main()
{
    int i ,choice, quantity, restaurant_choice,cart_choice;
    float price, total_price = 0.0;
    char items1[ITEM_COUNT][20]  = {"Pizza ", "Burger", "Pasta", "Salad", "Soup"};
    char items2[ITEM_COUNT][20]  = {"Dalgona", "Americano", "Latte ", "Bubble Tea", "Espresso Martini"};
    char items3[ITEM_COUNT][20]  = {"Chocolate pastry", "Fruit cake", "Chocolava cake ",
    "Blueberry Cake", "Casata"};
    float prices[RESTAURANT_COUNT][ITEM_COUNT] = {
        {100.0, 50.0, 75.0, 60.0, 45.0},
        {150.0, 75.0, 112.5, 90.0, 67.5},
        {50.0, 180.0, 120.5, 95.0, 60.5}
    };

    while (1)
    {  
        printf("\n");
        for (i=0;i<105;i++)
        printf("*");
        printf("\n\n\t\t\t\t\tFood Ordering System\n\n");
        for (i=0;i<105;i++)
        printf("*");
        printf("\nSelect a restaurant:\n");
        printf("1. Restaurant 1 (Fast Food)\n");
        printf("2. Restaurant 2 (Beverages)\n");
        printf("3. Restaurant 3 (Dessert)\n");    
        printf("4. To View Cart\n");
        printf("5. To Exit\n");
        printf("\nEnter your choice:\n ");
        scanf("%d", &restaurant_choice);

         if (restaurant_choice >= 1 && restaurant_choice <= 5)
        {
            {
            printf("\n");
            for (i=0;i<105;i++)
            printf("*");
            if(restaurant_choice==1){
            printf("\nrestaurant%d (Fast Food) \n\n ",restaurant_choice);
            printf("\nMenu:\n");
            printf("1. Pizza ₹100  \n");
            printf("2. Burger  ₹50  \n");
            printf("3. Pasta ₹75  \n");
            printf("4. Salad ₹60\n");
            printf("5. Soup ₹45 \n");
            printf("6. Return to main Main Menu and view Your cart\n");
            printf("Enter your choice: \n");
            scanf("%d", &choice);
            }
            if(restaurant_choice==2){
            printf("\nrestaurant%d (Beverages)\n\n",restaurant_choice);
            printf("\nMenu:\n");
            printf("1. Dalgona ₹150 \n");
            printf("2. Americano   ₹75 \n");
            printf("3. Latte ₹112.5\n");
            printf("4. Bubble Tea ₹90\n");
            printf("5. Espresso Martini ₹67.5\n");
            printf("6. Return to main Main Menu and View your cart\n");
            printf("\n\nEnter your choice: \n");
            scanf("%d", &choice);
            }
            if(restaurant_choice==3){
            printf("\nrestaurant%d (Dessert) \n\n",restaurant_choice);
            printf("\nMenu:\n");
            printf("1. Chocolate pastry ₹50  \n");
            printf("2. Fruit cake   ₹180  \n");
            printf("3. Chocolava cake ₹ 120.5  \n");
            printf("4. Blueberry  Cake ₹90 \n");
            printf("5. casata ₹60.5 \n");
            printf("6. Return to main Main Menu and view Your cart\n");
            printf("Enter your choice: \n");
            scanf("%d", &choice);
            }
            }
            if (choice == 7)
            {
                break;
            }
            else if (choice >= 1 && choice <= 5)
            {
                printf("Enter the quantity: \n");
                scanf("%d", &quantity);
                price = prices[restaurant_choice - 1][choice - 1] * quantity;
                total_price += price;
                if(restaurant_choice==1)
                {
                 printf("item is = %s and quantity = %d\n",items1[choice-1],quantity ); 
                printf("Total Price: ₹%.2f\n",price);
                }
                if(restaurant_choice==2)
                {
                 printf("item is = %s and quantity = %d\n",items2[choice-1],quantity ); 
                printf("Total Price: ₹%.2f\n",price);
                }
                if(restaurant_choice==3)
                {
                 printf("item is = %s and quantity = %d\n",items3[choice-1],quantity );
                printf("Total Price: ₹%.2f\n",price);
                }
            }
            if (choice==6){
                if (total_price==0)
                printf("\n\n\nCart Empty\nPlease order something \n");
                else{
                printf("\n\n\n");
                printf("Total amount to be paid: ₹%.2f\n", total_price);
                printf("GST: ₹50.0\n");
                printf("Total charges: ₹%.2f\n", total_price + 50.0);
                printf("\nwant to proceed further for payment\npress \n1.Yes \n2.No\n");
                scanf("%d",&cart_choice);
                if(cart_choice==1)
                {   
                    printf("\n\nMake Payment of amount ₹%.2f\n", total_price + 50.0);
                    printf("\nPayment accepted Your order will be ready in 15 minutes\n");
                    printf("\nThank you for your order!\n");
                return 0;
                }
                else
                {
                    printf("\n\nYour cart has been emptied \n");
                    return 1;
                }
                
                }
            }
            if (restaurant_choice==4)
                printf("\n\n\nCart Empty\nPlease order something \n");
            if (restaurant_choice==5)
                return 0;
           }
        else
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}



