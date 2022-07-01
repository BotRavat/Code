import java.util.*;
interface Prince
{
  //final int a=10,b=15;

   void fun();

}

class Suraj implements Prince
{


   public void fun()
   {
     Scanner sc=new Scanner(System.in);
     System.out.println("Input data for Prince");
     int a=sc.nextInt();
     int b=sc.nextInt();
     int c=a+b;
     System.out.println("Sum of a and b is in Prince ="+c);
  }
   void fun2()
   {
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter data for Suraj");
     int a=sc.nextInt();
     int b=sc.nextInt();
     int c=a+b;
     System.out.println("Sum of a and b is in Suraj ="+c);

   }

}

class InterfaceBasic
{
   public static void main(String abc[])

   {  Suraj su=new Suraj();
      su.fun();
      su.fun2();
   }

}
