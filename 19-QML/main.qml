import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 800
    height: 600
    visible: true
    title: qsTr("Hello World")
    Item {
        Image {
            source: "tile.png"
        }
        Image {
            x: 80
            width: 100
            height: 100
            source: "tile.png"
        }
        Image {
            x: 190
            width: 100
            height: 100
            fillMode: Image.Tile
            source: "tile.png"
        }
    }
}
