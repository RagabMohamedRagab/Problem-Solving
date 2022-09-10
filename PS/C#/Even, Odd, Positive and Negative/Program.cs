using System;
namespace EvenOddPositiveandNegative
{
    class Program
  {
    static void Main(string []args){
    int N,Pos=0,Neg=0,even=0,odd=0;
	N=Int32.Parse(Console.ReadLine());
	string []items=Console.ReadLine().Split(' ');
   foreach (var item in items)
   {
     var val=Int32.Parse(item);
     if(val%2==0){
			even++;
		}
		if(val%2!=0){
			odd++;
		}
		 if(val>0){
			Pos++;
		}
		 if(val<0){
			Neg++;
		}
   }
   System.Console.WriteLine($"Even: {even}");
   System.Console.WriteLine($"Odd: {odd}");
   System.Console.WriteLine($"Positive: {Pos}");
   System.Console.WriteLine($"Negative: {Neg}");

}
   }
 }