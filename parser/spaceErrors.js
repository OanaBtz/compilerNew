var fs = require("fs");
var iconv = require("iconv-lite");

var files = fs.readdirSync("./LTD");

const { exec } = require('child_process');
var min = 100000000;
var max = -1;
var nr = 0;
var fileLines = "";
var array = [];

parseFile(0);

function parseFile(i)
{
    if(i>files.length-1){
        return;
    }
    console.log("Processing file: " + files[i]);
    var data = fs.readFileSync("./LTD/"+files[i], "binary");
    data = iconv.decode(data, "iso-8859-1");
    

    console.log("Trying to parse "+ files[i]);

    
    exec('./compiler <'+'LTD/'+files[i], (err, stdout, stderr) => {
        
        console.log("I am here");
        
        if (err) {
        
            console.log(`stdout: ${stdout}`);            
            console.log(`stderr: ${stderr}`);

            if(stdout.match("Space error"))
                console.log("space error: "+files[i]);
            
            parseFile(i+1);
            return;
        }

        console.log(`stdout: ${stdout}`);
        console.log(`stderr: ${stderr}`);

        var message = `${stdout}`;
        
        if(stdout.match("Space error"))
            console.log("space error: "+files[i]);
    
        parseFile(i+1);
    });
}