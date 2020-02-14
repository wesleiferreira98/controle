using System;
class caa{
	public int fat(int n){
		int res;
		if(n<=1){
			res= 1;
		}else{
			res=n*fat(n-1);
		}
		return res;

	}
}
class bass{
	static void Main(){
		caa c1= new caa();
		System.Console.WriteLine("O fatorial é: {0}",c1.fat(10));
	}
}