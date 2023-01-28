import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: wd
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MouseArea {
        anchors.fill: parent
        onClicked: {
            wd.color = Qt.rgba(Math.random(),
                                 Math.random(), Math.random(), 1);
        }
    }
}
