import Foundation

// Why class instead of struct?
// - Structs are value types, so having recursive substruct properties cannot be referenced in memory by StackNode
public class StackNode<T> {
    public var value: T
    var next: StackNode?
    
    init(value: T, next: StackNode?) {
        self.value = value
        self.next = next
    }
}
