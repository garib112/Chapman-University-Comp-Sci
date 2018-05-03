package megan;

import megan.cards.Card;
import megan.cards.Deck;

import java.util.LinkedList;
import java.util.List;
import java.io.*;

public class Main {

    public static void main(String[] args) {
    	int[] battles = new int[1000], wars = new int[1000], doubleWars = new int[1000];
    	for (int i = 0; i < 1000; i++) {
    		battles[i] = 0;
    		wars[i] = 0;
    		doubleWars[i] = 0;
		}
    	for (int i = 0; i < 1000; i++) {
			Deck deck = Deck.getFullDeck();
			Player pOne = new Player(), pTwo = new Player();
			while (deck.hasCards()) {
				pOne.addCards(deck.drawCard());
				pTwo.addCards(deck.drawCard());
			}
			gameLoop:
			while (pOne.hasCards() && pTwo.hasCards()) {
				Card cOne = pOne.drawCard(), cTwo = pTwo.drawCard();
				if (cOne.isGreaterThan(cTwo)) { //cardOne wins
					//System.out.println("Player one wins a battle.");
					pOne.addCards(cOne, cTwo);
					battles[i]++;
				} else if (cTwo.isGreaterThan(cOne)) { //cardTwo wins
					//System.out.println("Player two wins a battle.");
					pTwo.addCards(cOne, cTwo);
					battles[i]++;
				} else { //this means war
					wars[i]++;
					List<Card> cardsDrawn = new LinkedList<>();
					boolean markedDoubleWar = false;
					cardsDrawn.add(cOne);
					cardsDrawn.add(cTwo);
					while (!cOne.isGreaterThan(cTwo) && !cTwo.isGreaterThan(cOne)) {
						if (cardsDrawn.size() !=2 && !markedDoubleWar) {
							doubleWars[i]++;
							markedDoubleWar = true;
						}

						//Get facedown megan.cards
						if (pOne.hasCards() && pTwo.hasCards()) {
							cOne = pOne.drawCard();
							cardsDrawn.add(cOne);
							cTwo = pTwo.drawCard();
							cardsDrawn.add(cTwo);
						} else {
							break gameLoop;
						}
						if (pOne.hasCards()) {
							cOne = pOne.drawCard();
							cardsDrawn.add(cOne);
						}
						if (pTwo.hasCards()) {
							cTwo = pTwo.drawCard();
							cardsDrawn.add(cTwo);
						}
						if (cOne.isGreaterThan(cTwo)) {
							//System.out.println("Player one wins a war.");
							pOne.addCards(cardsDrawn); //convert set to array
						} else if (cTwo.isGreaterThan(cOne)) {
							//System.out.println("Player two wins a war.");
							pTwo.addCards(cardsDrawn); //convert set to array
						}
					}
				}
			}
		}

		int minBattles = Integer.MAX_VALUE, maxBattles = Integer.MIN_VALUE;
    	double totalBattles = 0;
    	for (int battleCount : battles) {
    		totalBattles += battleCount;
    		minBattles = Math.min(battleCount, minBattles);
    		maxBattles = Math.max(battleCount, maxBattles);
		}
		double avgBattles = totalBattles / battles.length;
		int minWars = Integer.MAX_VALUE, maxWars = Integer.MIN_VALUE;
		double totalWars = 0;
		for (int warCount : wars) {
			totalWars += warCount;
			minWars = Math.min(warCount, minWars);
			maxWars = Math.max(warCount, maxWars);
		}
		double avgWars = totalWars / wars.length;
		double totalDoubleWars = 0;
		for (int doubleWarCount : doubleWars) {
			totalDoubleWars += doubleWarCount;
		}
		double avgDoubleWars = totalDoubleWars / doubleWars.length;



		try
		{
			PrintWriter writer = new PrintWriter("stats.txt");

			writer.write("For 1000 games: \n");
			writer.write("Average number of battles per game: " + avgBattles + "\n");
			writer.write("Average number of wars per game: " + avgWars + "\n");
			writer.write("Average number of double wars per game: " + avgDoubleWars + "\n");
			writer.write("Max number of battles in a game: " + maxBattles + "\n");
			writer.write("Min number of battles in a game: " + minBattles + "\n");
			writer.write("Max number of wars in a game: " + maxWars + "\n");
			writer.write("Min number of wars in a game: " + minWars + "\n");
			writer.flush();
			writer.close();
		}
		catch(Exception e)
			{
				System.out.println(e);
			}


	}

}
