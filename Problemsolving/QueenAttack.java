import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class QueenAttack {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int rQ = in.nextInt();
        int cQ = in.nextInt();
        List<HashSet<Integer>> ll = new ArrayList<HashSet<Integer>>();
        List<HashSet<Integer>> ll2 = new ArrayList<HashSet<Integer>>();
        for (int i=0;i<=n;i++){
            ll.add(new HashSet<Integer>());
            ll2.add(new HashSet<Integer>());
        }
        for(int a0 = 0; a0 < k; a0++){
            int r = in.nextInt();
            int c = in.nextInt();
            ll.get(r).add(c);
            ll2.get(c).add(r);
               
        }
        
        long ans = 0;
        
        for (int i=cQ-1;i>=1;i--){
            if (ll.get(rQ).contains(i)){
                break;
            }
            ans++;
        }
        
        for (int i=cQ+1;i<=n;i++){
            if (ll.get(rQ).contains(i)){
                
                break;
            }
            ans++;
        }
        
        for (int i=rQ-1;i>=1;i--){
            if (ll2.get(cQ).contains(i)){
                
                break;
            }
            ans++;
        }
        
        for (int i=rQ+1;i<=n;i++){
            if (ll2.get(cQ).contains(i)){
                
                break;
            }
            ans++;
        }
        
        int cc = cQ-1;
        for (int i=rQ-1;i>=1;i--){
            if (cc==0 || ll.get(i).contains(cc)){
                break;
            }
            cc--;
            ans++;
        }
        
        cc = cQ-1;
        for (int i=rQ+1;i<=n;i++){
            if (cc==0 || ll.get(i).contains(cc)){
                break;
            }
            cc--;
            ans++;
        }
        
        cc = cQ+1;
        for (int i=rQ+1;i<=n;i++){
            if (cc==n+1 || ll.get(i).contains(cc)){
                break;
            }
            cc++;
            ans++;
        }
        
        cc = cQ+1;
        for (int i=rQ-1;i>=1;i--){
            if (cc==n+1 || ll.get(i).contains(cc)){
                break;
            }
            cc++;
            ans++;
        }
        
        System.out.println(ans);
    }
}
