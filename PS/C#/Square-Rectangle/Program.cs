// Happy Code 
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace SquareRectangle
{
    class Program{
      static void Main(string []args){
      int Q=Int32.Parse(Console.ReadLine());
      int b=1;
      while(b<=Q){
        string []Arr=Console.ReadLine().Split(' ');
        int W=Int32.Parse(Arr[0]);
        int H=Int32.Parse(Arr[1]);
        if(W==H){
            Console.WriteLine("Square");
        }else{
            Console.WriteLine("Rectangle");
        }
        b++;

      }      
    }
  }
}