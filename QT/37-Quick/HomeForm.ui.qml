import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400

    title: qsTr("Home")

    Label {
        text: qsTr("You are on the home page.")
        anchors.verticalCenterOffset: -91
        anchors.horizontalCenterOffset: -5
        anchors.centerIn: parent
    }

    Text {
        id: text1
        x: 72
        y: 207
        text: qsTr("Text")
        font.pixelSize: 12
    }

    TextEdit {
        id: textEdit
        x: 72
        y: 129
        width: 80
        height: 20
        text: qsTr("Text Edit")
        font.pixelSize: 12
    }

    TextInput {
        id: textInput
        x: 72
        y: 321
        width: 80
        height: 20
        text: qsTr("Text Input")
        font.pixelSize: 12
    }

    Rectangle {
        id: rectangle
        x: 277
        y: 149
        width: 200
        height: 200
        color: "#f57900"
    }
}

/*##^##
Designer {
    D{i:0;formeditorZoom:0.9}
}
##^##*/

