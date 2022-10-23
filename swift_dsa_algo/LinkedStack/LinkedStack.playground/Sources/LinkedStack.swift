import Foundation

public struct LinkedStack<T> {
    private var head: StackNode<T>? = nil
    var stackSize: Int = 0
    
    public init() {}
    
    // Mutating functions used due to LinkedStack being value type
    // - Allows for manipulation of struct properties
    public mutating func push(value: T) {
        let node = StackNode<T>(value: value, next: head)
        head = node
        stackSize += 1
    }
    
    public mutating func pop() -> T? {
        // If no head node exists then stack is empty
        guard let poppedNode = head else {
            print("Stack Underflow")
            return nil
        }
        
        let poppedItem = poppedNode.value
        self.head = head?.next
        stackSize -= 1
        
        return poppedItem
    }
    
    public func top() -> StackNode<T>? {
        return head
    }
    
    public func isEmpty() -> Bool {
        stackSize == 0
    }
}
