package patterns;
//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 

public class Pattern12 
{
    public static void main(String[] args) {
        int row=5;
        //No of lines
        for(int i=1; i<=row; i++){
            //space
            for(int j=1; j<=row-i; j++){
                System.out.print("  ");
            }
            //1st half numbers
            for(int j=i; j>=1; j--){
                System.out.print(j+" ");
            }
            //2nd half numbers
            for(int j=2; j<=i; j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }    
}
