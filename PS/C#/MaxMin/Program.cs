// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace MinMax{
   public class Program{
    public static void Fun(string []A,int size){
        int min=Int32.Parse(A[0]),max=Int32.Parse(A[0]);
        for(int j=0;j<size;j++){
            var item=Int32.Parse(A[j]);
           if(item>=max) {
            max=item;
        } else if(item<min) {
            min=item;
        }
        }
        System.Console.WriteLine($"{min} {max}");
    }
    private static void Main(string[]args){
        int N=Int32.Parse(Console.ReadLine());
        string []Arr=Console.ReadLine().Split(' ');
        Fun(Arr,N);
    }
   }
}
