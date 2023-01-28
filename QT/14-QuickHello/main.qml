import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    property alias mouseArea: mouseArea
    Text {
        id: text1
        x: 181
        y: 114
        width: 279
        height: 143
        text: qsTr("Hello World!!!")
        font.pixelSize: 20
        anchors.centerIn: parent
    }

    Rectangle {

        id: rectangle
        x: 239
        y: 400
        width: 164
        height: 53
        color: "#f57900"
        MouseArea {
            id : mouseArea
            anchors.fill: parent
        }

    }
//    mouseArea.onClicked: {
//         Qt.quit();
//    }

}
