##
## EPITECH PROJECT, 2018
## COREWAR Bootstrap
## File description:
## A simple Makefile to compile
##

CFLAGS	=	-W -Wall -Wextra -Wshadow -Werror -I ./lib/include -I./include

LDFLAGS	=	-lmy -L./lib

CC	=	gcc

all: lib step1-1 step1-2 step1-3 step1-4 step1-5 step2-1 step2-2

lib:
	$(MAKE) -C ./lib/my all

step1-1:
	$(CC) -o ./part1/step1/write-some-text $(CFLAGS) ./part1/step1/write-some-text.c $(LDFLAGS)

step1-2:
	$(CC) -o ./part1/step2/write-a-number-as-text $(CFLAGS) ./part1/step2/number-as-text.c $(LDFLAGS)

step1-3:
	$(CC) -o ./part1/step3/write-a-number-as-int $(CFLAGS) ./part1/step3/write-a-number-as-int.c $(LDFLAGS)

step1-4:
	$(CC) -o ./part1/step4/without-padding $(CFLAGS) ./part1/step4/without-padding.c $(LDFLAGS)

step1-5:
	$(CC) -o ./part1/step5/with-padding $(CFLAGS) ./part1/step5/with-padding.c $(LDFLAGS)

step2-1:
	$(CC) -o ./part2/step1/yolotron-asm $(CFLAGS) ./part2/step1/yolotron-asm.c -lmy -L./lib $(LDFLAGS)

step2-2:
	$(CC) -o ./part2/step2/yolotron-vm $(CFLAGS) ./part2/step2/yolotron-vm.c $(LDFLAGS)

clean:
	$(MAKE) -C ./lib/my clean
	$(RM) -rf *.o

fclean:	clean
	$(RM) ./part1/step1/write-some-text
	$(RM) ./part1/step2/write-a-number-as-text
	$(RM) ./part1/step3/write-a-number-as-int
	$(RM) ./part1/step4/without-padding
	$(RM) ./part1/step5/with-padding
	$(RM) ./part2/step1/yolotron-asm
	$(RM) ./part2/step2/yolotron-vm
	$(MAKE) -C ./lib/my fclean

re:	fclean all

.PHONY: all clean fclean re lib step1-1 step1-2 step1-3 step1-4 step1-5
