//Exercicio c�digo indentado e sem indenta��o//
//EXEMPLO SEM INDENTA��O//
function pesquisacep(valor) {
var cep = valor.replace(/\D/g, '');
if (cep !== "") {
var validacep = /^[0-9]{8}$/;
if(validacep.test(cep)) {
document.getElementByld('endereco').value="...";
document.getElementByld('bairro').value="...";
document.getElementByld('cidade').value="...";
document.getElementByld('estado').value="...";
var script = document.createElement('script');
script.src = '//viacep.com.br/ws/'+ cep + '/json/?callback=meu_calback';
document.body.appendChild(script);



//EXEMPLO COM INDENTA��O//
function pesquisacep(valor) {
	
	//Nova vari�vel "cep" somente com d�gitos.
	var cep = valor.replace(/\D/g, '');
	
	//verifica se o campo cep tem o valor informado.
	if (cep !== "") {
		
		//Express�o regular para validar o CEP.
		var validacep = /^[0-9]{8}$/;
		
		//Valida o formato do CEP
		if(validacep.test(cep)) {
			
			//Preenche os campos com "..." enquanto consulta o webservice.
			document.getElementByld('endereco').value="...";
			document.getElementByld('bairro').value="...";
			document.getElementByld('cidade').value="...";
			document.getElementByld('estado').value="...";
			
			//cria um elemento javascript.
			var script = document.createElement('script');
			
			//sincroniza o callback.
			script.src = '//viacep.com.br/ws/'+ cep + '/json/?callback=meu_calback';
			
			//insere script no documento e carrega o conte�do.
			document.body.appendChild(script);
			
		}
	}

