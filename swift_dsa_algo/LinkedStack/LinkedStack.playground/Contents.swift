import Cocoa
import Foundation

print("Linked Stack Demo\n\n")

var newLinkdedStack = LinkedStack<String>()
newLinkdedStack.push(value: "Testing")
newLinkdedStack.push(value: "Linked")
newLinkdedStack.push(value: "Stack")

var tos = newLinkdedStack.top()
print("TOS: \(tos?.value ?? "")")

while (!newLinkdedStack.isEmpty()) {
    print(newLinkdedStack.pop() ?? "")
}
