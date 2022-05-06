package chess;

// CLasse que irá conter as regras do jogo de xadrez.

import boardgame.Board;
import boardgame.Position;
import chess.pieces.King;
import chess.pieces.Rook;

public class ChessMatch {

    private Board board;

    public ChessMatch() {
        board = new Board(8, 8);
        initialSetup();
    }

    public ChessPiece[][] getPieces() {
        ChessPiece[][] mat = new ChessPiece[board.getRows()][board.getColumns()];
        for (int i = 0; i < board.getRows(); i++) {
            for (int j = 0; i < board.getColumns(); i++) {
                mat[i][j] = (ChessPiece) board.piece(i, j);
            }
        }
        return mat;

    }

    private void initialSetup () {
        board.placePiece(new Rook(board, Color.WHITE), new Position(7,1));
        board.placePiece(new King(board, Color.BLACK), new Position(3, 1));
        board.placePiece(new King(board, Color.WHITE), new Position(7, 4));

    }
}
