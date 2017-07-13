// Ray3.js

Ray3 = function(origin, direction) { this.origin = origin; this.direction = direction; };

Ray3.prototype = {
	getPoint : function(t) { return this.origin.add(this.direction.multiply(t)); },
};


IntersectResult = function() {
	this.geometry = null;
	this.distance = 0;
	this.position = Vector3.zero;
	this.normal = Vector3.zero;
};

IntersectResult.noHit = new IntersectResult();
