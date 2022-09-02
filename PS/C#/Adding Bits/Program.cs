using System;
namespace Name
{
    class Program{
        static void Main(string []args){
            string []Arr=Console.ReadLine().Split(' ');
            int A=Int32.Parse(Arr[0]);
            int B=Int32.Parse(Arr[1]);
            int[] res1=new int[32];
            int[] res2=new int[32];
            int[] final=new int[32]; 
            int k=0,j=0;
            while(A!=0){
                res1[k++]=A%2;
                A/=2;
            }
             while(B!=0){
                res2[j++]=B%2;
                B/=2;
            }
             for(int i=0;i<32;i++){
                if(res1[i]+res2[i]==1){
                    final[i]=1;
                }else if(res1[i]+res2[i]==0){
                    final[i]=0;
                }else if(res1[i]+res2[i]>1){
                    final[i]=0;
                }
             }
             int final_result=0;
             for (int i = 0; i < final.Length; i++)
             {
                final_result+=(int)Math.Pow(2,i)*final[i];
             }
             System.Console.WriteLine(final_result);
           
        }
    }
}
