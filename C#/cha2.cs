using System;
class sala2{
	private int[] qtd_cadeira= new int[5]{1,2,4,5,7};
	public int this[int i]{
		get{
			return qtd_cadeira[i];
		}
		set{
			if(value<0){
				qtd_cadeira[i]=0;
			}else if(value>80){
				qtd_cadeira[i]=80;
			}else{
				qtd_cadeira[i]=value;
			}

		}
	}
}
class cha2{
	static void Main(){
		sala2 z=new sala2();
		z[4]=12;
		for(int a=0;a<5;a++){
			System.Console.WriteLine("A quantidade atual de cadeiras na sala é de {0}",z[a]);
		}
	}	
}