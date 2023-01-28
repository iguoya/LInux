import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Frame {
//        anchors.fill: parent
//        anchors.centerIn: parent
        Column {
//            anchors.fill: parent
            CheckBox { text: "E-Mail"}

            CheckBox { text: "E-Mail"}

            CheckBox { text: "E-Mail"}
        }

        background: Rectangle {
            color: "lightgreen"
        }
    }

    GroupBox {
        y: 200
        Column {
//            anchors.fill: parent
            CheckBox { text: "AAAA"}
            CheckBox { text: "BBBB"}
            CheckBox { text: "AAAA"}
        }
 
        background: Rectangle {
            color: "orange"
        }
    }
}
