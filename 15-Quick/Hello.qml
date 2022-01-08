import QtQuick 2.12

Rectangle {
//    id: Hello
    width: 640
    height: 480
//    visible: true
//    title: qsTr("Hello World")

    Text {
        id: text1
        text: qsTr("你好 郭雅")
        anchors.fill: parent
        font.pixelSize: 26
//        font.underline: none.none
//        minimumPixelSize: 26
    }

    MouseArea {
       anchors.fill: parent
       onClicked: {
           Qt.quit()
       }
    }
}
