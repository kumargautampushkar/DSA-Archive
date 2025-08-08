import random

class SudokuGenerator:
    """
    A class to generate random Sudoku puzzles.
    """
    def __init__(self, size=9, difficulty=0.5):
        """
        Initializes the Sudoku generator.

        Args:
            size (int): The size of the Sudoku grid (must be a perfect square).
            difficulty (float): A value between 0 and 1. Higher values mean more empty cells.
                               0.5 is a good starting point for a medium puzzle.
        """
        if int(size**0.5)**2 != size:
            raise ValueError("Size must be a perfect square.")
        self.size = size
        self.box_size = int(size**0.5)
        self.difficulty = difficulty
        self.board = [[0] * self.size for _ in range(self.size)]
        self._generate_solution()
        self._create_puzzle()

    def _generate_solution(self):
        """
        Generates a complete, valid Sudoku board.
        """
        # A base pattern for a 9x9 Sudoku
        base = 3
        side = base * base

        def pattern(r, c):
            return (base * (r % base) + r // base + c) % side

        def shuffle(s):
            return random.sample(s, len(s))

        rBase = range(base)
        rows = [g * base + r for g in shuffle(rBase) for r in shuffle(rBase)]
        cols = [g * base + c for g in shuffle(rBase) for c in shuffle(rBase)]
        nums = shuffle(range(1, base * base + 1))

        # Produce a randomized board
        self.board = [[nums[pattern(r, c)] for c in cols] for r in rows]

    def _create_puzzle(self):
        """
        Removes numbers from the solved board to create a puzzle.
        The number of removed cells is based on the difficulty level.
        """
        squares = self.size * self.size
        empties = int(squares * self.difficulty)
        
        for p in random.sample(range(squares), empties):
            self.board[p // self.size][p % self.size] = 0

    def get_puzzle(self):
        """
        Returns the generated puzzle.
        """
        return self.board

    def print_board(self):
        """
        Prints the Sudoku board in a readable format.
        """
        if not self.board:
            print("No board generated yet.")
            return

        for i in range(self.size):
            if i > 0 and i % self.box_size == 0:
                # Print horizontal line
                print("-" * (self.size * 2 + self.box_size - 1))
            
            for j in range(self.size):
                if j > 0 and j % self.box_size == 0:
                    # Print vertical line
                    print("| ", end="")
                
                cell = self.board[i][j]
                print(f"{cell if cell != 0 else '.'} ", end="")
            print()
        
    def print_board_as_TC(self):
        """
        Prints the Sudoku board in a readable format.
        """
        if not self.board:
            print("No board generated yet.")
            return

        for i in range(self.size):
            # if i > 0 and i % self.box_size == 0:
                # Print horizontal line
                # print("-" * (self.size * 2 + self.box_size - 1))
            
            for j in range(self.size):
                cell = self.board[i][j]
                print(f"{cell} ", end="")
            print()


if __name__ == "__main__":
    # print("--- Random Sudoku Test Case ---")
    # Difficulty can be generated from 0.0 (easiest) to 1.0 (hardest)
    # A good range is typically 0.4 to 0.6
    sudoku_generator = SudokuGenerator(size=9, difficulty=0.55)
    
    # Print the generated puzzle
    # sudoku_generator.print_board()
    sudoku_generator.print_board_as_TC()

    # You can also get the puzzle as a list of lists
    # puzzle_data = sudoku_generator.get_puzzle()
    # print("\n--- Puzzle Data (as a list) ---")
    # for row in puzzle_data:
    #     print(row)