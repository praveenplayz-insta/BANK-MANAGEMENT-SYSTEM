 import java.util.*;
class bank1
{
  public static void main(String[] args)
  {
      int x;
    bank obj=new bank();
    obj.initilization();
    System.out.println("ENTER 1 FOR DEPOSITE,ENTER 2 FOR WITHDRAW AND ENTER 3 FOR CHECKING AMOUNT NOTE:ENTER ANY NUMBER IF YOU DONT WANT TO DO ANYTHING");
    Scanner s=new Scanner(System.in);
    x=s.nextInt();
    switch(x)
    {
        case 1:
            obj.deposite();
            break;
          case 2:
              obj.withdraw();
              break;
            case 3:
              obj.display();
             default :
             break;
    }
  }
}
class bank
{
  String holder_name;
  int account_number;
  float balance;
  void initilization()
  {
    Scanner s = new Scanner(System.in);
    System.out.println("ENTER HOLDER NAME:");
    holder_name=s.nextLine();
    System.out.println("ENTER ACCOUNT NUMBER");
    account_number=s.nextInt();
    System.out.println("ENTER YOIR BALANCE");
    balance=s.nextFloat();
  }
  void display()
  {
    System.out.println("THE HOLDER NAME:"+holder_name);
    System.out.println("HOLDER'S ACCOUNT NUMBER:"+account_number);
    System.out.println("HOLDERS BALANCE:"+balance);
  }
  void deposite()
  {
    float depositex;
  System.out.println("ENTER HOW MUCH AMOUNT YOU WANT TO DEPOSITE:");
   Scanner s = new Scanner(System.in);
   depositex=s.nextFloat();
   balance=balance+depositex;
   System.out.println("YOUR CURRENT BALANCE:"+balance);
  }
  void withdraw()
  {
    float withdrawx;
    System.out.println("ENTER HOW MUCH AMOUNT YOU WANNA WITHDRAW");
    Scanner s = new Scanner(System.in);
    withdrawx=s.nextFloat();
    balance=balance-withdrawx;
    System.out.println("YOUR CURRENT BALANCE:"+balance);
  }
}   