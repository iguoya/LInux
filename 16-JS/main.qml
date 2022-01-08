import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text {
        id: text1
        text: qsTr("hello QML!")
        anchors.centerIn: parent
    }
    Rectangle {
        id: colorRect
        width: 100 * 2
        height: width
        radius: 100
        color: "green"

        anchors.left: text1.bottom
        anchors.leftMargin: 10
        anchors.verticalCenter: text1.verticalCenter

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.debug("colorRect: ", parent.color)
            }
        }
    }
}

