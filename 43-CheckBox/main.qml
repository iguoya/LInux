import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5


ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    CheckBox {
        text: "abc"
    }
    ButtonGroup {
        buttons: column.children

    }

    Column {
        anchors.centerIn: parent
        id: column
        RadioButton {
            text: "aaa"
        }
        RadioButton {
            text: "ccc"
        }
    }



}
