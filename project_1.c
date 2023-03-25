#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// a var hold the score
//ask question /  get answer / if condition it / move on


int main(){
	int score = 0;
	int code = -1;
	sleep(2);
	printf("this quiz will decide whether you can make as a software engineer or not ( most probably not )\n\n");
	sleep(2);
	printf("to start the game type 0.\nbut to close the game like a weirdo type 1\n\n");
	sleep(2);
	printf("and don't be a moron and type something else : ");
	sleep(2);
	while(1){// check whether they really wanna play this lame ass game
		scanf("%d", &code);
		if(code == 0){
			sleep(2);
			printf("starting the game %%100\n\n");
			break;
		}else if(code ==1){
			sleep(2);
			printf("closing the game\n\n");
			return 0;
			break;
		}else{
			sleep(2);
			printf("fucking moron ... try again: ");
		}
		
	}
	sleep(2);
	printf("first question: what is bill gates's wife name?\n");
	printf("-1- kim kardasian.\n-2-Lena Rhodes.\n-3- melinda GATES\n");
	while(1){// check whether they really wanna play this lame ass game
		
		scanf("%d", &code);
		if(code == 1){
			sleep(2);
			printf("nope\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==2){
			sleep(2);
			printf("lol he wish\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==3){
			sleep(2);
			printf("YES THE LIZARD LADY\n");
			score ++;
			sleep(2);
			break;
		}else{
			printf("again babe\n");
			
		}
		
	}
	sleep(2);
	printf("second question: what is mark zuckerberg's ethnicity?\n");
	printf("-1- black.\n-2-white.\n-3- lizard\n");
	while(1){// check whether they really wanna play this lame ass game
		
		scanf("%d", &code);
		if(code == 1){
			sleep(2);
			printf("lol he wish\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==2){
			sleep(2);
			printf("nope\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==3){
			sleep(2);
			printf("the ZUCC\n");
			score ++;
			sleep(2);
			break;
		}else{
			printf("again babe\n");
			
		}
		
	}
		sleep(2);
	printf("thrid question: who is the tech youtuber with the most subs?\n");
	printf("-1- ME(rich socialist and dev).\n-2-pewdiepie.\n-3- Marques Brownlee\n");
	while(1){// check whether they really wanna play this lame ass game
		
		scanf("%d", &code);
		if(code == 1){
			sleep(2);
			printf("not yet\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==2){
			sleep(2);
			printf("nope, and didn't he say the n-word before ???'\n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==3){
			sleep(2);
			printf("yup\n");
			score ++;
			sleep(2);
			break;
		}else{
			printf("again babe\n");
			
		}
		
	}
		sleep(2);
	printf("fourth question: is HTML a programming languege?\n");
	printf("-1- yes.\n-2-no.\n");
	while(1){// check whether they really wanna play this lame ass game
		
		scanf("%d", &code);
		if(code == 2){
			sleep(2);
			printf("u r so wrong \n");
			sleep(2);
			printf("ur points : %d", score);
			break;
		}else if(code ==1){
			sleep(2);
			printf("you r goddamn  right it is\n");
			score ++;
			sleep(2);
			break;
		}else{
			printf("again babe\n");
			
		}
		
	}
		sleep(2);
	printf("final question: y do you wanna be a software engineer?\n");
	printf("-1- the money.\n-2-the ego.\n-3- introvert\n");
	while(1){// check whether they really wanna play this lame ass game
		
		scanf("%d", &code);
		if(code == 1){
			sleep(2);
			printf("yes siiiir\n");
			sleep(2);
			score ++;

			break;
		}else if(code ==2){
			sleep(2);
			printf("lol really!?!\n");
			sleep(2);
			score ++;

			break;
		}else if(code ==3){
			sleep(2);
			printf("right, but get out your house tho\n");
			score ++;
			sleep(2);
			break;
		}else{
			printf("again babe\n");
			
		}
		
	}
	printf("ur points : %d\n congrates, u can be a great software engineer <3\n", score);
	return 0;
}
