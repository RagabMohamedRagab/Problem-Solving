// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace Average{
    public class Program{
        public static double AVG(int []A,int N){
            if(N<0){
                return 0;
            }
            return A[N]+AVG(A,N-1);
        }
        private static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            string []Arr=Console.ReadLine().Split(' ');
            int []A=new int[N];
            for(int i=0;i<N;i++){
                A[i]=Int32.Parse(Arr[i]);
            }
           double result=(AVG(A,N-1)/N);
           Console.WriteLine(result.ToString("#.000000"));
        }
    }
}