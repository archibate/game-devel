// main.js

var ps = new ParticleSystem();
ps.effectors.push(new ChamberBox(0, 0, 400, 400));
var dt = 0.01;

function sampleDirection(angle1, angle2) {
	var t = Math.random();
	var theta = angle1 * t + angle2 * (1 - t);
	return new Vector2(Math.cos(theta), Math.sin(theta));
}

function sampleColor(color1, color2) {
	var t = Math.random();
	return color1.averageWith(color2, t);
}

function my_clear() {
	if (false) clearCanvas();
	else {
		ctx.fillStyle = "rgba(255, 255, 255, 0.1)";
		ctx.fillRect(0, 0, canvas.width, canvas.height);
	}
}

function colli_step() {
	ps.emit(new Particle(new Vector2(200, 200), sampleDirection(Math.PI * 1.75, Math.PI * 2).multiply(250), 3,
		sampleColor(Color.blue, Color.purple), 5));
	ps.simulate(dt);
	my_clear();
	ps.render(ctx);
}

canvas = document.getElementById('canvas1');
ctx = canvas.getContext('2d');

newMousePosition = new Vector2(200, 200);
lastMousePosition = new Vector2(200, 200);

canvas.onmousemove = function(e) {
	if (e.layerX || e.layerX == 0) {
		e.target.style.position = 'relitive';
		newMousePosition = new Vector2(e.layerX, e.layerY);
	} else {
		newMousePosition = new Vector2(e.offsetX, e.offsetY);
	}
}

function itatv_step() {
	var position = newMousePosition;
	var velocity = newMousePosition.subtract(lastMousePosition).multiply(10);
	var life = 1;
	var color = sampleColor(Color.blue, Color.purple);
	var size = 5;
	lastMousePosition = newMousePosition;

	ps.emit(new Particle(position, velocity, life, color, size));
	ps.simulate(dt);
	my_clear();
	ps.render(ctx);
}

var interval = setInterval(function() {
	colli_step(ctx);
}, 3200 * dt);
interval();

//if (false) start("basicParticleSystemCanvas", basic_step); else start("collisionChamberCanvas", colli_step);

