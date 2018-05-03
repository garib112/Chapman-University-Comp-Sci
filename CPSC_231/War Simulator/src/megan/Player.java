package megan;

import megan.cards.Card;
import megan.cards.Deck;

import java.util.Collections;
import java.util.List;
import java.util.Random;

class Player {
	private final Deck playerCards = new Deck();
	Random random = new Random();

	void addCards(Card... cards) {
		switch (random.nextInt(2)) {
			case 0:
				for (Card card: cards) {
					playerCards.add(card);
				}
				break;
			case 1:
				for (int i = cards.length - 1; i >= 0; i--) {
					playerCards.add(cards[i]);
				}
				break;
		}
	}

	void addCards(List<Card> cards) {
		Collections.shuffle(cards);
		for (Card card: cards) {
			addCards(card);
		}
	}

	Card drawCard() {
		return playerCards.drawCard();
	}

	boolean hasCards() {
		return playerCards.hasCards();
	}
}
