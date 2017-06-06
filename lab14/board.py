class Board:
    empty_sell = "-"
    x_cell = 'x'
    o_cell = '0'
    moves = 0

    def __init__(self):
        self.__cells = [[Board.empty_sell for j in range(3)] for i in range(3)]

    def has_winner(self):
        for rows in range(3):
            if self.__cells[rows] == [3 * [Board.o_cell]] or self.__cells[rows] == [3 * [Board.x_cell]]:
                return True
            if self.__cells[0][rows] == self.__cells[1][rows] == self.__cells[2][rows] != '-':
                return True
        return False

    def make_move(self, row, col, sign):
        if self.__cells[row][col] == Board.empty_sell:
            self.__cells[row][col] = sign
            self.moves += 1
            return True
        return False

    def __str__(self):
        for i in range(3):
            pr = ''
            for j in range(3):
                print(self.x_cell[i][j])
            print('\n')

class Game:
    IS_NOT_OVER = 0
    DRAW = 1
    X_WINS = 2
    O_WINS = 3

    def __init__(self):
        self.brd = Board()

    def start(self):
        while self.brd.has_winner() != Game.IS_NOT_OVER:
            pass

b = Board()
#print(b.has_winner())
#print(b)
print(b.make_move(0, 0, Board.x_cell))
print(b.make_move(0, 0, Board.o_cell))

