import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5


ApplicationWindow {

    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")



    Column {
        spacing: 30
        anchors.centerIn: parent
        Label {

            text: "你好 郭雅"
            font.pixelSize: 24
            font.italic: true
            background: Rectangle {
                color: "orange"
            }
        }

        TextField {
            y: 100
            width: 300
            placeholderText: "输入用户名"
            onAccepted: {
                console.debug(text)
            }
        }

        TextArea {
            text: "郭雅 \n 郭雅 \n 郭雅 \n"
            width: 500
            background: Rectangle {
                color: "green"
            }
        }
    }
}
