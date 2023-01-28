import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400

    header: Label {
        text: qsTr("Page 2")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10

        SpinBox {
            id: spinBox
            x: 323
            y: 80
        }
    }

    Label {
        text: qsTr("You are on Page 2.")
        anchors.verticalCenterOffset: -207
        anchors.horizontalCenterOffset: -32
        anchors.centerIn: parent
    }

    CheckDelegate {
        id: checkDelegate
        x: 27
        y: 6
        text: qsTr("Check Delegate")
    }

    CheckBox {
        id: checkBox
        x: 35
        y: 93
        text: qsTr("Check Box")
    }

    RadioButton {
        id: radioButton
        x: 228
        y: 93
        text: qsTr("Radio Button")
    }

    Switch {
        id: switch1
        x: 56
        y: 211
        text: qsTr("Switch")
    }

    Slider {
        id: slider
        x: 254
        y: 211
        value: 0.5
    }

    Dial {
        id: dial
        x: 450
        y: 109
    }
}
