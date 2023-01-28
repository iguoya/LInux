import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5


ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Pane {
//        anchors.fill: parent
        anchors.centerIn: parent

        Column {
            anchors.fill: parent
            CheckBox { text: "E-Mail"}
            CheckBox { text: "Calendar"}
            CheckBox { text: "Contacts"}
//            background: Rectangle {
//                color: "green"
//            }
        }

        background: Rectangle {
            color: "red"
        }
    }
}
