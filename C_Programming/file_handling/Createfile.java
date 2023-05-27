import java.io.*;

class Createfile
{
    public static void main(String arr[]) throws Exception
    {
        File fobj = new File("Infosystems.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File successfully created");
        }
        else
        {
            System.out.println("Unable to create");
        }
    }
}