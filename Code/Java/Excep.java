import java.util.*;
class Excep
{
   public static void main(String args[])
   {
 try {
     int a,b,c;
     Scanner sc=new Scanner(System.in);
     System.out.println("Enter value of a and b");
     a=sc.nextInt();
     b=sc.nextInt();
     c=a/b;
     System.out.println("Value of c ="+c);

     int arr[]=new int[5];
     System.out.print("Enter element of array -");
     for(int i=0;i<5;i++)
       arr[i]=sc.nextInt();

     System.out.print(arr[6]);
   }
    catch(ArrayIndexOutOfBoundsException e)
     {
         System.out.print("We found Exception "+e);

     }
     catch(Exception e)
     {
       System.out.println("Exception caught -"+e);

     }


     finally
     {
        System.out.println("This is finally block");
     }

      System.out.print("Program Ends");



   }

}
