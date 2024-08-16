import pygame

#initialize pygame
pygame.init()

#set pygame screen
screen = pygame.display.set_mode((800, 600))

#title and icon
pygame.display.set_caption('Space Invaders')
icon = pygame.image.load('god.jpg')
pygame.display.set_icon(icon)

player_img = pygame.image.load('ufo.png')
player_x = 100
player_y = 150

def player():
    screen.blit(player_img, (player_x, player_y))

running = True

#get keys
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False


    screen.fill((0, 0, 0))

    player()
    pygame.display.update()