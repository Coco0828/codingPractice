const statusDisplay = document.querySelector(".game--status")
var gameState = ["", "", "",
                 "", "", "",
                 "", "", ""]
var currentPlayer = "X"
var gameActive = true
const winningMessage = () => `Player ${currentPlayer} has won`
const gameEnd = () => `Game Over`
const currentPlayerTurn = () => `It is player ${currentPlayer}'s turn`
statusDisplay.innerHTML = currentPlayerTurn()


function playerChange(){
    currentPlayer = currentPlayer === "X" ? "O" : "X";
    statusDisplay.innerHTML = currentPlayerTurn()
}

const winningCondition = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6]
]

function cellPlay(index, clickedCell){
    clickedCell.innerHTML = currentPlayer;
    gameState[index] = currentPlayer;
}



function handleResultValidation(){
    let roundWon = false;
    for (let i = 0; i <= 7; i++){
        const winCondition = winningCondition[i];
        let a = gameState[winCondition[0]];
        let b = gameState[winCondition[1]];
        let c = gameState[winCondition[2]];

        if (a === '' || b === '' || c === '') {
            continue
        }
        if (a === b && b === c){
            roundWon = true
            break
        }
    }

    if(roundWon){
        statusDisplay.innerHTML = winningMessage();
        gameActive = false;
        return;
    }

    let roundDraw = !gameState.includes("");
    if(roundDraw){
        statusDisplay.innerHTML = gameEnd();
        gameActive = false;
        return;
    }

    playerChange();
}

function cellClick(cellEvent){
    const clickedCell = cellEvent.target;
    const clickedCellIndex = parseInt(clickedCell.getAttribute('data-cell-index'));
    if(gameState[clickedCellIndex] !== "" || !gameActive){
        return;
    }
    cellPlay(clickedCellIndex, clickedCell)
    handleResultValidation();
    console.log(clickedCellIndex)
}

document.querySelectorAll(".cell").forEach(cell => cell.addEventListener("click", cellClick))

document.querySelector(".game--restart").addEventListener("click", gameRestart)

function gameRestart(){
    gameState = ["", "", "",
                 "", "", "",
                 "", "", ""]
    gameActive = true
    currentPlayer = 'X'
    statusDisplay.innerHTML = currentPlayerTurn()
    document.querySelectorAll(".cell").forEach(cell => cell.innerHTML = '')

}