build:
	gcc sol.c -o sol

run:
	./sol < entrada.in > results

test:
	@if git diff -b --no-index --color=always results saida.out > diff_output.txt; then \
		echo "testes passaram!"; \
	else \
		echo "testest falharam... veja diff_output.txt"; \
		cat diff_output.txt; \
	fi

clean:
	rm sol results diff_output.txt

itwork: clean build run test

