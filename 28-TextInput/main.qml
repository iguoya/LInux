import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 820
    height: 640

    Row {
        spacing: 10
        anchors.centerIn: parent

        Text { text: qsTr("请输入密码：") ; font.pointSize: 15
            verticalAlignment: Text.AlignVCenter }

        Rectangle {
            width: 600
            height: 300
            color: "gold"
            border.color: "grey"

            TextInput {
                anchors.fill: parent
                anchors.margins: 2
                font.pointSize: 36
                focus: true
            }
        }
    }
}
