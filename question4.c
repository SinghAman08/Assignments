/*4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below
   given format.
Expected output format – “Area of circle is A having the radius R”. Replace A with area
& R with radius. */

// Date-> 11/4/23 ,Author Name = Aman Singh

#include <stdio.h>
int main()
{
    float area;
    int r;

    printf("Enter radius of area:\n");
    scanf("%d", &r);

    area = 3.14 * (r * r);
    printf("Areo of circle is %f having the radius %d", area, r);
    return 0;
}
