// ChamberBox.js

function ChamberBox(x1, y1, x2, y2) {
	this.apply = function(particle) {
		if (particle.position.x - particle.radius < x1 || particle.position.x + particle.radius > x2)
			particle.velocity.x = -particle.velocity.x;

		if (particle.position.y - particle.radius < y1 || particle.position.y + particle.radius > y2)
			particle.velocity.y = -particle.velocity.y;
	};
}
