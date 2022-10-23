import Cocoa
import Foundation

print("LinkedList Demo")
var newLinkedList = LinkedList<Double>()
newLinkedList.append(2.5)
newLinkedList.append(3.0)
newLinkedList.append(4.5)
newLinkedList.append(6.0)
newLinkedList.append(7.5)
print("====Initial LinkedList====\n\(newLinkedList)")

newLinkedList.removeLast()
print("\nRemoved Last:\n\(newLinkedList)")

newLinkedList.insert(50.5, at: 3)
print("\nInserted new Node at index 3:\n\(newLinkedList)")


