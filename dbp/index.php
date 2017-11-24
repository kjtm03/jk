<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" href="estilos.css">
<link href="https://fonts.googleapis.com/css?family=Acme" rel="stylesheet">
	<title>SuperChat</title>
</head>
<body>
	<div id="contenedor">
		<div id="caja-chat">
			<div id="chat">
				<div id="datos_chat">
					<span style="color: red">Jogurmund: </span>
					<span>Respawn en 3 2 1...</span>
					<span style="float: right;">09:04 pm</span>
				</div>
			</div>
		</div>
		<form method="POST" action="index.php">
			<input type="text" name="nombre" placeholder="Ingrese su nombre">
			<textarea name="mensaje" placeholder="Ingrese su mensaje"></textarea>
			<input type="submit" name="enviar" value="Enviar">
		</form>
	</div>
</body>
</html>