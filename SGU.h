/* Arquivo que cont�m as assinaturas ou prot�tipos de todas as fun��es implementadas no sistema */


/*
** Fun��o 1: Menu Principal
    - Respons�vel por invocar o menu principal do sistema
*/
void menu_principal();


/*
** Fun��o 2: Autenticar Administrador
    - Respons�vel pela autentica��o do administrador do sistema
*/
void autentica_adm();


/*
** Fun��o 3: Menu Administrador
    - Respons�vel por fornecer o acesso ao sistema no modo administrador
*/
void menu_administrador();


/*
** Fun��o 4: Cadastrar Aluno
    - Respons�vel por cadastrar um novo aluno no sistema
*/
void cadastrar_aluno();


/*
** Fun��o 5: Cadastrar Disciplina
    - Respons�vel por cadastrar uma disciplina no sistema
*/
void cadastrar_disciplina();


/*
** Fun��o 6: Listar Disciplina
    - Respons�vel por listar a disciplina cadastrada
*/
void listar_disciplina();


/*
** Fun��o 7: Cadastrar Professor
    - Respons�vel por cadastrar um professor no sistema
*/
void cadastrar_professor();


/*
** Fun��o 8: Listar Professor
    - Respons�vel por listar o professor cadastrado
*/
void listar_professor();


/*
** Fun��o 9: Autenticar professor
    - Respons�vel pela autentica��o do professor no sistema
*/
void autentica_professor();


/*
** Fun��o 10: Menu professor
    - Respons�vel por fornecer o acesso ao sistema no modo professor
*/
void menu_professor();


/*
** Fun��o 11: Listar alunos
    - Respons�vel por listar todos os alunos cadastrados no sistema
*/
void listar_alunos();


/*
** Fun��o 12: Filtrar registros de alunos
    - Respons�vel por fornecer o menu de escolha de filtros/buscas de alunos no sistema
*/
void filtrar_registros();


/*
** Fun��o 13: Buscar alunos por turma
    - Respons�vel por selecionar os alunos de uma turma espec�fica e list�-los
*/
void filtrar_alunos_turma();


/*
** Fun��o 14: Buscar aluno por c�digo de matr�cula (identificador)
    - Respons�vel por buscar um determinado aluno fornecendo a sua matr�cula
*/
void filtrar_aluno_id();

/*
** Fun��o 15: Buscar aluno/alunos por nome ou parte do nome
    - Respons�vel por selecionar alunos com primeiro nome ou segundo nome ou sobrenome em comum
*/
void filtrar_aluno_nome();


/*
** Fun��o 16: Ordenar registros de alunos
    - Respons�vel por fornecer o menu de escolha de ordena��o de registros
*/
void ordenar_registros();


/*
** Fun��o 17: Ordenar registros de alunos por matr�cula
    - Respons�vel por ordernar os registros por matr�cula, tanto em ordem crescente quanto em ordem decrescente
*/
void ordenar_matricula();


/*
** Fun��o 18: Buscar por turma e ordenar por matr�cula
    - Respons�vel por buscar alunos de uma turma selecionada e list�-los em ordem crescente de matr�cula
*/
void filtrar_ordenar_registros();


/*
** Fun��o 19: Cadastrar notas
    - Respons�vel por cadastrar as notas (ab1 e ab2) de cada aluno cadastrado no sistema
*/
void cadastrar_notas();


/*
** Fun��o 20: Calcular m�dia das notas
    - Respons�vel por receber como par�metro as notas de cada aluno e retornar a sua m�dia
*/
float calcular_media(float n1, float n2);


/*
** Fun��o 21: Consultar boletim no modo professor
    - Respons�vel pela consulta dos boletins de cada aluno do sistema
*/
void consultar_boletim_professor();


/*
** Fun��o 22: Buscar alunos aprovados e reprovados
    - Respons�vel por buscar alunos aprovados e reprovados da primeira turma com base na m�dia
*/
void filtrar_situacao_turma1();


/*
** Fun��o 23: Buscar alunos aprovados e reprovados
    - Respons�vel por buscar alunos aprovados e reprovados da segunda turma com base na m�dia
*/
void filtrar_situacao_turma2();


/*
** Fun��o 24: Autenticar aluno
    - Respons�vel pela autentica��o de um determinado aluno no sistema
*/
void autentica_aluno();


/*
** Fun��o 25: Menu aluno
    - Respons�vel por fornecer acesso ao sistema no modo aluno
*/
void menu_aluno();


/*
** Fun��o 26: Consultar boletim no modo aluno
    - Respons�vel pela consulta do boletim do aluno que acessou o sistema
*/
void consultar_boletim_aluno();


/*
** Fun��o 27: Criar um usu�rio do tipo Aluno no sistema
    - Respons�vel pela cria��o de um usu�rio(�nico) e de uma senha para cada aluno objetivando
      o acesso ao sistema
*/
void criar_usuario_aluno(int inicializador);


/*
** Fun��o 28: Ordenar por nome
    - Respons�vel pela ordena��o dos registros de usu�rios em ordem alfab�tica
*/
void ordenar_nome();
