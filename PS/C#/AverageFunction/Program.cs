using System;
using System.Collections;
namespace Average{
    class Program{
      public static double GetAverage(string []Arr,double size){
      
        double sum=0.0;
        for(int a=0;a<size;a++){
            sum+=double.Parse(Arr[a]);
        }
        return sum/size;
      }

        private static void Main(string []args){
           int N=Int32.Parse(Console.ReadLine());
           string []Arr=Console.ReadLine().Split(' ');
            System.Console.WriteLine(GetAverage(Arr,N));
        }
    }
}
