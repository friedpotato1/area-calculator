#include <stdio.h>
int main(){
    const long double PI = 3.141592653589793238462 ;
    double radius;
    double area;

    printf("Enter The Radius of the circle : ");
    scanf("%lf",&radius);

    if (radius>0){
        area = PI * radius * radius;
        printf("The area of the circle is : %lf",area);
    }
    else if (radius == 0){
        printf("Radius cant be of value zero try again");
    }
    else{
        printf("The radius can't be a negative number try again!");

    }
    return 0;

}