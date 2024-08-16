import random

rps = ["rock", "paper", "scissors"]

def get_choices():
    player_choice = input("Enter you choice: ")
    computer_choice = random.choice(rps)

    choices = {"player_choice": player_choice, "computer_choice": computer_choice}

    return choices

def check_win(player, computer):
    print(f"you chose {player} and computer chose {computer}")

    if player == computer:
        return "draw"
    elif ((player == "rock" and computer == "scissors") or
          (player == "paper" and computer == "rock") or
          (player == "scissors" and computer == "paper")):
        return "you win"
    else:
        return "you lose"


choice = get_choices()

result = check_win(choice["player_choice"], choice["computer_choice"])

print(result)

food = ["pizza", "hamburger", "cheese"]
dinner = random.choice(food)

print(dinner)

