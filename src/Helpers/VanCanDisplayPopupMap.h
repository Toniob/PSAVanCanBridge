﻿// VanCanDisplayPopupMap.h
#pragma once

#ifndef _VanCanDisplayPopupMap_h
    #define _VanCanDisplayPopupMap_h

#include "../Can/Structs/CanDisplayStructs.h"
#include "../Van/Structs/VanDisplayPopupMessage.h"

class VanCanDisplayPopupMap
{
    uint8_t VanToCanPopupMap[255];
    uint8_t VanToCanPopupCategoryMap[255];

    private:

    void SetPopupMessageTypeMapping()
    {
        memset(VanToCanPopupMap, 0, sizeof(VanToCanPopupMap));
        VanToCanPopupMap[VAN_POPUP_MSG_TYRES_DEFLATED]                         = CAN_POPUP_MSG_TYRE_PRESSURES_TOO_LOW;
        VanToCanPopupMap[VAN_POPUP_MSG_DOOR_OPEN]                              = CAN_POPUP_MSG_DOORS_BOOT_BONNET_REAR_SCREEN_AND_FUEL_TANK_OPEN;
        VanToCanPopupMap[VAN_POPUP_MSG_GEARBOX_OIL_TEMP_TOO_HIGH]              = CAN_POPUP_MSG_ENGINE_TEMPERATURE_FAULT_STOP_THE_VEHICLE;
        VanToCanPopupMap[VAN_POPUP_MSG_BRAKE_FLUID_LEVEL_LOW]                  = CAN_POPUP_MSG_BRAKING_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_HYDRAULIC_SUSPENSION_PRESSURE]          = CAN_POPUP_MSG_SUSPENSION_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_SERIOUS_SUSPENSION_FAULT]               = CAN_POPUP_MSG_SUSPENSION_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_ENGINE_OIL_TEMPERATURE_TOO_HIGH]        = CAN_POPUP_MSG_ENGINE_TEMPERATURE_FAULT_STOP_THE_VEHICLE;
        VanToCanPopupMap[VAN_POPUP_MSG_ENGINE_COOLANT_TEMP_TOO_HIGH]           = CAN_POPUP_MSG_ENGINE_TEMPERATURE_FAULT_STOP_THE_VEHICLE;
        VanToCanPopupMap[VAN_POPUP_MSG_UNBLOCK_DIESEL_FILTER]                  = CAN_POPUP_MSG_RISK_OF_PARTICLE_FILTER_CLOGGING_SEE_HANDBOOK;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTO_ICON_WITH_STOP]                    = CAN_POPUP_MSG_SUSPENSION_10_KMH;
        VanToCanPopupMap[VAN_POPUP_MSG_DIESEL_ADDITIVE_MINIMUM_LEVEL]          = CAN_POPUP_MSG_PARTICLE_FILTER_ADDITIVE_LEVEL_TOO_LOW;
        VanToCanPopupMap[VAN_POPUP_MSG_FUEL_TANK_ACCESS_OPEN]                  = CAN_POPUP_MSG_DOORS_BOOT_BONNET_REAR_SCREEN_AND_FUEL_TANK_OPEN;
        VanToCanPopupMap[VAN_POPUP_MSG_TYRES_PUNCTURED]                        = CAN_POPUP_MSG_MORE_THAN_ONE_TYRE_PUNCTURED;
        VanToCanPopupMap[VAN_POPUP_MSG_TOP_UP_ENGINE_COOLANT_LEVEL]            = CAN_POPUP_MSG_TOP_UP_COOLANT_LEVEL;
        VanToCanPopupMap[VAN_POPUP_MSG_OIL_PRESSURE_INSUFFICIENT]              = CAN_POPUP_MSG_ENGINE_OIL_PRESSURE_FAULT_STOP_THE_VEHICLE;
        VanToCanPopupMap[VAN_POPUP_MSG_TOP_UP_ENGINE_OIL_LEVEL]                = CAN_POPUP_MSG_TOP_UP_ENGINE_OIL_LEVEL;
        VanToCanPopupMap[VAN_POPUP_MSG_ANTIPOLLUTION_FAULT]                    = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_BRAKE_PADS_WORN]                        = CAN_POPUP_MSG_BRAKE_PADS_WORN;
        VanToCanPopupMap[VAN_POPUP_MSG_CHECK_CONTROL_OK]                       = CAN_POPUP_MSG_DIAGNOSIS_OK;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTOMATIC_GEAR_FAULT]                   = CAN_POPUP_MSG_GEARBOX_FAULT_REPAIR_NEEDED;
        VanToCanPopupMap[VAN_POPUP_MSG_ESP_ASR_NOT_FUNCTIONING]                = CAN_POPUP_MSG_ESP_ASR_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_ABS_FAULT]                              = CAN_POPUP_MSG_ABS_BRAKING_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_SUSPENSION_OR_STEERING_FAULT]           = CAN_POPUP_MSG_SUSPENSION_FAULTY_2;
        VanToCanPopupMap[VAN_POPUP_MSG_BRAKING_FAULT]                          = CAN_POPUP_MSG_BRAKING_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_SIDE_AIRBAG_FAULT]                      = CAN_POPUP_MSG_AIRBAGS_OR_PRETENSIONER_SEAT_BELTS_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_AIRBAG_FAULT]                           = CAN_POPUP_MSG_AIRBAGS_OR_PRETENSIONER_SEAT_BELTS_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_CRUISE_CONTROL_FAULT]                   = CAN_POPUP_MSG_CRUISE_CONTROL_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_ENGINE_COOLANT_TEMPERATURE_HIGH]        = CAN_POPUP_MSG_ENGINE_TEMPERATURE_FAULT_STOP_THE_VEHICLE;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTO_LIGHTING_FAULT]                    = CAN_POPUP_MSG_AMBIENT_BRIGHTNESS_SENSOR_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_WATER_IN_DIESEL_FUEL_FILTER]            = CAN_POPUP_MSG_PRESENCE_OF_WATER_IN_DIESEL_FILTER_REPAIR_NEEDED;
        VanToCanPopupMap[VAN_POPUP_MSG_HEADLIGHT_CORRECTOR_FAULT]              = CAN_POPUP_MSG_AUTOMATIC_HEADLAMP_ADJUSTMENT_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_SECONDARY_BATTERY_CHARGE_FAULT]         = CAN_POPUP_MSG_BATTERY_CHARGE_OR_ELECTRICAL_SUPPLY_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_BATTERY_CHARGE_FAULT]                   = CAN_POPUP_MSG_BATTERY_CHARGE_OR_ELECTRICAL_SUPPLY_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_DIESEL_FUEL_ADDITIVE_FAULT]             = CAN_POPUP_MSG_EMISSIONS_CONTROL_FAULT;
        VanToCanPopupMap[VAN_POPUP_MSG_CATALYTIC_CONVERTER_FAULT]              = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY2;
        VanToCanPopupMap[VAN_POPUP_MSG_HANDBRAKE_ON]                           = CAN_POPUP_MSG_HANDBRAKE;
        VanToCanPopupMap[VAN_POPUP_MSG_SEAT_BELT_REMINDER]                     = CAN_POPUP_MSG_FRONT_SEAT_BELTS_NOT_FASTENED;
        VanToCanPopupMap[VAN_POPUP_MSG_PASSENGER_AIRBAG_DEACTIVATED]           = CAN_POPUP_MSG_CHILD_SAFETY_ACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_TOP_UP_WASHER_FLUID]                    = CAN_POPUP_MSG_SCREEN_WASH_FLUID_LEVEL_TOO_LOW;
        VanToCanPopupMap[VAN_POPUP_MSG_SPEED_TOO_HIGH]                         = CAN_POPUP_MSG_IMPOSSIBLE_TO_MOVE_ROOF_SPEED_TOO_HIGH;// not exactly that but at least it tells that speed is high
        VanToCanPopupMap[VAN_POPUP_MSG_KEY_REMINDER]                           = CAN_POPUP_MSG_REMOVE_IGNITION_KEY;
        VanToCanPopupMap[VAN_POPUP_MSG_HILL_HOLDER_ACTIVE]                     = CAN_POPUP_MSG_FRONT_SEAT_BELTS_NOT_FASTENED; // on some displays it shows HILL HOLDER ACTIVE on others it is DRIVER'S SEATBELT NOT FASTENED
        //VanToCanPopupMap[VAN_POPUP_MSG_IMPACT_SENSOR_FAULT]                    = CAN_POPUP_MSG_ANTI_ROLLBACK_SYSTEM_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_WHEEL_PRESSURE_SENSOR_BATTERY_LOW]      = CAN_POPUP_MSG_TYRE_PRESSURES_NOT_MONITORED;
        VanToCanPopupMap[VAN_POPUP_MSG_REMOTE_CONTROL_BATTERY_LOW]             = CAN_POPUP_MSG_REMOTE_CONTROL_BATTERY_FLAT;
        VanToCanPopupMap[VAN_POPUP_MSG_PUT_AUTO_TRANSMISS_LEVER_IN_POSITION_P] = CAN_POPUP_MSG_PLACE_AUTOMATIC_GEARBOX_IN_POSITION_P;
        VanToCanPopupMap[VAN_POPUP_MSG_FUEL_LEVEL_LOW]                         = CAN_POPUP_MSG_FUEL_LEVEL_TOO_LOW;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTOMATIC_LIGHTING_INACTIVE]            = CAN_POPUP_MSG_AUTOMATIC_HEADLAMP_LIGHTING_DEACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_FAULT]            = CAN_POPUP_MSG_AUTOMATIC_HEADLAMP_ADJUSTMENT_FAULTY; // CAN_POPUP_MSG_REAR_LEFT_HAND_PASSENGER_SEAT_BELT_UNFASTENED //(RT3 mono)
        VanToCanPopupMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING0]       = CAN_POPUP_MSG_TYRE_PRESSURES_NOT_MONITORED;
        VanToCanPopupMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING1]       = CAN_POPUP_MSG_TYRE_PRESSURES_NOT_MONITORED;
        VanToCanPopupMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING2]       = CAN_POPUP_MSG_TYRE_PRESSURES_NOT_MONITORED;
        VanToCanPopupMap[VAN_POPUP_MSG_ESP_ASR_DEACTIVATED]                    = CAN_POPUP_MSG_ESP_SYSTEM_DEACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_CHILD_SAFETY_ACTIVE]                    = CAN_POPUP_MSG_CHILD_SAFETY_ACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_DEADLOCKING_ACTIVE]                     = CAN_POPUP_MSG_AUTOMATIC_DOOR_LOCKING_ACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTOMATIC_LIGHTING_ACTIVE]              = CAN_POPUP_MSG_AUTOMATIC_HEADLAMP_LIGHTING_ACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_AUTOMATIC_WIPING_ACTIVE]                = CAN_POPUP_MSG_AUTOMATIC_SCREEN_WIPE_ACTIVATED;
        VanToCanPopupMap[VAN_POPUP_MSG_ENGINE_IMMOBILISER_FAULT]               = CAN_POPUP_MSG_ELECTRONIC_ANTI_THEFT_FAULTY;
        VanToCanPopupMap[VAN_POPUP_MSG_PLACE_LEVER_IN_NEUTRAL]                 = CAN_POPUP_MSG_PLACE_GEARBOX_IN_N_POSITION;
        VanToCanPopupMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_FAULT]            = CAN_POPUP_MSG_REAR_LEFT_HAND_PASSENGER_SEAT_BELT_UNFASTENED;    //on some displays it is REAR LH PASSENGER SEATBELT UNFASTENED
        VanToCanPopupMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_DEACTIVATED]      = CAN_POPUP_MSG_REAR_RIGHT_HAND_PASSENGER_SEAT_BELT_UNFASTENED; //on some displays it is REAR RH PASSENGER SEATBELT UNFASTENED
        VanToCanPopupMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_ACTIVATED]        = CAN_POPUP_MSG_FRONT_SEAT_BELTS_NOT_FASTENED;                  //on some displays it is FRONT PASSENGER SEATBELT UNFASTENED

        //VanToCanPopupMap[VAN_POPUP_MSG_SIDE_LIGHTS_REMINDER]              = CAN_POPUP_MSG_CRUISE_CONTROL_NOT_POSSIBLE_SPEED_TOO_LOW;
        //VanToCanPopupMap[VAN_POPUP_MSG_IMPACT_SENSOR_FAULT]               = CAN_POPUP_MSG_CRUISE_CONTROL_NOT_POSSIBLE_SPEED_TOO_LOW;
        //VanToCanPopupMap[VAN_POPUP_MSG_WHEEL_PRESSURE_SENSOR_BATTERY_LOW] = CAN_POPUP_MSG_CRUISE_CONTROL_NOT_POSSIBLE_SPEED_TOO_LOW;
        //VanToCanPopupMap[VAN_POPUP_MSG_TEST_STOP_LIGHTS_BRAKE_GENTLY]     = CAN_POPUP_MSG_PLACE_AUTOMATIC_GEARBOX_IN_POSITION_P;
        //VanToCanPopupMap[VAN_POPUP_MSG_DOORS_LOCKED]                      = CAN_POPUP_MSG_FUEL_LEVEL_TOO_LOW;
        //VanToCanPopupMap[VAN_POPUP_MSG_SPORTS_SUSPENSION_ACTIVE]          = CAN_POPUP_MSG_ELECTRONIC_ANTI_THEFT_FAULTY;
        //VanToCanPopupMap[VAN_POPUP_MSG_STOP_AND_START_SYSTEM_ACTIVE]      = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupMap[VAN_POPUP_MSG_STOP_AND_START_SYSTEM_DEACTIVATED] = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupMap[VAN_POPUP_MSG_XSARA_DYNALTO]                     = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupMap[VAN_POPUP_MSG_307_DYNALTO]                       = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
    }

    void SetPopupMessageCategoryMapping()
    {
        memset(VanToCanPopupCategoryMap, 0, sizeof(VanToCanPopupCategoryMap));
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_TYRES_DEFLATED]                         = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_DOOR_OPEN]                              = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_GEARBOX_OIL_TEMP_TOO_HIGH]              = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_BRAKE_FLUID_LEVEL_LOW]                  = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HYDRAULIC_SUSPENSION_PRESSURE]          = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SERIOUS_SUSPENSION_FAULT]               = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ENGINE_OIL_TEMPERATURE_TOO_HIGH]        = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ENGINE_COOLANT_TEMP_TOO_HIGH]           = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_UNBLOCK_DIESEL_FILTER]                  = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTO_ICON_WITH_STOP]                    = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_DIESEL_ADDITIVE_MINIMUM_LEVEL]          = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_FUEL_TANK_ACCESS_OPEN]                  = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_TYRES_PUNCTURED]                        = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_TOP_UP_ENGINE_COOLANT_LEVEL]            = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_OIL_PRESSURE_INSUFFICIENT]              = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_TOP_UP_ENGINE_OIL_LEVEL]                = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ANTIPOLLUTION_FAULT]                    = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_BRAKE_PADS_WORN]                        = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_CHECK_CONTROL_OK]                       = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTOMATIC_GEAR_FAULT]                   = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ESP_ASR_NOT_FUNCTIONING]                = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ABS_FAULT]                              = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SUSPENSION_OR_STEERING_FAULT]           = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_BRAKING_FAULT]                          = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SIDE_AIRBAG_FAULT]                      = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AIRBAG_FAULT]                           = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_CRUISE_CONTROL_FAULT]                   = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ENGINE_COOLANT_TEMPERATURE_HIGH]        = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTO_LIGHTING_FAULT]                    = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTO_WIPER_FAULT]                       = CAN_POPUP_MSG_SHOW_CATEGORY1;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_WATER_IN_DIESEL_FUEL_FILTER]            = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_LEFT_SLIDING_DOOR_FAULT]                = CAN_POPUP_MSG_SHOW_CATEGORY1;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HEADLIGHT_CORRECTOR_FAULT]              = CAN_POPUP_MSG_SHOW_CATEGORY1;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_RIGHT_SLIDING_DOOR_FAULT]               = CAN_POPUP_MSG_SHOW_CATEGORY1;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SECONDARY_BATTERY_CHARGE_FAULT]         = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_BATTERY_CHARGE_FAULT]                   = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_DIESEL_FUEL_ADDITIVE_FAULT]             = CAN_POPUP_MSG_SHOW_CATEGORY1;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_CATALYTIC_CONVERTER_FAULT]              = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HANDBRAKE_ON]                           = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SEAT_BELT_REMINDER]                     = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_PASSENGER_AIRBAG_DEACTIVATED]           = CAN_POPUP_MSG_SHOW_CATEGORY2;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_TOP_UP_WASHER_FLUID]                    = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_SPEED_TOO_HIGH]                         = CAN_POPUP_MSG_SHOW_CATEGORY2;//
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_KEY_REMINDER]                           = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HILL_HOLDER_ACTIVE]                     = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_IMPACT_SENSOR_FAULT]                    = CAN_POPUP_MSG_SHOW_CATEGORY3;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_REMOTE_CONTROL_BATTERY_LOW]             = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_PUT_AUTO_TRANSMISS_LEVER_IN_POSITION_P] = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_FUEL_LEVEL_LOW]                         = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTOMATIC_LIGHTING_INACTIVE]            = CAN_POPUP_MSG_SHOW_CATEGORY2;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING0]       = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING1]       = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_X_TYRE_PRESSURE_SENSORS_MISSING2]       = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ESP_ASR_DEACTIVATED]                    = CAN_POPUP_MSG_SHOW_CATEGORY3;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_CHILD_SAFETY_ACTIVE]                    = CAN_POPUP_MSG_SHOW_CATEGORY2;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_DEADLOCKING_ACTIVE]                     = CAN_POPUP_MSG_SHOW_CATEGORY2;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTOMATIC_LIGHTING_ACTIVE]              = CAN_POPUP_MSG_SHOW_CATEGORY2;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_AUTOMATIC_WIPING_ACTIVE]                = CAN_POPUP_MSG_SHOW_CATEGORY2;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_ENGINE_IMMOBILISER_FAULT]               = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_LPG_FUEL_REFUSED]                       = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_LPG_IN_USE]                             = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_PLACE_LEVER_IN_NEUTRAL]                 = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_FAULT]            = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_DEACTIVATED]      = CAN_POPUP_MSG_SHOW_CATEGORY1;
        VanToCanPopupCategoryMap[VAN_POPUP_MSG_HEADLIGHT_BEND_SYSTEM_ACTIVATED]        = CAN_POPUP_MSG_SHOW_CATEGORY1;

        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_SIDE_LIGHTS_REMINDER]                 = CAN_POPUP_MSG_CRUISE_CONTROL_NOT_POSSIBLE_SPEED_TOO_LOW;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_WHEEL_PRESSURE_SENSOR_BATTERY_LOW]    = CAN_POPUP_MSG_CRUISE_CONTROL_NOT_POSSIBLE_SPEED_TOO_LOW;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_TEST_STOP_LIGHTS_BRAKE_GENTLY]        = CAN_POPUP_MSG_PLACE_AUTOMATIC_GEARBOX_IN_POSITION_P;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_DOORS_LOCKED]                         = CAN_POPUP_MSG_FUEL_LEVEL_TOO_LOW;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_SPORTS_SUSPENSION_ACTIVE]             = CAN_POPUP_MSG_ELECTRONIC_ANTI_THEFT_FAULTY;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_STOP_AND_START_SYSTEM_ACTIVE]         = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_STOP_AND_START_SYSTEM_DEACTIVATED]    = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_XSARA_DYNALTO]                        = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
        //VanToCanPopupCategoryMap[VAN_POPUP_MSG_307_DYNALTO]                          = CAN_POPUP_MSG_ENGINE_FAULT_REPAIR_NEEDED__DEPOLLUTION_SYSTEM_FAULTY;
    }

    public:

    VanCanDisplayPopupMap()
    {
        SetPopupMessageTypeMapping();
        SetPopupMessageCategoryMapping();
    }

    uint8_t GetCanCategoryFromVanMessage(uint8_t messageId)
    {
        return VanToCanPopupCategoryMap[messageId];
    }

    uint8_t GetCanMessageIdFromVanMessage(uint8_t messageId)
    {
        return VanToCanPopupMap[messageId];
    }

};

#endif
