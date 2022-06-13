import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Row {

           Slider {
               id: slider
//               min: 0
//               max: 100
           }

           Label {
               text: Math.floor(slider.value)
           }
       }
}
