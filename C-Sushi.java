import java.util.*;

class Main
{
  public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    
    int[] arr1 = new int[n];
    for(int i=0; i<n; i++)
    {
      arr1[i] = sc.nextInt();
    }
    
    int[] arr2 = new int[m];
    for(int i=0; i<m; i++)
    {
      arr2[i] = sc.nextInt();
    }
    Arrays.sort(arr1);
    Arrays.sort(arr2);
    
    int ans = 0;
    int i = 0;
    int j = 0;
    while(i<n && j<m)
    {
      if(2*arr1[i]>=arr2[j])
      {
        ans++;
        i++;
        j++;
      }
      else
      {
        i++;
      }
    }
    
    System.out.println(ans);
  }
}