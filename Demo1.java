package ooday01;

public class Demo1 {

	public static void main(String[] args) {
		
		
		// 外层控制的是行数
		for(int k=0; k<5; k++) {
			// 控制每一行的列数,
			for(int i=0; i<5; i++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		/*
		for(int k=0; k<5; k++) {
			System.out.print("******");
			System.out.println();
		}
		*/
		/*
		for(int i=0; i<5; i++) {
			System.out.print("*");
		}
		*/
		
		/*
		System.out.print("******");
		System.out.println();
		
		System.out.print("******");
		System.out.println();
		
		System.out.print("******");
		System.out.println(); 
		*/
		
	}

}
