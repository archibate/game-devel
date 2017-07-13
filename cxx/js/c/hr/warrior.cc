class Warrior {
public:
	enum Type {
		HT_UNINIT = 0,
		HT_TILE,
		HT_VBAR,
		HT_HBAR,
		HT_BOXY,
	};

private:
	Type type;
	int left;
	int top;

public:
	Warrior(Type type = HT_UNINIT, int left = 0, int top = 0)
		: type(type), left(left), top(top) {}
};


class Game {
	Warrior board[6][6];

	Game()
	{
	}

	move(int x, int y)
	{
	}
};
