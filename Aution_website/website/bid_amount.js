function submitForm(event, bidId) {
    event.preventDefault();

    const nameInput = document.getElementById('name');
    const emailInput = document.getElementById('email');
    const phoneInput = document.getElementById('phone');
    const amountInput = document.getElementById('amount');
    
    // Get stored bid value from local storage for the corresponding image
    let storedBid = localStorage.getItem(bidId);
    if (storedBid === null) {
      storedBid = 0;
    }
    
    // Get the current bid value from the input
    const currentBid = parseInt(amountInput.value);
    if (currentBid > storedBid) {
      // Store the new bid value for the corresponding image
      localStorage.setItem(bidId, currentBid);
      
      const bidElement = document.getElementById(bidId);
      bidElement.textContent = currentBid;
      
      // should add a success msg
    }
}