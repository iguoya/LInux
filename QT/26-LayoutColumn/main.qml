import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.12

Window {
    visible: true
    width: 1000
    height: 800

    ColumnLayout{
        anchors.fill: parent
        spacing: 2

        Rectangle {
            Layout.alignment: Qt.AlignCenter
            color: "gold"
            Layout.preferredWidth: 200
            Layout.preferredHeight: 200
        }

        Rectangle {
            Layout.alignment: Qt.AlignRight
            color: "lightgreen"
            Layout.preferredWidth: 200
            Layout.preferredHeight: 500
        }

        Rectangle {
            Layout.alignment: Qt.AlignBottom
            Layout.fillHeight: true
            color: "lightblue"
            Layout.preferredWidth: 500
            Layout.preferredHeight: 200
        }
    }
}
