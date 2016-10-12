//
//  KontaktSDK
//  Version: 1.2.3
//
//  Copyright (c) 2015 Kontakt.io. All rights reserved.
//

@import Foundation;

/**
 *  A Kontakt device type.
 */
typedef NS_ENUM(NSInteger, KTKDeviceType) {
    /**
     *  Invalid device type.
     */
    KTKDeviceTypeInvalid     = -1,
    /**
     *  Beacon device type.
     */
    KTKDeviceTypeBeacon      = 1,
    /**
     *  Cloud Beacon device type.
     */
    KTKDeviceTypeCloudBeacon = 2
};

/**
 *  A device Advertising Profile
 */
typedef NS_ENUM(NSInteger, KTKDeviceAdvertisingProfile) {
    /**
     *  Invalid Profile.
     */
    KTKDeviceAdvertisingProfileInvalid   = -1,
    /**
     *  iBeacon Profile.
     */
    KTKDeviceAdvertisingProfileIBeacon   = 1,
    /**
     *  Eddystone Profile.
     */
    KTKDeviceAdvertisingProfileEddystone = 2
};

/**
 *  A device Advertising Packets
 */
typedef NS_OPTIONS(NSInteger, KTKDeviceAdvertisingPackets) {
    /**
     *  iBeacon packet.
     */
    KTKDeviceAdvertisingPacketsIBeacon        = 1 << 1,
    /**
     *  Eddystone UID packet.
     */
    KTKDeviceAdvertisingPacketsEddystoneUID   = 2 << 2,
    /**
     *  Eddystone URL packet.
     */
    KTKDeviceAdvertisingPacketsEddystoneURL   = 2 << 3,
    /**
     *  Eddystone Telemetry packet.
     */
    KTKDeviceAdvertisingPacketsEddystoneTLM   = 2 << 4,
    /**
     *  All supprted Eddystone packets.
     */
    KTKDeviceAdvertisingPacketsEddystoneAll   = KTKDeviceAdvertisingPacketsEddystoneUID | KTKDeviceAdvertisingPacketsEddystoneURL | KTKDeviceAdvertisingPacketsEddystoneTLM,
};

/**
 *  A device access rights.
 */
typedef NS_ENUM(NSInteger, KTKDeviceAccess) {
    /**
     *  Invalid value.
     */
    KTKDeviceAccessInvalid   = -1,
    /**
     *  Owner
     */
    KTKDeviceAccessOwner      = 1,
    /**
     *  Supervisor
     */
    KTKDeviceAccessSupervisor = 2,
    /**
     *  Editor
     */
    KTKDeviceAccessEditor     = 3,
    /**
     *  Viewer
     */
    KTKDeviceAccessViewer     = 4
};

/**
 *  A kontakt device specification.
 */
typedef NS_ENUM(NSInteger, KTKDeviceSpecification) {
    /**
     *  Invalid value.
     */
    KTKDeviceSpecificationInvalid  = -1,
    /**
     *  Standard specification.
     */
    KTKDeviceSpecificationStandard = 1,
    /**
     *  Tough Beacon specification.
     */
    KTKDeviceSpecificationTough = 2
};

/**
 *  A kontakt device models.
 */
typedef NS_ENUM(NSInteger, KTKDeviceModel) {
    /**
     *  Invalid value.
     */
    KTKDeviceModelInvalid  = -1,
    /**
     *  Smart Beacon
     */
    KTKDeviceModelSmartBeacon = 1,
    /**
     *  USB Beacon
     */
    KTKDeviceModelUSBBeacon = 2,
    /**
     *  Sensor Beacon
     */
    KTKDeviceModelSensorBeacon = 3,
    /**
     *  Cloud Beacon
     */
    KTKDeviceModelCloudBeacon = 4,
    
    /**
     *  Card Beacon
     */
    KTKDeviceModelCardBeacon = 5,
    /**
     *  Pro Beacon
     */
    KTKDeviceModelProBeacon = 6
};

/**
 *  A kontakt device shuffle status.
 */
typedef NS_ENUM(NSInteger, KTKDeviceShuffleStatus) {
    /**
     *  Status is unknown.
     */
    KTKDeviceShuffleStatusUknown        = -1,
    /**
     *  Device shuffle is not supported.
     */
    KTKDeviceShuffleStatusNotSupported  = 0,
    /**
     *  Device shuffle status is ON.
     */
    KTKDeviceShuffleStatusON            = 1,
    /**
     *  Device shuffle status is OFF.
     */
    KTKDeviceShuffleStatusOFF           = 2
};

/**
 *  A device transmission power level.
 *
 *  @see https://support.kontakt.io/hc/en-gb/articles/201621521-Transmission-power-settings
 */
typedef NS_ENUM(NSInteger, KTKDeviceTransmissionPower) {
    /**
     *  Invalid value
     */
    KTKDeviceTransmissionPowerInvalid = -1,
    /**
     *  Transmission power level 0 (-30dBm).
     */
    KTKDeviceTransmissionPower0,
    /**
     *  Transmission power level 1 (-20dBm).
     */
    KTKDeviceTransmissionPower1,
    /**
     *  Transmission power level 2 (-16dBm).
     */
    KTKDeviceTransmissionPower2,
    /**
     *  Transmission power level 3 (-12dBm).
     */
    KTKDeviceTransmissionPower3,
    /**
     *  Transmission power level 4 (-8dBm).
     */
    KTKDeviceTransmissionPower4,
    /**
     *  Transmission power level 5 (-4dBm).
     */
    KTKDeviceTransmissionPower5,
    /**
     *  Transmission power level 6 (0dBm).
     */
    KTKDeviceTransmissionPower6,
    /**
     *  Transmission power level 7 (4dBm).
     */
    KTKDeviceTransmissionPower7,
};

/**
 *  A device motion detection modes.
 */
typedef NS_ENUM(NSInteger, KTKDeviceMotionDetectionMode) {
    /**
     *  Invalid mode.
     */
    KTKDeviceMotionDetectionModeInvalid  = -1,
    /**
     *  Motion detection is off.
     */
    KTKDeviceMotionDetectionModeOff      = 0,
    /**
     *  Motion detection is set in counting mode.
     * 
     *  You can access counter value by reading device configuration.
     *  
     *  @see [KTKDeviceConfiguration motionCounter]
     */
    KTKDeviceMotionDetectionModeCounting = 1,
    /**
     *  Motion detection is set in alarm mode.
     *
     *  When motion is detected device will advertise `4b6f6e74-616b-742e-696f-4d6f74696f6e` proximity UUID.
     *  Major and minor values will remain the same.
     */
    KTKDeviceMotionDetectionModeAlarm    = 2
};
