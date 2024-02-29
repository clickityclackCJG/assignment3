a.out:
	gcc decimal_to_hexadecimal.c

clean:
	rm a.out

test: a.out
	bash test.sh
