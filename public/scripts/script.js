document.getElementById('myForm').addEventListener('submit', function(e) {
    e.preventDefault();
    var numbers = document.getElementById('numbers').value.split(',').map(Number);
    fetch('/process', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json',
        },
        body: JSON.stringify({ numbers: numbers }),
    })
    .then(response => response.json())
    .then(data => {
        var outputElement = document.getElementById('output');
        outputElement.innerHTML = ''; // Clear the output element
        for (var i = 0; i < data.output.length; i++) {
            var valueElement = document.createElement('span');
            //valueElement.innerText = 'Output ' + (i+1) + ': ' + data.output[i];
            valueElement.innerText = data.output[i];
            valueElement.style.color = 'blue'; // Apply some styling
            outputElement.appendChild(valueElement);
            //outputElement.appendChild(document.createElement('br')); // Add a line break
        }
    });    
});
