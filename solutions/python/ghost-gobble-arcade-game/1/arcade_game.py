

def eat_ghost(power_pellet_active, touching_ghost):
    # BOTH conditions must be true — no pellet means no ghost-eating
    return power_pellet_active and touching_ghost

def score(touching_power_pellet, touching_dot):
    # EITHER counts as a score — this is a classic "or"
    return touching_power_pellet or touching_dot

def lose(power_pellet_active, touching_ghost):
    # You lose only if you're touching a ghost WITHOUT the pellet's protection
    return touching_ghost and not power_pellet_active

def win(has_eaten_all_dots, power_pellet_active, touching_ghost):
    # You win if all dots are eaten AND you haven't lost in the same moment
    return has_eaten_all_dots and not lose(power_pellet_active, touching_ghost)