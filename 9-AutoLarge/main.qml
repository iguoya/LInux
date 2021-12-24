import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        width: 50; height: width * 2
        color: "red"; anchors.centerIn: parent; focus: true
        Keys.onSpacePressed: height = width * 3

        MouseArea {
            anchors.fill: parent
            onClicked: parent.width += 10
        }
    }
}
