import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    color: "#f57900"
    title: qsTr("Hello World")

    Button {
        id: button
        text: qsTr("Button")
        anchors.fill: parent
        anchors.leftMargin: 126
        anchors.topMargin: 102
        anchors.rightMargin: 147
        anchors.bottomMargin: 165

        Connections {
            target: button
            onClicked: console.log("clicked")
        }
    }
}
