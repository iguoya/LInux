import QtQuick 2.12
import QtQuick.Window 2.12
import "factorial.js" as MathFunctions


Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MouseArea {
//        var i = 1;
        anchors.fill: parent
        onClicked: {
            var i;
            if(typeof(i) == "undefined") {
                i = 5;
            }

            console.log(MathFunctions.factorial(i));
            ++i;
        }
    }
}
