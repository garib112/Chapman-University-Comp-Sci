package megan.cards;


public enum Rank {
	R2("2", 2),
	R3("3", 3),
	R4("4", 4),
	R5("5", 5),
	R6("6", 6),
	R7("7", 7),
	R8("8", 8),
	R9("9", 9),
	R10("10", 10),
	JACK("Jack", 11),
	QUEEN("Queen", 12),
	KING("King", 13),
	ACE("Ace", 14);

	private final String name;
	private final int value;

	Rank(String name, int value) {
		this.name = name;
		this.value = value;
	}

	public int getValue() {
		return value;
	}
}
