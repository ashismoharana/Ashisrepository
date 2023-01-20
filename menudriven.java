import java.util.Scanner;
class menudriven
{
    public static void main(String args[])
    {
        int bal=10000,withdraw,deposit,choice;
        Scanner sc=new Scanner(System.in);
        while(true)
        {
            System.out.println("\t\t\t\tWELCOME TO APNA BANK ATM");
            System.out.println("\nchoose any operation");
            System.out.println("\nchoose 1 for withdraw");
            System.out.println("\nchoose 2 for deposit");
            System.out.println("\nchoose 3 to check balance");
            System.out.println("\nchoose 4 for EXIT");
            System.out.println("\nenter your choice");
            choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                System.out.println("\nenter money to withdraw");
                withdraw=sc.nextInt();
                if(bal>=withdraw)
                {
                    bal=bal-withdraw;
                    System.out.println("please collect your money");
                    break;
                }
                else
                {
                    System.out.println("insufficient balance");
                    break;
                }
                case 2:
                System.out.println("enter amount to be deposited");
                deposit=sc.nextInt();
                bal=bal+deposit;
                System.out.println("your amount deosited succesfully");
                break;
                case 3:
                System.out.println("total balance= "+bal);
                break;             
            }

        }
    }
}