var spawn = require('child_process').spawn;
var die = spawn('./die');

die.on('exit', function() {
  console.log("die exited");
});
