// CheckerMaterial.js

CheckerMaterial = function(scale, reflectiveness) { this.scale = scale; this.reflectiveness = reflectiveness; };

CheckerMaterial.prototype = {
	sample : function(ray, position, normal) {
		//pos = position//.transrot_xz2d(normal.transrot_xz2d(new Vector3(1.0, 0.0)));
		//pos_x = pos.x;
		//pos_z = pos.z;
		if (Math.abs(Math.floor(position.x * this.scale) + Math.floor(position.z * this.scale)) % 2 < 1)
			return Color.black;
		else
			return Color.white;
	},
};
