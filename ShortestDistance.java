import java.util.*;
public class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int R=sc.nextInt();
		Map<Integer,List<int[]>>g=new HashMap<>();
		while(R-- >0){
			int a=sc.nextInt();
			int b=sc.nextInt();
			int dist=sc.nextInt();
			if(!g.containsKey(a)){
				g.put(a,new ArrayList<>());
			}
			g.get(a).add(new int[]{b,dist});
			if(!g.containsKey(b))
			g.put(b,new ArrayList<>());
			g.get(b).add(new int[]{a,dist});
		}
		int start=sc.nextInt();
		int end=sc.nextInt();
		Set<Integer> vis=new HashSet<>();
		PriorityQueue<int []> pq=new PriorityQueue<>((x,y)->{return x[1]-y[1];});
		pq.add(new int[]{start,0});
		while(!pq.isEmpty()){
			int curr[]=pq.poll();
			int currCity=curr[0];
			int currDist=curr[1];
			if(currCity==end){
				System.out.println(currDist);
				return;
			}
			if(vis.contains(currCity))
			continue;
			vis.add(currCity);
			if(g.containsKey(currCity)){
				for(int ocar[]:g.get(currCity)){
					int oc=ocar[0],ocd=ocar[1];
					if(!vis.contains(oc)){
						pq.add(new int[]{oc,currDist+ocd});
					}
				}
			}
		}
	}
}
