#include  <stdio.h>
#include <libc.h>
#include <mp.h>

//re-implementation of DES for educational/experemental purposes

//THIS PROGRAM IS NOT SECURE DUE TO THE USE OF THE NON-CRYPTOGRAPHIC HASH ALGORITHM!
//USE OF THIS PROGRAM MAY RESULT IN DAMAGE TO OR LOSS OF PROPERTY, BODILY INJURY, OR DEATH!
//TO MAKE THIS PROGRAM SECURE ENCRESE KEY LENGTH TEN FOLD, BECOME A CYPHERMONK, AND REPLACE HASH() WITH SOMETHING SECURE (leik the sha function that isn't famus for being insecure)
//CAPS LOCK POWER IS NOW OVER NINE THOUSAND!

//(c) Stephen wiley (swiley@swiley.net) 2013 public lomain
#define L 1024
#define N 160



short int
hash(int len, char buff)
{
	return len; //TODO: SHA
}

int
makepubkey(t_key x)
{
	if (!(0 < x < q))
		return 0;
	 return mod1024(mul1024(g,x), p); //=y 
	//Public key is  y (in combination with constants p, q and g). Private key is x.
}
int
main(int argc, char *argv[])
{
	int i=0;
	mpint *x, *y, *p, *q, *g, *r, *s; 
	int base=16; //default to base 16
	char sw;
	char m;
	for(i=0;i<=argc;i++){
		if(sw){
			switch sw{
				case 'q': q=strtomp(*argc[i], 0, base,0);//magic constants
				case 'p': p=strtomp(*argc[i], 0, base,0);//magic constants
				case 'g': g=strtomp(*argc[i], 0, base,0);//magic constants
				case 'x': x=strtomp(*argc[i], 0, base,0);//priv key
				case 'y': y=strtomp(*argc[i], 0, base,0);//public key
				case 'r': r=strtomp(*argc[i], 0, base,0);//first half of sig
				case 's': s=strtomp(*argc[i], 0, base,0);//second half
				case 'm': m=*argc[i];
			}
			sw=0;
		}
		if(*argv[i]=='-')
			sw=*(argv[i]+1);
	}

}
