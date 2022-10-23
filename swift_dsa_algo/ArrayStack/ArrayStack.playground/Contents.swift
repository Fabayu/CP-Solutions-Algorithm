import UIKit
import Foundation

print("Test String Array Stack")
var newStack = Stack<String>(size: 5)
newStack.push("Learning")
newStack.push("Data")
newStack.push("Structures")
newStack.push("&")
newStack.push("Algorithms")
newStack.push("Shouldn't push")

print("\n\(newStack)")

while !newStack.isEmpty() {
    print(newStack.pop() ?? "Nil")
}
newStack.pop()
print("\n\(newStack)")

print("Test String Array Stack")
var doubleStack = Stack<Double>(size: 5)
doubleStack.push(2.5)
doubleStack.push(3.4)
doubleStack.push(12.8)
doubleStack.push(5.9)
doubleStack.push(1.1)
doubleStack.push(9.3)

print("\n\(doubleStack)")

while !doubleStack.isEmpty() {
    print(doubleStack.pop() ?? "Nil")
}
print("\n\(doubleStack)")

