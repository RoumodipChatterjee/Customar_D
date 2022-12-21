float calc(float);
#include <stdio.h>
struct customer
{
    char name[50];
    char g[10];
    int id;
    float y;
};
int main()
{
    int n;
    float b;
    printf("Enter the number of customer you want to enter: \n");
    scanf("%d", &n);
    struct customer customers[n];
    printf("Enter the %d customers details:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Customer name: \n");
        scanf("%s", customers[i].name);
        printf("Enter gender: \n");
        scanf("%s", customers[i].g);
        printf("Enter the customer id: \n");
        scanf("%d", &customers[i].id);
        printf("Enter the number of years for which the customers is buying the concerned product: \n");
        scanf("%f", &customers[i].y);
        
    }
    printf("The %d customer details:\n", n);
    for (int i = 0; i < n; i++)
    {
        float d= calc(customers[i].y);
        printf("Customer name: \n");
        printf("%s\n", customers[i].name);
        printf("Gender: \n");
        printf("%s \n ", customers[i].g);
        printf("Customer id: \n");
        printf("%d\n", customers[i].id);
        printf("Number of years: ");
        printf("%f\n", customers[i].y);
        printf("The discount is: ");
        printf("%f", d);
}}
float calc(float p)
{
float q=0.1*p;
return(q);
}