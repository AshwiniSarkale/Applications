import java.util.*;

class Base
{
    public void fun()  // 1000
    {  System.out.println("Inside base fun");  }
    public void gun()  // 2000
    {  System.out.println("Inside base gun");  }
    public void sun()  // 3000
    {  System.out.println("Inside base sun");  }
    public void run()  // 4000
    {  System.out.println("Inside base run");  }
}

class Derived extends Base
{
    public void fun()  // 5000
    {  System.out.println("Inside derived fun");  }
    public void sun()  // 6000
    {  System.out.println("Inside derived sun");  }
    public void run(int A)  // 7000 
    {  System.out.println("Inside derived run with one parameter");  }
    public void mun()  // 8000
    {  System.out.println("Inside derived mun");  }
}

class Overriding
{
    public static void main(String Arg[])
    
       Base bobj = new Derived();  // Upcasting
       // Base bobj = new Base();  // Nocasting
       // Derived dobj = new Derived();  // Upcasting
       // Derived dobj = new Base();  // Downcasting
       bobj.fun();  // Derived fun
       bobj.gun();  // Base gun
       bobj.sun();  // Derived sun
       bobj.run();  // Base run
       //bobj.run(11);
       // bobj.mun();
       Derived dobj = new Derived();
       dobj.mun();
    }
}