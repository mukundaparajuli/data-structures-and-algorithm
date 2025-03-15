function diff(oldText, newText) {
  const oldLines = oldText.split("\n");
  const newLines = newText.split("\n");

  let result = [];
  let i = 0;
  let j = 0;

  while (i < oldLines.length || j < newLines.length) {
    if (oldLines[i] === newLines[j]) {
      result.push(`Unchanged: ${oldLines[i]}`);
      i++;
      j++;
    } else if (i < oldLines.length && !newLines.includes(oldLines[i])) {
      result.push(`Removed: ${oldLines[i]}`);
      i++;
    } else if (j < newLines.length && !oldLines.includes(newLines[j])) {
      result.push(`Added: ${newLines[j]}`);
      j++;
    }
  }

  return result;
}

// Example Usage
const oldText = `Hello World\nThis is a test\nGoodbye World`;
const newText = `Hello World\nThis is a test!\nGoodbye World`;

console.log(diff(oldText, newText));
