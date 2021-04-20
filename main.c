#include <stdio.h>
int main()
{
     int choice;
     printf("Hey there! \n");
     printf("Pick a Item:\n 1.Pizza\n 2.Burger\n 3.Pasta\n 4.French Fries\n 5.Sandwhich\n ");
     scanf("%d" , &choice);

     switch(choice)
     {
         case 1:
            printf("Food Item: Pizza \nPrice : Rs.239");
            break;
         case 2:
            printf("Food Item: Burger \nPrice : Rs.129");
            break;
         case 3:
            printf("Food Item: Pasta \nPrice : Rs.179");
            break;
        case 4:
            printf("Food Item: French Fries \nPrice : Rs.99");
            break;
        case 5:
            printf("Food Item: Sandwhich \nPrice : Rs.149");
            break;
         default:
            printf("Invaild Choice");
    }
    return 0;
}
