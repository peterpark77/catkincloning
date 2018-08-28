
"use strict";

let TrackedGroup = require('./TrackedGroup.js');
let CompositeDetectedPerson = require('./CompositeDetectedPerson.js');
let DetectedPerson = require('./DetectedPerson.js');
let TrackingTimingMetrics = require('./TrackingTimingMetrics.js');
let PersonTrajectory = require('./PersonTrajectory.js');
let TrackedPerson2d = require('./TrackedPerson2d.js');
let TrackedPerson = require('./TrackedPerson.js');
let CompositeDetectedPersons = require('./CompositeDetectedPersons.js');
let PersonTrajectoryEntry = require('./PersonTrajectoryEntry.js');
let ImmDebugInfo = require('./ImmDebugInfo.js');
let TrackedPersons2d = require('./TrackedPersons2d.js');
let TrackedPersons = require('./TrackedPersons.js');
let TrackedGroups = require('./TrackedGroups.js');
let ImmDebugInfos = require('./ImmDebugInfos.js');
let DetectedPersons = require('./DetectedPersons.js');

module.exports = {
  TrackedGroup: TrackedGroup,
  CompositeDetectedPerson: CompositeDetectedPerson,
  DetectedPerson: DetectedPerson,
  TrackingTimingMetrics: TrackingTimingMetrics,
  PersonTrajectory: PersonTrajectory,
  TrackedPerson2d: TrackedPerson2d,
  TrackedPerson: TrackedPerson,
  CompositeDetectedPersons: CompositeDetectedPersons,
  PersonTrajectoryEntry: PersonTrajectoryEntry,
  ImmDebugInfo: ImmDebugInfo,
  TrackedPersons2d: TrackedPersons2d,
  TrackedPersons: TrackedPersons,
  TrackedGroups: TrackedGroups,
  ImmDebugInfos: ImmDebugInfos,
  DetectedPersons: DetectedPersons,
};
