// PlasticMaterial.js

PlasticMaterial = function(diffuse, reflectiveness) {
	this.diffuse = diffuse;
	this.reflectiveness = reflectiveness;
};

// global temp
var lightDir = new Vector3(1, 1, 1).normalize();
var lightColor = Color.white;

PlasticMaterial.prototype = {
	sample: function(ray, position, normal) {
		var NdotL = normal.dot(lightDir);
		var H = (lightDir.subtract(ray.direction)).normalize();
		var diffuseTerm = this.diffuse.multiply(Math.max(NdotL, 0));
		return lightColor.modulate(diffuseTerm);
	}
};

