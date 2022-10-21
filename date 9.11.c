#include<stdio.h>
//int main()
//{
  //  int num1;
  //  int num2;
  //  int sum;
  //  scanf("%d%d",&num1,&num2);
  //  sum = num1 +num2 ;
  //  printf("sum=%d\n",sum);
  //  return 0;

//}
//int Max(int x,int y)
//{
//    if(x>y)
//        return x;
//    else 
//        return y;
//}

//int main()
//{
 //   int a=0;
//   int b=0;
 //   int c=0;
 //   scanf("%d%d",&a,&b);
  //  c=Max(a,b);
  //  printf("%d\n",c);
 //   return 0;
//int main()
//{
 //   char d;//char打印字符
 //   d ='A';
 //   printf("g=%c",d);
 //   return 0;
//}
//int main()
//{
 //   float g;
 //   g =12.222;
 //   printf ("%f",g);
 //   return 0;

//}

//int main()
//{
 //   double k;
 //   k =2.000011;
 //   printf("%le",k);
 //   return 0;
//}
//int main()
//{
 //   char m;
 //   printf("输入一个字符：");
 //   scanf("%c",&m);
  //  printf("%c的ASCII的值为%d",m,m);
 //   return 0;
//}
//int main()
//{
//    int a,b,c;
//    a=20;
 //   b=40;
 //   c=90;
//    if(a>b && a>c) 
//printf("max=%d",a);
//    else if (b>a && b>c)
//printf("max=%d",b);
//    else if(c>a && c>b)
//printf("max=%d",c);
//    return 0;
//}
//int main()
//{
//    int a,b,c,d;
 //   printf("输入被除数：");
 //   scanf("%d",&a);
//    printf("输入除数：");
  //  scanf("%d",&b);
 //   c =a / b;
  //  d =a % b;
 //   printf("商=%d\n",c);
 //   printf("余=%d\n",d);
//    return 0;
//}
//int main()
//{
//char arr1[] = "0";
//printf("%s",arr1);
//return 0;
//}
// int main()
// {
//   int a = 0;
//   printf("加入共产党\n");
//   printf("你要好好学习吗>(0/1):");
//   scanf("%d",&a);
//   if(a==1)
//       printf("实现梦想\n");
//   else
//       printf("烤面筋"); 
//   return 0;
// }
// int main()
// {
//   int line;
//   while(line<20)
//   {
//     printf("敲1行代码\n");
//     line++;
//   }
//   return 0;
// 
// int Max(int x,int y)
// {
//   if (x>y)
//       return x;
//   else 
//       return y; 
// }
// int main()
// {
//   int a,b,c;
//   scanf("%d%d",&a,&b);
//   c= Max(a,b);
//   printf("最大值为%d",c);
//   return 0;
// }
// void test()
// {
//   static int a=1;
//   a++;
//   printf("a=%d\n",a);
// }
// int main()
// {
//   int i=0;
//   while(i<5)
//   {
//     test();
//     i++;
//   }
//   return 0;
// }
// int main()
// {
//   extern int g_val;
//   printf("c=%d",g_val);
//   return 0;
// }
// struct Book
// {
//   char name[20];
//   int price;
// };
// int main()
// {
//   struct Book b1={"C语言程序设计",55};
//   strcpy(b1.name,"jdj");
//   printf("%s\n",b1.name);
//   // struct Book*pb=&b1;
//   // printf("%s\n",(*pb).name);
//   // printf("%d\n",pb->price);
//   // printf("书名：%s\n",b1.name);
//   // printf("价格:%d\n",b1.price);
//   // b1.price=99;
//   // printf("修改后的价格：%d",b1.price);
//   return 0;
// }
// int main()
// {
//   int age;
//   scanf("%d",&age);
//   if (age<18)
//     printf("未成年人\n");
//   else if(age>=18 && age<28)
//     printf("青年\n");
//   else if(age>=28 && age<50)
//     printf("壮年\n");
//   else if(age>=50 && age<90)
//     printf("老年\n");
//   else
//   printf("老不死\n");
//   return 0;
// }
// int main()
// {
//   int a=0;
//   int b=2;
//   if(a==1)
//     {
//       if (b==2)
//         printf("hehe\n");
//     }
//   else
//       printf("haha\n");
//   return 0;
// }
// int main()
// {
//   int a;
//   scanf("%d",&a);
//   if(a%2==0)
//     printf("该数为偶数");
//   else
//     printf("该数为奇数");
//   return 0;
// }
// int main()
// {
//   int i=0;
//   while(i<100)
//   {
//     i++;
//     if(i%2==1)
//       printf("%d\n",i);
//   }
// }
// int main()
// {
//   int day;
//   scanf("%d",&day);
//   switch(day)
//   {
//   case 1:
//     printf("星期1\n");
//     break;
//   case 2:
//     printf("星期2\n");
//     break;
//   case 3:
//     printf("星期3\n");
//     break;
//   case 4:
//     printf("星期4\n");
//     break;
//   case 5:
//     printf("星期5\n");
//     break;
//   case 6:
//     printf("星期6\n");
//     break;
//   case 7:
//     printf("星期7\n");
//     break;
//   }
// }
// 
int main()
{
  int ch=getchar();
  putchar(ch);
  return 0;
}