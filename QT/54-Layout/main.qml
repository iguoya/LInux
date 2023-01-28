import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.11
import QtQuick.Controls 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    GridLayout {
        anchors.fill: parent
        rows: 1
        columns: 2

        ColumnLayout {
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.preferredHeight: 368
            Layout.preferredWidth: 132

            Button {
                id: button
                text: qsTr("Button")
            }

            Button {
                id: button1
                text: qsTr("Button")
            }

            Button {
                id: button2
                text: qsTr("Button")
            }

            Button {
                id: button3
                text: qsTr("Button")
            }

            Button {
                id: button4
                text: qsTr("Button")
            }
        }

        ColumnLayout {
            Layout.fillHeight: true
            Layout.fillWidth: true
            Layout.preferredHeight: 351
            Layout.preferredWidth: 374

            Label {
                id: label
                text: qsTr("Label")
                Layout.preferredHeight: 22
                Layout.preferredWidth: 316
            }

            TextArea {
                id: textArea
                Layout.preferredHeight: 265
                Layout.preferredWidth: 365
                placeholderText: qsTr("Text Area")
            }
        }
    }
}
