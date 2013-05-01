#include <stdio.h>
#include <stdlib.h>
#define MWL 	255
#define DS	255
typedef node struct{
		int child[DS];
		char *matches;
		};
node *tree[MWL*DS];
int root;
int cnode;
int nfnode;
void
next()
{
	putchar('\n');
}
void
die(void)
{
	exit(0);
}
int
createnode(int parent, int child)
{
	int n
	if(!parent) 	//root
		n=0;
		root=0;
	else{		//not root, add info to parent
		n=nfnode;
		tree[parent]->child[child]=n;
	}
	tree[n]=malloc(sizeof);
	nfnode++;
}
int
init() //clears the tree and creates a root node
{
	int i=0;
	for(i=0;i<=MWL*DS;i++)
		tree[i]=0;
	return createnode(0,0);
}
void
main()
{
	char a;
	if(init())
		exit(1);

	while(1){
	 	a=getchar();
		switch(a){
			case '\n': next(); 	break;
			case EOF: goto dbloaded; break;
			default: advance(a); 	break;
		}
	}//while(1)
dbloaded:

}
