import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
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
        y: rect1.y
        width: rect1.width + 50
        height: rect1.height + 50
        color: "yellow"
    }
}
