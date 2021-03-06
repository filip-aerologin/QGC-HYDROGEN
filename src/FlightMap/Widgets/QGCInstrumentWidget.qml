/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


import QtQuick 2.3

import QGroundControl               1.0
import QGroundControl.Controls      1.0
import QGroundControl.ScreenTools   1.0
import QGroundControl.FactSystem    1.0
import QGroundControl.FlightMap     1.0
import QGroundControl.Palette       1.0

/// Instrument panel shown when virtual thumbsticks are visible
Rectangle {
    id:             root
    width:          ScreenTools.isTinyScreen ? getPreferredInstrumentWidth() * 1.5 : getPreferredInstrumentWidth()
    height:         width * 1.3
    color:          qgcPal.window
    border.width:   1
    anchors.top:    parent.top
    anchors.left:   parent.left
    anchors.margins: ScreenTools.defaultFontPixelHeight / 2

    property var    _qgcView:           qgcView
    property real   _innerRadius:       (width - (_topBottomMargin * 3)) / 4
    property real   _outerRadius:       _innerRadius + _topBottomMargin
    property real   _defaultSize:       ScreenTools.defaultFontPixelHeight * (9)
    property real   _sizeRatio:         ScreenTools.isTinyScreen ? (width / _defaultSize) * 0.5 : width / _defaultSize
    property real   _bigFontSize:       ScreenTools.defaultFontPointSize * 2.5  * _sizeRatio
    property real   _normalFontSize:    ScreenTools.defaultFontPointSize * 1.5  * _sizeRatio
    property real   _labelFontSize:     ScreenTools.defaultFontPointSize * 0.75 * _sizeRatio
    property real   _spacing:           ScreenTools.defaultFontPixelHeight * 0.33
    property real   _topBottomMargin:   (width * 0.05) / 2
    property var    _activeVehicle:     QGroundControl.multiVehicleManager.activeVehicle

    QGCPalette { id: qgcPal }

    QGCAttitudeWidget {
        id:                 attitude
        anchors.topMargin:        _topBottomMargin
        anchors.leftMargin:       _topBottomMargin
        size:                     _innerRadius * 4
        vehicle:                  _activeVehicle
        anchors.top:              parent.top
        anchors.horizontalCenter: parent.horizontalCenter
    }

    QGCCompassWidget {
        id:                 compass
        anchors.topMargin: _topBottomMargin
        anchors.leftMargin: _topBottomMargin
        anchors.top:       attitude.bottom
        size:               _innerRadius * 4
        vehicle:            _activeVehicle
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
