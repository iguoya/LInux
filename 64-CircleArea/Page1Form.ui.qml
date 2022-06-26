import QtQuick 2.12
import QtQuick.Controls 2.5
import qt.tiger.circle 1.0




Page {
    width: 600
    height: 400
    property alias button: button

    title: qsTr("Page 1")

    Circle {
        id:circle
//        onAreaChanged:text1.text = circle.area
    }


    Label {
        width: 207
        height: 68
        text: qsTr("输入半径")
        anchors.verticalCenterOffset: -68
        anchors.horizontalCenterOffset: -123
        anchors.centerIn: parent

        TextInput {
            id: textInput
            x: 179
            y: 0
            width: 142
            height: 41
            text: qsTr("r")
            font.pixelSize: 12
        }
    }

    Label {
        id: label
        x: 73
        y: 208
        width: 181
        height: 55
        text: qsTr("计算圆面积")

        Text {
            id: text1
            x: 169
            y: 8
            width: 188
            height: 47
            text: qsTr("Text")
            font.pixelSize: 12
        }
    }

    Button {
        id: button
        x: 223
        y: 315
        text: qsTr("Button")
        onClicked:{
//            console.log(textInput.text)
            text1.text = circle.getArea(textInput.text)
        }
    }
}
