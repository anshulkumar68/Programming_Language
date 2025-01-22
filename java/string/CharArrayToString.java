    package string;
public class CharArrayToString 
{
    public static void main(String[] args) 
    {
        // character to string 
        char[] ch={'g','e','t','l','o','s','t'};
        String str = new String(ch);        //1st approach
        
        System.out.println("String is: "+str);

        //string to character array
        String ss= "Bishal";
        char[] store = ss.toCharArray();
        System.out.println(store);
    }    
}
