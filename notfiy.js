// Show notification after clicking search button or submitting the form
function showNotification() {
  document.getElementById('chromeNotification').classList.add('show');
  
  // Hide the notification after 10 seconds
  setTimeout(function() {
    document.getElementById('chromeNotification').classList.remove('show');
  }, 10000); // 10 seconds
}

// Attach event listener to close the notification when the close button is clicked
document.getElementById('closeBtn').addEventListener('click', function() {
  document.getElementById('chromeNotification').classList.remove('show');
});
