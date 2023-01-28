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

        font.bold: true
        font { pointSize: 24; capitalization: Font.AllUppercase }

        Behavior on rotation {
            NumberAnimation { duration: 500 }
        }
    }
    Rectangle {
        id: colorRect
        width: 100 * 2
        height: width
        radius: 100
        color: "red"
        border.width: 10
        border.color: "yellow"

        anchors.left: text1.bottom
        anchors.leftMargin: 10
        anchors.verticalCenter: text1.verticalCenter

        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.debug("colorRect: ", parent.color)
                text1.rotation += 90
                text1.color = parent.border.color
            }
        }
    }

//    Rectangle {
//        width: 120 * 2
//        height: width
//        radius: 120
//        color: parent.border.color
//        anchors.centerIn: parent
//    }
}

