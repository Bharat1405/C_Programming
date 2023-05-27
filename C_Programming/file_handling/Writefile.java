import java.io.*;

class Writefile
{
    public static void main(String arr[]) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("Infosystem.txt");
        String str = "India is my Country";

        byte Arr[] =str.getBytes();
        fobj.write(Arr);
        fobj.close();
    }
}