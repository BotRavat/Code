import java.util.*;
class Prince
{
  int a,b,c;

  void fun()
  {
   Scanner sc=new Scanner(System.in);
   System.out.println("Input data for Prince");
   a=sc.nextInt();
   b=sc.nextInt();
   c=a+b;
   System.out.println("Sum of a and b is in Prince ="+c);
}

}

class Suraj extends Prince
{


  
   void fun2()
   {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter data for Suraj");
     a=sc.nextInt();
     b=sc.nextInt();
     c=a+b;
     System.out.println("Sum of a and b is in Suraj ="+c);

   }

}


class InheritanceBasic
{
   public static void main(String abc[])

   {  Suraj su=new Suraj();
      su.fun();
      su.fun2();
   }

}
