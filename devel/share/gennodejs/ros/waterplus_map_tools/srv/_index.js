
"use strict";

let AddNewWaypoint = require('./AddNewWaypoint.js')
let GetNumOfWaypoints = require('./GetNumOfWaypoints.js')
let GetWaypointByName = require('./GetWaypointByName.js')
let GetWaypointByIndex = require('./GetWaypointByIndex.js')
let SaveWaypoints = require('./SaveWaypoints.js')
let GetChargerByName = require('./GetChargerByName.js')

module.exports = {
  AddNewWaypoint: AddNewWaypoint,
  GetNumOfWaypoints: GetNumOfWaypoints,
  GetWaypointByName: GetWaypointByName,
  GetWaypointByIndex: GetWaypointByIndex,
  SaveWaypoints: SaveWaypoints,
  GetChargerByName: GetChargerByName,
};
