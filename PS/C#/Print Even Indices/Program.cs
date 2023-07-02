using System;
namespace  PrintEvenIndices
{
    internal class Program{
        public static void Print(int []A,int n,int i){
            if(i<n){
                Print(A,n,i+2);
                Console.Write($"{A[i]} ");
            }
        }
        private static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            string []arr=Console.ReadLine().Split(' ');
            int []Arr=new int[arr.Length];
            int a=0;
            while(a<arr.Length){
                Arr[a]=Int32.Parse(arr[a]);
                a++;
            }
            Print(Arr,N,0);
        }
    }
}