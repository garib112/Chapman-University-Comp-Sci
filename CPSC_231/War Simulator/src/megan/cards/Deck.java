package megan.cards;

import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class Deck {
	private final List<Card> cards = new LinkedList<>();

	public static Deck getFullDeck() {
		Deck deck = new Deck();
		for (Suit suit : Suit.values()) {
			for (Rank rank : Rank.values()) {
				deck.cards.add(new Card(suit, rank));
			}
		}
		Collections.shuffle(deck.cards);
		return deck;
	}

	public void add(Card card) {
		cards.add(card);
		if (cards.size() > 52) {
			throw new Error("Deck got too big somehow.");
		}
	}

	public Card drawCard() {
		if (!hasCards()) {
			throw new Error("Tried to draw from empty deck.");
		}
		return cards.remove(0);
	}

	public boolean hasCards() {
		return !cards.isEmpty();
	}
}
