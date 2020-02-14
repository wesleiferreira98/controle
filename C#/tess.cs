using System;
class sala{
	private int qtd_caderias;
	public sala(){
		qtd_caderias=0;
	}
	public int setCadeira{
		get{
			return qtd_caderias;

		}
		set{
			if(value<0){
				qtd_caderias=0;
			}else if(value>100){
				qtd_caderias=100;
			}else{
				qtd_caderias=value;
			}

		}
	}
}
class tess{
	static void Main(){
		sala s1=new sala();
		s1.setCadeira=20;
		System.Console.WriteLine("A quantidade atual de cadeiras são: {0}",s1.setCadeira);

	}
}