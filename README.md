# freight-calculator-c
Calculadora de fretes em C

Sobre:
Sistema desenvolvido em linguagem C para simulação de pedidos em loja online, realizando o cálculo automático de fretes e estimativa de data de entrega com base na região selecionada.

Funcionalidades
Seleção por NCM: Identificação de produtos através do código NCM (Nomenclatura Comum do Mercosul).

Cálculo de Frete: Atribuição dinâmica de custos de envio baseada em quatro regiões geográficas.

Gestão de Datas: Utilização da biblioteca time.h para registrar o momento da compra e calcular a previsão de entrega somando os dias úteis.

Resumo de Compra: Exibição detalhada contendo preço do produto, valor do frete, total e datas formatadas.

Especificações Técnicas
Linguagem: C

Bibliotecas Utilizadas:

stdio.h: Operações de entrada e saída.
time.h: Manipulação e formatação de tempo/data.

Compatibilidade: O comando system("cls") é específico para ambientes Windows. Para execução em sistemas Unix/Linux, recomenda-se a substituição por system("clear").

Como Executar
Certifique-se de ter um compilador C instalado (GCC, Clang ou MinGW).

Copie o código fonte para um arquivo chamado main.c.

Abra o terminal e compile o arquivo:

Bash
gcc main.c -o calculadora

Execute o programa

Bash
./calculadora

Fluxograma do Sistema
O fluxo lógico do programa segue as etapas de inicialização, entrada de dados (NCM), validação, seleção regional, processamento de datas e saída de dados (resumo final). <img width="549" height="450" alt="flowchart" src="https://github.com/user-attachments/assets/ae907552-6d6d-48a7-b657-eefc1fff9d21" />

---
*Projeto acadêmico - Engenharia de Computação (UVA)*
---

Freight and Order Calculator in C
System developed in C for online store order simulation, featuring automatic freight calculation and delivery date estimation based on the selected region.

Features
NCM Selection: Product identification (T-shirt, Hoodie, Pants) using the NCM (Mercosul Common Nomenclature) code.

Dynamic Freight Calculation: Automatic assignment of shipping costs and lead times for four geographic regions (North, South, Southeast, and Northeast).

Time Management: Utilization of the time.h library to capture the purchase timestamp and calculate the projected delivery date based on transit days.

Order Summary: Formatted output containing individual prices, freight charges, total amount, and real-time timestamps.

Technical Specifications
Language: C

Libraries: stdio.h (I/O operations) and time.h (Time/Date manipulation).

Compatibility: Developed for Windows environments due to the use of system("cls"). For Unix/Linux systems, it is recommended to replace it with system("clear").

How to Run
Compilation:
Ensure you have a C compiler installed (GCC, Clang, or MinGW).

Bash
gcc main.c -o calculator
Execution:

Bash
./calculator

System Flowchart
The program's logical flow follows the stages of initialization, data entry (NCM), validation, regional selection, date processing, and data output (final summary).<img width="549" height="450" alt="flowchart" src="https://github.com/user-attachments/assets/8eff53e7-2d48-42ee-a05e-352945e05da6" />

---
*Academic Project - Computer Engineering (UVA)*
