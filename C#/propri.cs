using System;
class carro{
	private int velMax;
	public carro(){
		velMax=120;
	}
	public int mv{
		get{
			return velMax;
		}
		set{
			if(value<0){
				velMax=0;
			}else if(value>300){
				velMax=120;
			}else{
				velMax=value;
			}
		}
	}
}









class propri{
	static void Main(){
		carro c1=new carro();
		c1.mv=200;
		System.Console.WriteLine("Velocidade atual é: {0}", c1.mv);

	}
}
/* get uma propriedade que faz a leitura de dados e set que a atribui as variaveis privadas.*/