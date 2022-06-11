import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

ApplicationWindow {

    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button {
        anchors.centerIn: parent
        id: btn
        text: "按钮"
        onClicked: {
            console.log("你好")
        }

        contentItem: Text {
            text: btn.text
            color:btn.down ? "red": "green"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignHCenter
        }
        background: Rectangle {
            implicitHeight: 40
            implicitWidth: 100
            border.color: btn.down ? "#17a81a" : "#21be2b"
            border.width: 2
            radius: 2
        }
    }


}
