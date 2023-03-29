function calculate(expression) {
  const tokens = expression.split(' ');
  const stack = [];
  for (let i = tokens.length - 1; i >= 0; i--) {
    const token = tokens[i];
    if (['+', '-', '*', '/'].includes(token)) {
      const operand1 = stack.pop();
      const operand2 = stack.pop();
      switch (token) {
        case '+':
          stack.push(operand1 + operand2);
          break;
        case '-':
          stack.push(operand1 - operand2);
          break;
        case '*':
          stack.push(operand1 * operand2);
          break;
        case '/':
          stack.push(operand1 / operand2);
          break;
      }
    } else {
      stack.push(Number(token));
    }
  }
  return stack.pop();
}

console.log(calculate('+ 3 4')); // Output: 7
console.log(calculate('- 3 * 4 5')); // Output: -17
console.log(calculate('* + 3 4 5')); // Output: 35
