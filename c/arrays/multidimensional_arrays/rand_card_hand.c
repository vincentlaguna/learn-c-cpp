#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards;
  int rank;
  int suit;
  const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','k','a'};
  const char suit_code[] = {'c','d','h','s'};
  srand((unsigned) time(NULL));
  
  printf("Enter the number of cards in hand: ");
  scanf("%d", &num_cards);
  
  printf("Your hand: ");
  while(num_cards > 0)
  {
    suit = rand() % NUM_SUITS; // Picks a random suit
    rank = rand() % NUM_RANKS; // Picks a random rank
    if(!in_hand[suit][rank])
    {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %c%c", rank_code[rank], suit_code[suit]);
    }
  }
  printf("\n");
  return 0;  
}