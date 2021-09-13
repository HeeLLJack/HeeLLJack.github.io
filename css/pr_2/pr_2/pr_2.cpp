#include <iostream>
#include <cstdlib>
#include <cmath>

int main()
{
    /*
    int s, nem = 0;
    scanf_s("%d", &nem);
    for (int i = 0; i <= 5; i++) {
        s = pow(nem, i);
        printf("%d \n", s);
    }
    */
    


    /*
    float v = 0, a = 0;
    printf("enter lenght of side ");
    scanf_s("%f", &a);
    v = a * a * a;
    printf("v = %f \n", v);
    

   
    float r = 0, r_1 = 0, r_2 = 0;
    printf("enter R1 ");
    scanf_s("%f", &r_1);
    printf("enter R2 ");
    scanf_s("%f", &r_2);
    r = r_1 + r_2;
    printf("R=%f ", r);
    */

    
    double a = 1000, b = 0.0001;
    double forml = (pow(a + b, 3) - ((pow(a,3) + 3 * pow(a, 2) * b))) / (3 * a * pow(b, 2) + pow(b, 3));
    printf("%f\n",forml);
   

    
    int n, m, a1;
    printf("enter n ");
    scanf_s("%d", &n);
    printf("enter m ");
    scanf_s("%d", &m);
    a1 = --n-m;
    printf("n---m = %i", a1);
    printf("\n");
    a1 = n++<m;
    printf("n++<m = %i", a1);
    printf("\n");
    a1 = n-- > m;
    printf("n-- > m = %i", a1);
    

    
    float z_1, z_2, a2;
    printf("enetr a ");
    scanf_s("%f", &a2);
    z_1 = cos(a2) + cos((2*a2)) + cos((6 * a2)) + cos((7 * a2));
    z_2 = (4 * cos((a2 / 2))) * cos(((5 / 2) * a2)) * cos((4 * a2));
    printf("z_1 = %f", z_1);
    printf("\n");
    printf("z_1 = %f", z_2);
    


}
