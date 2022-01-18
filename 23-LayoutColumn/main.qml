import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 400
    height: 300

    Column {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        spacing: 5

        Rectangle { color: "lightblue"; radius: 10.0
            width: 300; height: 50 }
        Rectangle { color: "gold"; radius: 10.0
            width: 300; height: 50}
        Rectangle { color: "lightgreen"; radius: 10.0
            width: 300; height: 50}
    }

    Row {
        //        anchors.horizontalCenter: parent.horizontalCenter
        //        anchors.verticalCenter: parent.verticalCenter

        spacing: 5

        Rectangle { color: "lightblue"; radius: 10.0
            width: 100; height: 50 }
        Rectangle { color: "gold"; radius: 10.0
            width: 100; height: 50}
        Rectangle { color: "lightgreen"; radius: 10.0
            width: 100; height: 50}
    }

//    Grid {
////        anchors.horizontalCenter: parent.horizontalCenter
////        anchors.verticalCenter: parent.verticalCenter
//        x: 300
//        y: 300
//        columns: 2
//        spacing: 6

//        Rectangle { color: "lightblue"; radius: 10.0
//            width: 50; height: 50 }
//        Rectangle { color: "gold"; radius: 10.0
//            width: 50; height: 50}
//        Rectangle { color: "lightgreen"; radius: 10.0
//            width: 50; height: 50}
//        Rectangle { color: "lightgrey"; radius: 10.0
//            width: 50; height: 50}
//    }
}
