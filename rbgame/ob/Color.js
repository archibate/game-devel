// Color.js

Color = function(r, g, b) { this.r = r; this.g = g; this.b = b; };

Color.prototype = {
	copy: function(color) { return new Color(this.r, this.g, this.b); },
	add : function(c) { return new Color(this.r + c.r, this.g + c.g, this.b + c.b); },
	multiply : function(s) { return new Color(this.r * s, this.g * s, this.b * s); },
	modulate : function(c) { return new Color(this.r * c.r, this.g * c.g, this.b * c.b); },

	averageWith: function(color, t) { return new Color(
		this.r * t + color.r * (1 - t),
		this.g * t + color.g * (1 - t),
		this.b * t + color.b * (1 - t)); },

	toStyleString: function(alpha) { if (alpha == undefined)
			return "rgb("
				+ Math.floor(this.r * 255) + ","
				+ Math.floor(this.g * 255) + ","
				+ Math.floor(this.b * 255) + ")";
		else
			return "rgba("
				+ Math.floor(this.r * 255) + ","
				+ Math.floor(this.g * 255) + ","
				+ Math.floor(this.b * 255) + ","
				+ alpha.toFixed(2) + ")"; },
};

Color.black = new Color(0, 0, 0);
Color.red = new Color(1, 0, 0);
Color.green = new Color(0, 1, 0);
Color.blue = new Color(0, 0, 1);
Color.cyan = new Color(0, 1, 1);
Color.purple = new Color(1, 0, 1);
Color.yellow = new Color(1, 1, 0);
Color.white = new Color(1, 1, 1);
