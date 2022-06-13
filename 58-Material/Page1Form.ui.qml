import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400

    header: Label {
        text: qsTr("Page 1")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Label {
        text: qsTr("You are on Page 1.")
        anchors.centerIn: parent
    }

    Button {
        id: button
        x: 129
        y: 58
        text: qsTr("Button")
    }

    TextField {
        id: textField
        x: 258
        y: 58
        width: 237
        height: 49
        placeholderText: qsTr("Text Field")
    }
}
