package Exemplo1;

public class Exemplo1 {
	public static void main( String[] args){
		float media = 7.3f;
		
		//Aprovado > 7
		//Recupera��o - 5 at� 6.9
		//Reprovado < 5
		
		if( media > 7){
			System.out.println("Aprovado");
		}else if(media >=5){
			System.out.println("Recupera��o");
		}else{
			System.out.println("Reprovado");
		}
	}
}