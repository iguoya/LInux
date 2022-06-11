import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Scroll")

    Button {
        text: "弹出"
        anchors.centerIn: parent
        onClicked: popup.open()

        Popup {
            id: popup
            parent: ApplicationWindow.overlay
            x: (parent.width -width) / 2
            y: (parent.height -height ) /2
            width: 200
            height: 200
        }
    }

//    menuBar: menuBar {

//    }

//    header: ToolBar {

//    }

//    footer: TabBar {

//    }

//    StackView {
//        anchors.fill: parent
//    }

}
