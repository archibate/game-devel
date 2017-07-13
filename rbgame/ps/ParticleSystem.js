<!DOCTYPE HTML>

<html><body>

		<canvas id="canvas1" width=400 height=400>
		</canvas>
		<br/>
		<canvas id="canvas2" width=400 height=300>
		</canvas>

		<script type="text/javascript" src="Color.js"></script>
		<script type="text/javascript" src="Vector2.js"></script>
		<script type="text/javascript" src="Particle.js"></script>
		<script type="text/javascript" src="ChamberBox.js"></script>
		<script type="text/javascript" src="ParticleSystem.js"></script>
		<script type="text/javascript" src="main.js"></script>

		<script type="text/javascript"><!--

function draw1(id) {
	var canvas = document.getElementById(id);

	if (canvas == null)
			return false;

	var context = canvas.getContext("2d");

	context.fillStyle = "#EEEEFF";
	context.fillRect(0, 0, 400, 400);

	context.beginPath();
	context.fillStyle = 'rgb(100, 255, 100)';
	context.strokeStyle = 'rgb(0, 0, 100)';

	var r = 100;
	var x0 = 200, y0 = 200;
	var x = 0, y = 1;
	var dig = Math.PI / 30 * 22;
	for (var i = 0; i < 30; i++) {
			var x = Math.sin(i * dig);
			var y = Math.cos(i * dig);
			context.bezierCurveTo(x0 + r * x, y0 + r * y - 100, x0 + r * x + 100, y0 + r * y, x0 + r * x, y0 + r * y);
	}
	context.closePath();
	context.fill();
	context.stroke();
}

function draw21(id) {
	var canvas = document.getElementById(id);

	if (canvas == null)
			return false;

	var context = canvas.getContext("2d");

	context.fillStyle = "cyan";
	context.strokeStyle = "green";

	context.fillRect(0, 120, 100, 100);
	context.strokeRect(0, 0, 100, 100);

	context.fillStyle = "red";
	context.strokeStyle = "blue";

	context.fillRect(240, 0, 100, 100);
	context.strokeRect(240, 120, 100, 100);

	context.clearRect(50, 50, 240, 120);

	context.beginPath();
	context.arc(220, 100, 100, 0, -Math.PI * 2 / 3, true);
	context.closePath();
	context.moveTo(220, 100);
	context.fillStyle = 'rgba(0, 255, 0, 0.25)';
	context.fill();
	context.arc(120, 100, 100, 0, -Math.PI * 2 / 3, true);
	context.lineTo(222, 20);
	context.closePath();
	context.fillStyle = 'rgba(0, 128, 128, 0.25)';
	context.strokeStyle = 'rgba(128, 128, 0, 0.25)';
	context.fill();
	context.stroke();

	context.save();
	context.shadowOffsetX = 10;
	context.shadowOffsetY = 10;
	context.shadowColor = "rgba(100, 100, 100, 0.5)";
	context.shadowBlur = 1.5;

	context.translate(100, 100);
	context.scale(0.5, 0.5);
	context.rotate(Math.PI / 4);
	context.fillRect(0, 0, 100, 100);
	context.restore();

	context.save();
	context.shadowOffsetX = 5;
	context.shadowOffsetY = 5;
	context.shadowColor = "rgba(100, 100, 100, 0.5)";
	context.shadowBlur = 1.5;

	context.transform(2, 1.4, 0.3, 1, 0, 0);
	context.fillRect(0, 0, 100, 100);
	context.restore();

	var lg = context.createLinearGradient(0, 0, 400, 300);
	lg.addColorStop(0, 'red');
	lg.addColorStop(0.5, 'green');
	lg.addColorStop(1, 'blue');

	context.fillStyle = lg;

	var rg = context.createRadialGradient(100, 0, 0, 250, 200, 100);
	rg.addColorStop(0, 'rgb(255, 222, 100)');
	rg.addColorStop(0.3, 'rgb(255, 222, 100)');
	rg.addColorStop(0.6, 'red');
	rg.addColorStop(0.9, 'rgb(140, 60, 32)');
	rg.addColorStop(1, 'rgb(140, 60, 32)');
	context.fillStyle = rg;
	context.beginPath();
	context.moveTo(100, 0);
	context.arc(250, 200, 100, Math.PI, -Math.PI / 3, false);
	//context.arc(250, 200, 100, Math.atan2(200, 150), Math.atan2(200, 150), false);
	context.closePath();
	context.fill();
	//context.fillRect(0, 0, 400, 300);
}

draw1("canvas1");
draw21("canvas2");

var i = 0;
var interal = setInterval(function () {
		if (i == 10)
				i = 0;
		else
				i++;

		context.fillStyle = 'red';
		context.fillRect(10, 10, 60, 60);
		context.globalCompositeOperation('source-over');
}, 1000);

		//-></script>
		<noscript>Your browser does not support Javascript!</noscript>

</body></html>
