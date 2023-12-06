# Simple Web Application for Windows

This guide outlines the steps to create a simple web application tailored for Windows. The application takes an integer input from the front end, processes it using a C++ program, and displays the output on the front end.

## Overview

The project structure is organized into three main components:

1. **Front End:**
   - Create an HTML page with a form to take integer input.
   - Utilize CSS for styling.
   - Use JavaScript to handle the form submission event.

2. **Server:**
   - Develop a Node.js server using Express.js.
   - Handle the form submission event triggered by the front end.
   - Execute a C++ program with the input and send the output back to the front end.

3. **C++ Program:**
   - Write a simple C++ program that takes an integer as input and returns some output.
   - The C++ program will be executed by the server.

## Project Structure
/myapp <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/public <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/styles <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;style.css <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;/scripts <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;script.js <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;index.html <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;program.cpp <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;server.js <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;package.json <br>



  
### Front End

1. **Create HTML Page:**
   - Develop an HTML page (`index.html`) with a form to capture integer input.

2. **Styling with CSS:**
   - Implement styling using CSS (`/public/styles/style.css`).

3. **Form Handling with JavaScript:**
   - Utilize JavaScript (`/public/scripts/script.js`) to handle the form submission event.

### Server

4. **Node.js Server:**
   - Create a Node.js server (`server.js`) using Express.js.
   - Set up routes to handle form submissions and execute the C++ program.

5. **Form Submission Handling:**
   - On form submission, run the C++ program with the input.

### C++ Program

6. **Write C++ Program:**
   - Develop a simple C++ program (`program.cpp`) to process the integer input and generate output.

## Usage

1. **Install Dependencies:**
   - Run `npm init -y` to initialize the project.
   - Run `npm install express body-parser` to install required Node.js packages.

2. **Run the Server:**
   - Execute `node server.js` to start the Node.js server.

3. **Access the Application:**
   - Open a web browser and navigate to [http://localhost:3000](http://localhost:3000).
   - Enter an integer in the form, submit it, and view the processed output.

Follow these steps to set up and run the simple web application on a Windows environment.
