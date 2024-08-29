@echo off
fc /b results saida.out > diff_output.txt
if %errorlevel% equ 0 (
    echo testes passaram!
) else (
    echo testes falharam... veja diff_output.txt para ver a diferença entre os valores
    type diff_output.txt
)
