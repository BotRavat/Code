class Abc1 extends Thread
{
    public void run()
    {
      System.out.println("Thread 1 started ...");
      for(int i=0;i<5;i++)
        System.out.println(" Thread 1 :"+i);
      System.out.println("Thread 1 ends ...");
    }
}

class Abc2 extends Thread
{
    public void run()
    {
      System.out.println("Thread 2 started ...");
      for(int i=0;i<5;i++)
        System.out.println(" Thread 2 :"+i);
      System.out.println("Thread 2 ends ...");
    }
}

class Abc3 extends Thread
{
    public void run()
    {
      System.out.println("Thread 3 started ...");
      for(int i=0;i<5;i++)
        System.out.println(" Thread 3 :"+i);
      System.out.println("Thread 3  ends ...");
    }
}



class ExtendThread
{
  public static void main(String ab[])
  {
    System.out.println("Main Thread Started....");
    Abc1 a1=new Abc1();   
    Abc2 a2=new Abc2();
    Abc3 a3=new Abc3();
    a1.start();
    a2.start();
    a3.start();
    
    System.out.println("Main thread ends...");
  }
  }
  
  
