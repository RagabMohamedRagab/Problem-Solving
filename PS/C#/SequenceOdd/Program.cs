using System;
namespace SumOfSequenceOddNumbers
{
    class Program{
        static void Main(string []args){
            int Fucken_Variable=Int32.Parse(Console.ReadLine());
            int Fucken_StartVariable=0;
            while(Fucken_StartVariable++<Fucken_Variable){
                int Fucken_Sum=0;
                string []Fucken_Arr=Console.ReadLine().Split(' ');
                int X=Int32.Parse(Fucken_Arr[0]);
                int Y=Int32.Parse(Fucken_Arr[1]);
               int Fucken_Max=(X>=Y)?X:Y;
               int Fucken_Min=(X<=Y)?X:Y;
               int Fucken_SecondV=Fucken_Min;
               while(++Fucken_SecondV<Fucken_Max){
                  if(Fucken_SecondV%2!=0){
                    Fucken_Sum+=Fucken_SecondV;
                  }
               } 
                Console.WriteLine($"{Fucken_Sum}");

            }
        }
    }
}
