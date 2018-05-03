package megan.cards;

public class Card {
	private Suit suit;
	private Rank rank;

	Card(Suit suit, Rank rank) {
		this.suit = suit;
		this.rank = rank;
	}

	public boolean isGreaterThan(Card card) {
		return rank.getValue() > card.rank.getValue();
	}
}
