import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 200
    height: 200

    Rectangle {
        x: 50
        y: 50
        width: 100
        height: 100
        color: "green"
    }

    Rectangle {
        x: 100
        y: 100
        width: 50
        height: 50
        color: "yellow"
    }

    Item {
        width: 400
        height: 400

        Rectangle {
            id: rect1
            x: 50
            y: 50
            width: 100
            height: 100
            color: "green"
        }

        Rectangle {
            x: rect1.x + 200
            y: rect1.y + 200
            width: rect1.width + 10
            height: rect1.height + 10
            color: "yellow"
        }
    }
}



