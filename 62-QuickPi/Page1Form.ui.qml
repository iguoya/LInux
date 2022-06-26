import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 800
    height: 600
    property alias button: button

    title: qsTr("Page 1")

    Label {
        text: qsTr("对应面积")
        anchors.verticalCenterOffset: -17
        anchors.horizontalCenterOffset: -279
        anchors.centerIn: parent
    }

    Label {
        id: label
        x: 92
        y: 121
        text: qsTr("输入半径")
    }

    TextInput {
        id: textInput
        x: 269
        y: 123
        width: 160
        height: 20
        font.pixelSize: 12
    }

    Text {
        id: text1
        x: 269
        y: 276
        width: 174
        height: 18
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 277
        y: 404
        text: qsTr("Button")


    }
}
