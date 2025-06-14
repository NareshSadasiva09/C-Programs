#include<stdio.h>
int main () {
    int n,i;
    float elec_bill = 0, prev_bill, total_elec_bill, sur_charge;
    scanf("%d", &n);
        if(n == 0) {
            elec_bill = 0;
            prev_bill = 0;
        }
        if(n <= 50) {
            elec_bill = n*0.50;
            prev_bill = elec_bill - prev_bill;
        }
        if(n<= 150) {
            elec_bill = prev_bill +((n-50)*0.75);
            prev_bill = elec_bill;
        }
        if(n <= 250) {
            elec_bill = prev_bill + ((n-150)*1.20);
            prev_bill = elec_bill;
        }
        if(n >= 250) {
            elec_bill = prev_bill + ((n - 250)*1.50);
        }
    printf("electricity bill : %f \n", elec_bill);
    sur_charge = elec_bill * 0.20;
    printf("Surcharge : %f \n", sur_charge);
    total_elec_bill = elec_bill + sur_charge;
    printf("Total electricity bill(including surcharge): %.2f \n", total_elec_bill);
    return 0;
}