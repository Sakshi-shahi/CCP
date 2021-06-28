 #include<stdio.h>
 #include<math.h>
 int areacalculate(int a,int b,int c)
 {
    float s, area ,s1;
    s1=a+b+c;
    s=s1/2;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle of given sides is %o.2f",area);
    return 0;
 }
 int main()
 {
    int a1,b1,c1;
    printf("enter three sides of triangle \n");
    scanf("%d %d %d",&a1,&b1,&c1);
    areacalculate(a1,b1,c1);
    return 0;
 }