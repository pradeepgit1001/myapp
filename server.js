const express = require('express');
const { exec } = require('child_process');
const path = require('path');
const app = express();
app.use(express.json());
app.use(express.static('public'));

app.post('/process', (req, res) => {
    // const programPath = path.join(__dirname, 'src', 'program');
    // const programCppPath = path.join(__dirname, 'src', 'program.cpp');
    const numbers = req.body.numbers.join(' ');
    exec(`g++ -o program program.cpp creation_BT.cpp functionDefinition_BT.cpp Node_And_Tree_BT.cpp && echo ${numbers} | program`, (error, stdout, stderr) => {
        if (error) {
            console.log(`error: ${error.message}`);
            return;
        }
        if (stderr) {
            console.log(`stderr: ${stderr}`);
            return;
        }
        res.json({ output: stdout });
    });
});

app.listen(3000, () => console.log('Server is running on port 3000'));
