
import time
import os
import sys

# Terminal color codes
RED = "\033[91m"
YELLOW = "\033[93m"
GREEN = "\033[92m"
RESET = "\033[0m"

def clear_console():
    os.system('cls' if os.name == 'nt' else 'clear')

def draw_progress_bar(current, total, bar_length=50):
    percentage = current / total
    filled_length = int(bar_length * percentage)

    # Color selection
    if percentage <= 0.33:
        color = RED
    elif percentage <= 0.66:
        color = YELLOW
    else:
        color = GREEN

    bar = color + "#" * filled_length + "-" * (bar_length - filled_length) + RESET
    print(f"\n{i}/{total}".center(80))
    print(bar.center(80))

def beep():
    print("\a", end='')  # Beep sound

if __name__ == "__main__":
    try:
        n = int(input("Enter number of seconds: "))
        for i in range(1, n + 1):
            clear_console()
            draw_progress_bar(i, n)
            time.sleep(1)
        clear_console()
        print("\n" + "TIMER COMPLETE!".center(80))
        beep()
    except KeyboardInterrupt:
        print("\nInterrupted by user.")
        sys.exit(0)


