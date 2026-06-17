EXPECTED_BAKE_TIME = 40   # minutes the lasagna should bake
PREPARATION_TIME = 2      # minutes it takes to prepare one layer

def bake_time_remaining(elapsed_bake_time):
    """Calculate the bake time remaining.

    :param elapsed_bake_time: int - baking time already elapsed.
    :return: int - remaining bake time (in minutes) according to the recipe.

    Function that takes the actual minutes the lasagna has been in the oven
    as an argument and returns how many minutes the lasagna still has to bake
    based on the `EXPECTED_BAKE_TIME`.
    """
    return EXPECTED_BAKE_TIME - elapsed_bake_time

def preparation_time_in_minutes(number_of_layers):
    """Calculate preparation time in minutes based on number of layers.

    :param number_of_layers: int - number of layers in the lasagna.
    :return: int - preparation time (in minutes).
    """
    return number_of_layers * PREPARATION_TIME

def elapsed_cooking_time(number_of_layers, elapsed_bake_time):
    """Calculate the elapsed cooking time.

    :param number_of_layers: int - number of layers in the lasagna.
    :param elapsed_bake_time: int - elapsed cooking time.
    :return: int - total time elapsed (in minutes) preparing and cooking.
    """
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time

def elapsed_time_in_minutes(number_of_layers, elapsed_bake_time):
    """Calculate the elapsed cooking time.

    :param number_of_layers: int - the number of layers in the lasagna.
    :param elapsed_bake_time: int - how long the lasagna has already been baking.
    :return: int - total elapsed time (in minutes) for preparation and baking.
    """
    # Reuse our existing function rather than repeating the multiplication
    return preparation_time_in_minutes(number_of_layers) + elapsed_bake_time
