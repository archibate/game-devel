// Particle.js

Particle = function(position, velocity, life, color, radius) {
	this.position = position;
	this.velocity = velocity;
	this.acceleration = Vector2.zero;
	this.age = 0;
	this.life = life;
	this.color = color;
	this.radius = radius;
};

