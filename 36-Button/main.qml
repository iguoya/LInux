import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Text {
        anchors.centerIn: parent
        text: "郭雅"
//        anchors.fill: parent
//        MouseArea.onClicked: {
//            console.log("点击背景文本:"+TextEdit.text)
//        }
    }

//    Button {
//        id: abc
//        text: "Hello"
//        anchors.left: parent.left
//    }
}
