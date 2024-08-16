import pygame

#initialize pygame
pygame.init()

#set pygame screen
screen = pygame.display.set_mode((800, 600))

#title and icon
pygame.display.set_caption('Space Invaders')
icon = pygame.image.load('god.jpg')
pygame.display.set_icon(icon)

running = True

#get keys
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False


    screen.fill((0, 0, 0))
    pygame.display.update()