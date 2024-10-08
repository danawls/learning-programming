import pygame

pygame.init()

SCREEN_WIDTH = 1000
SCREEN_HEIGHT = 800
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))

pygame.display.set_caption('the real gansters')

clock = pygame.time.Clock()

pham = pygame.image.load('god Small.png')
pham_size = pham.get_rect().size
pham_width = pham_size[0]
pham_heitgh = pham_size[1]
pham_x_pos = SCREEN_WIDTH / 2
pham_y_pos = SCREEN_HEIGHT / 2

trump = pygame.image.load('trump.png')
trump_size = trump.get_rect().size
trump_width = trump_size[0]
trump_heitgh = trump_size[1]
trump_x_pos = SCREEN_WIDTH / 2
trump_y_pos = SCREEN_HEIGHT / 2

to_x = 0
to_y = 0

MOVE_SPEED = 0.5

GRAVITY = 0.7

running = True
while running:
    dt = clock.tick(144)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                to_x = -MOVE_SPEED
            elif event.key == pygame.K_RIGHT:
                to_x = MOVE_SPEED
            elif event.key == pygame.K_UP:
                to_y = -MOVE_SPEED
            elif event.key == pygame.K_DOWN:
                to_y = MOVE_SPEED
        elif event.type == pygame.KEYUP:
            if event.key in (pygame.K_LEFT, pygame.K_RIGHT):
                to_x = 0
            elif event.key in (pygame.K_UP, pygame.K_DOWN):
                to_y = 0

    if pham_x_pos < 0:
        pham_x_pos = 0
    elif pham_x_pos > SCREEN_WIDTH - pham_width:
        pham_x_pos = SCREEN_WIDTH - pham_width

    if pham_y_pos < 0:
        pham_y_pos = 0
    elif pham_y_pos > SCREEN_HEIGHT - pham_heitgh:
        pham_y_pos = SCREEN_HEIGHT - pham_heitgh

    pham_x_pos += to_x * dt
    pham_y_pos += to_y * dt

    pham_rect = pham.get_rect()
    pham_rect.left = pham_x_pos
    pham_rect.top = pham_y_pos

    trump_rect = trump.get_rect()
    trump_rect.left = trump_x_pos
    trump_rect.top = trump_y_pos

    if pham_rect.colliderect(trump_rect):
       print("collusion")

    # pham_y_pos += GRAVITY * dt

    screen.fill((255, 255, 100))
    screen.blit(pham, (pham_x_pos, pham_y_pos))
    screen.blit(trump, (trump_x_pos,trump_y_pos))

    pygame.display.update()


pygame.quit()