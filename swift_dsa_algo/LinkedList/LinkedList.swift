import Foundation

public struct LinkedList<T> {
    public typealias Node = LinkedListNode<T>
    fileprivate var head: Node?
    private var tail: Node?
    
    public init() {}
    
    public var last: Node? {
        return tail
    }
    
    public var isEmpty: Bool {
        return head == nil
    }
    
    public func getNode(at index: Int) -> Node? {
        if (head == nil) {
            print("LinkedList is empty")
            return nil
        }
        
        if index >= 0 {
            var node = head
            var i = index
            
            while (node != nil) {
                if (i == 0) {
                    return node
                }
                i -= 1
                node = node?.next
            }
        }
        
        print("Index must be >= 0")
        return nil
    }
    
    public mutating func append(_ item: T) {
        let newNode = Node(value: item)
        if let tailNode = tail {
          newNode.previous = tailNode
          tailNode.next = newNode
        } else {
          head = newNode
        }
        tail = newNode
    }
    
    public mutating func insert(_ item: T, at index: Int) {
        let newNode = Node(value: item)
        if index == 0 {
            newNode.next = head
            head?.previous = newNode
            head = newNode
        } else {
            let prev = getNode(at: index - 1)
            let next = prev?.next
            newNode.previous = prev
            newNode.next = next
            next?.previous = newNode
            prev?.next = newNode
        }
    }
    
    @discardableResult public mutating func remove(node: Node) -> T? {
        // Get prev/next nodes
        let prev = node.previous
        let next = node.next
        
        // Check if prev exists
        if let prev = prev {
            prev.next = next
        } else {
            head = next
        }
        
        // Next Node's previous
        next?.previous = prev
        
        if next == nil {
          tail = prev
        }
        // Deinitialise removed Node's prev/next
        node.previous = nil
        node.next = nil
        
        // Return removed Node's value
        return node.value
    }
    
    @discardableResult public mutating func remove(at index: Int) -> T? {
        guard let node = self.getNode(at: index) else {
            print("Node does not exist")
            return nil
        }
        return remove(node: node)
    }
    
    @discardableResult public mutating func removeLast() -> T? {
        if (isEmpty) {
            print("LinkedList is empty")
            return nil
        }
        
        guard let lastNode = last else {
            return nil
        }
        return remove(node: lastNode)
    }
    
    public mutating func removeAll() {
        head = nil
        tail = nil
    }
}

extension LinkedList: CustomStringConvertible {
  public var description: String {
    var text = "["
    var node = head
    while node != nil {
        text += "\(node!.value ?? "" as! T)"
      node = node!.next
      if node != nil { text += ", " }
    }
    return text + "]"
  }
}
