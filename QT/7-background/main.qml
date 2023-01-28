import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    color: "orange"
    title: qsTr("Hello World")
    Image {
        source: "images/logo.png"
        anchors.centerIn: parent
    }
}
