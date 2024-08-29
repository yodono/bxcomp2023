build:
	touch results && \
	gcc sol.c -o sol -g -Wall -Wextra

run:
	./sol < entrada.in > results

test:
	@if git diff -b --no-index --color=always results saida.out > diff_output.txt; then \
		echo "testes passaram!"; \
	else \
		echo "testes falharam... veja diff_output.txt para ver a diferença entre os valores"; \
		cat diff_output.txt; \
	fi

clean:
	rm -f sol results diff_output.txt

itwork: clean build run test

