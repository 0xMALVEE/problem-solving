const s = document.getElementById("scroll-container");

if (s) {
  const firstChild = s.firstElementChild;

  if (firstChild) {
    const childElements = firstChild.children;

    for (const childElement of childElements) {
      const itemName = childElement.firstElementChild.textContent;

      if (itemName.toLowerCase().includes("programming") || itemName.toLowerCase().includes("computer")) {
console.log(          childElement)
childElement.click();
      }
    }
  }
}
