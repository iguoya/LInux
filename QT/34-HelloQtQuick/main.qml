import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: window
    width: 840
    height: 680
    visible: true
    title: qsTr("Hello World")

    MouseArea {
        anchors.fill:parent
        onClicked: {
            Qt.quit();
        }
    }

    Text {
        text: qsTr("Hello World")
        anchors.centerIn: parent
    }


}
