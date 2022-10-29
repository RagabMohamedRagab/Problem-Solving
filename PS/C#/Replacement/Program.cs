// Happy Fuken  Code 
// Time Complexity  O(N)
// Space Complexity O(N)

using System;
namespace ReplaceMent{
    class Program{
        static void Main(string[]args){
           long N=Int64.Parse(Console.ReadLine());
           string []arr=Console.ReadLine().Split(' ');
           int i=0;
           while(i<N){
             int item=Int32.Parse(arr[i]);
             if(item>0){
                arr[i]="1";
             }else if(item<0){
                arr[i]="2";
             }else{
                arr[i]="0";
             }
             Console.Write(arr[i]+" ");
            i++;
           }
           
        }
    }
}