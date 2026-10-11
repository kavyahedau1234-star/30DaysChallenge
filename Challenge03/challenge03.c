#include <stdio.h>

int main()
{
    float purchase_amount;
    int customer_type;
    float distance;

    float discount_percent = 0.0;
    float discount_amount;
    float amount_after_discount;
    float delivery_charge = 0.0;
    float final_payable_amount;

    // Input details from user
    printf("Enter total purchase amount (in Rs): ");
    scanf("%f", &purchase_amount);

    printf("Enter customer type (1 for Student, 2 for Regular): ");
    scanf("%d", &customer_type);

    printf("Enter delivery distance (in km): ");
    scanf("%f", &distance);

    // Calculate discount based on customer type and purchase amount
    if (customer_type == 1)
    {
        // Student
        if (purchase_amount >= 2000)
        {
            discount_percent = 15.0;
        }
        else
        {
            discount_percent = 10.0;
        }
    }
    else if (customer_type == 2)
    {
        // Regular Customer
        if (purchase_amount >= 3000)
        {
            discount_percent = 8.0;
        }
        else
        {
            discount_percent = 0.0;
        }
    }
    else
    {
        printf("Invalid customer type entered!\n");
    }

    // Calculations for discount
    discount_amount = (purchase_amount * discount_percent) / 100.0;
    amount_after_discount = purchase_amount - discount_amount;

    // Calculate delivery charge based on distance
    if (distance <= 5)
    {
        delivery_charge = 40.0;
    }
    else if (distance > 5 && distance <= 15)
    {
        delivery_charge = 70.0;
    }
    else if (distance > 15)
    {
        delivery_charge = 100.0;
    }

    // Final payable amount calculation
    final_payable_amount = amount_after_discount + delivery_charge;

    // Displaying the results
    printf("\n SMARTCART BILL DETAILS \n");
    printf("Purchase Amount: Rs. %.2f\n", purchase_amount);
    printf("Discount Amount: Rs. %.2f (%.0f%%)\n", discount_amount, discount_percent);
    printf("Amount After Discount: Rs. %.2f\n", amount_after_discount);
    printf("Delivery Charge: Rs. %.2f\n", delivery_charge);
    printf("Final Payable Amount: Rs. %.2f\n", final_payable_amount);

    return 0;
}