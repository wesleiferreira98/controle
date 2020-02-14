using System;
class sala{
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
class cha{
	static void Main(){
		sala x=new sala();
		x[4]=60;
		for(int a=0;a<5;a++){
			System.Console.WriteLine("A quantidade atual de cadeiras na sala é de {0}",x[a]);
		}

	}
}