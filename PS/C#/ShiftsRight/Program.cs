// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace ShiftRight
{
    class Program
    {
        public static void Shifts(string[] Ar, int mod)
        {
            int N = Ar.Length;
            int item = N - mod;
            for (int j = item; j < N; j++)
            {
                Console.Write(Ar[j] + " ");
            }
            for (int i = 0; i < item; i++)
            {
                Console.Write(Ar[i] + " ");
            }
        }
        private static void Main(string[] args)
        {
            string[] A = Console.ReadLine().Split(' ');
            int size = Int32.Parse(A[0]);
            int times = Int32.Parse(A[1]);
            string[] Arr = Console.ReadLine().Split(' ');
            int mod = times % size;
            Shifts(Arr,mod);
        }
    }
}