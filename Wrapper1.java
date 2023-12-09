
class Wrapper1
{
    public static void main(String Arg[]) 
    {
        int no = 11;
        Integer iobj = no;   // Boxing

        System.out.println(no);
        System.out.println(iobj);

        int i = iobj;   // Unboxing
        System.out.println(i);
    }
}

/*
Datatype                Wrapper Class

boolean                  Boolean
byte                     Byte
char                     Character
int                      Integer
float                    Float
double                   Double
short                    Short
long                     Long

*/