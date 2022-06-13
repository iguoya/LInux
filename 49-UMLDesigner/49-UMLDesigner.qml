import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button {
        id: button
        x: 41
        y: 385
        text: qsTr("郭雅")
        onClicked: {
            textInput.text = "喜欢郭雅"
        }

//        MouseArea {
//            anchors.fill: parent
//            onClicked: {
//                textInput.text = "喜欢郭雅"
//            }
//        }

    }

    Button {
        id: button1
        x: 41
        y: 292
        text: qsTr("Button")
    }

    Button {
        id: button2
        x: 41
        y: 76
        text: qsTr("Button")
    }

    Button {
        id: button3
        x: 41
        y: 178
        text: qsTr("Button")
    }

    Grid {
        id: grid
        x: 187
        y: 46
        width: 400
        height: 400
    }

    TextInput {
        id: textInput
        x: 242
        y: 69
        width: 179
        height: 41
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput1
        x: 242
        y: 133
        width: 184
        height: 39
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    TextEdit {
        id: textEdit
        x: 248
        y: 199
        width: 244
        height: 192
        text: qsTr("Text Edit")
        font.pixelSize: 12
    }
}
