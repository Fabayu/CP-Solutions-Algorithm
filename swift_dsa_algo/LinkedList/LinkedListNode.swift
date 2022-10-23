import Foundation

public class LinkedListNode<T> {
    var value: T?
    var next: LinkedListNode?
    weak var previous: LinkedListNode?
    
    public init(value: T) {
        self.value = value
    }
}
