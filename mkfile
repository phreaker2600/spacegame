
game:	main.c bitmaps.h
	gcc /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL main.c -o game
clean:	
	#rm game #TODO: fix the clean rule
	rm sort
run: game
	./game
sort:	sort.c
	cc sort.c -o sort
paint:	paint.c
	gcc /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL paint.c -o paint
spacebert: spacebert.c
	gcc /System/Library/Frameworks/GLUT.framework/GLUT /System/Library/Frameworks/OpenGL.framework/OpenGL spacebert.c -o spacebert

dsa:	dsa.c
	gcc dsa.c -lmp -o dsa
