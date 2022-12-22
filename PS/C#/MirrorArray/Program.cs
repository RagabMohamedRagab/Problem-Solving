// Happy Code
// Time O(N^2)
// Space O(N)
using System;
using System.Collections;
using System.Collections.Generic;
namespace MirrorArray{
    class Program{
        static void Main(string[]args){
            string []Arr=Console.ReadLine().Split(' ');
            int N=Int32.Parse(Arr[0]);
            int M=Int32.Parse(Arr[1]);
            string []A=new string[]{};
            IList<string []> list_Arr=new List<string[]>(); 
            int a=1;
            while(a<=N){
                A=Console.ReadLine().Split(' ');
                if(A.Length==M){
                    list_Arr.Add(A);
                }
                a++;
            }
            foreach(var arr in list_Arr){
                for(int i=M-1;i>=0;i--){
                    Console.Write(arr[i]+" ");
                }
                Console.WriteLine();
            }
        }
    }
}
