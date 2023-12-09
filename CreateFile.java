import java.io.*;

class CreateFile
{
    public static void main(String Arg[]) throws Exception
    {
        try
        {
           File fobj = new File("PPA.txt");
           fobj.createNewFile();
        }
        catch(Exception obj)
        {}
    }
}