//accepts Some terminated trust entrys
//only accepts ones with valid signitures
//updates a file for each key
//ratings are made manually using pgp

int main()
{
	if(validate(gets(buff))){
		puts(buff);
		return 0;
	}
	return -1; //returns 1 on error -1 on invalid sig
		

}
