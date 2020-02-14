/*Indexadores: menbro da classe que que permite que os objetos dessa classe sejam inplementados como arrey  */
using System;
class carro{
	private int[] velMax=new int [5]{80,70,35,67,45};
	public carro(){
		
	}
	public int this[int i]{
		get{
			return velMax[i];
		}
		set{
			if(value<0){
				velMax[i]=0;
			}else if(value>300){
				velMax[i]=120;
			}else{
				velMax[i]=value;
			}
		}
	}
}









class indexador{
	static void Main(){
		carro c1=new carro();
		c1[4]=200;
		for(int a=0;a<5;a++){
			System.Console.WriteLine("Velocidade atual é: {0}", c1[a]);
		}
		

	}
}