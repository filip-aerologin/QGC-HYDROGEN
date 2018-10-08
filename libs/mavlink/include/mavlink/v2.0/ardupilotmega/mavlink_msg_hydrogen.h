#pragma once
// MESSAGE HYDROGEN PACKING

#define MAVLINK_MSG_ID_HYDROGEN 225

MAVPACKED(
typedef struct __mavlink_hydrogen_t {
 float stack_temp; /*< Stack temp*/
 float battery_voltage; /*< Battery voltage*/
 float stack_current; /*< Stack current*/
 float tank_pressure; /*< Tank pressure*/
 float stack_voltage; /*< Stack voltage*/
 float uav_mass; /*< UAV mass*/
}) mavlink_hydrogen_t;

#define MAVLINK_MSG_ID_HYDROGEN_LEN 24
#define MAVLINK_MSG_ID_HYDROGEN_MIN_LEN 24
#define MAVLINK_MSG_ID_225_LEN 24
#define MAVLINK_MSG_ID_225_MIN_LEN 24

#define MAVLINK_MSG_ID_HYDROGEN_CRC 160
#define MAVLINK_MSG_ID_225_CRC 160



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HYDROGEN { \
    225, \
    "HYDROGEN", \
    6, \
    {  { "stack_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_hydrogen_t, stack_temp) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_hydrogen_t, battery_voltage) }, \
         { "stack_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hydrogen_t, stack_current) }, \
         { "tank_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hydrogen_t, tank_pressure) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hydrogen_t, stack_voltage) }, \
         { "uav_mass", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hydrogen_t, uav_mass) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HYDROGEN { \
    "HYDROGEN", \
    6, \
    {  { "stack_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_hydrogen_t, stack_temp) }, \
         { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_hydrogen_t, battery_voltage) }, \
         { "stack_current", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hydrogen_t, stack_current) }, \
         { "tank_pressure", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hydrogen_t, tank_pressure) }, \
         { "stack_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hydrogen_t, stack_voltage) }, \
         { "uav_mass", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hydrogen_t, uav_mass) }, \
         } \
}
#endif

/**
 * @brief Pack a hydrogen message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stack_temp Stack temp
 * @param battery_voltage Battery voltage
 * @param stack_current Stack current
 * @param tank_pressure Tank pressure
 * @param stack_voltage Stack voltage
 * @param uav_mass UAV mass
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float stack_temp, float battery_voltage, float stack_current, float tank_pressure, float stack_voltage, float uav_mass)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_LEN];
    _mav_put_float(buf, 0, stack_temp);
    _mav_put_float(buf, 4, battery_voltage);
    _mav_put_float(buf, 8, stack_current);
    _mav_put_float(buf, 12, tank_pressure);
    _mav_put_float(buf, 16, stack_voltage);
    _mav_put_float(buf, 20, uav_mass);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_LEN);
#else
    mavlink_hydrogen_t packet;
    packet.stack_temp = stack_temp;
    packet.battery_voltage = battery_voltage;
    packet.stack_current = stack_current;
    packet.tank_pressure = tank_pressure;
    packet.stack_voltage = stack_voltage;
    packet.uav_mass = uav_mass;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
}

/**
 * @brief Pack a hydrogen message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stack_temp Stack temp
 * @param battery_voltage Battery voltage
 * @param stack_current Stack current
 * @param tank_pressure Tank pressure
 * @param stack_voltage Stack voltage
 * @param uav_mass UAV mass
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float stack_temp,float battery_voltage,float stack_current,float tank_pressure,float stack_voltage,float uav_mass)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_LEN];
    _mav_put_float(buf, 0, stack_temp);
    _mav_put_float(buf, 4, battery_voltage);
    _mav_put_float(buf, 8, stack_current);
    _mav_put_float(buf, 12, tank_pressure);
    _mav_put_float(buf, 16, stack_voltage);
    _mav_put_float(buf, 20, uav_mass);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_LEN);
#else
    mavlink_hydrogen_t packet;
    packet.stack_temp = stack_temp;
    packet.battery_voltage = battery_voltage;
    packet.stack_current = stack_current;
    packet.tank_pressure = tank_pressure;
    packet.stack_voltage = stack_voltage;
    packet.uav_mass = uav_mass;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
}

/**
 * @brief Encode a hydrogen struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hydrogen_t* hydrogen)
{
    return mavlink_msg_hydrogen_pack(system_id, component_id, msg, hydrogen->stack_temp, hydrogen->battery_voltage, hydrogen->stack_current, hydrogen->tank_pressure, hydrogen->stack_voltage, hydrogen->uav_mass);
}

/**
 * @brief Encode a hydrogen struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hydrogen_t* hydrogen)
{
    return mavlink_msg_hydrogen_pack_chan(system_id, component_id, chan, msg, hydrogen->stack_temp, hydrogen->battery_voltage, hydrogen->stack_current, hydrogen->tank_pressure, hydrogen->stack_voltage, hydrogen->uav_mass);
}

/**
 * @brief Send a hydrogen message
 * @param chan MAVLink channel to send the message
 *
 * @param stack_temp Stack temp
 * @param battery_voltage Battery voltage
 * @param stack_current Stack current
 * @param tank_pressure Tank pressure
 * @param stack_voltage Stack voltage
 * @param uav_mass UAV mass
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hydrogen_send(mavlink_channel_t chan, float stack_temp, float battery_voltage, float stack_current, float tank_pressure, float stack_voltage, float uav_mass)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_LEN];
    _mav_put_float(buf, 0, stack_temp);
    _mav_put_float(buf, 4, battery_voltage);
    _mav_put_float(buf, 8, stack_current);
    _mav_put_float(buf, 12, tank_pressure);
    _mav_put_float(buf, 16, stack_voltage);
    _mav_put_float(buf, 20, uav_mass);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN, buf, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
#else
    mavlink_hydrogen_t packet;
    packet.stack_temp = stack_temp;
    packet.battery_voltage = battery_voltage;
    packet.stack_current = stack_current;
    packet.tank_pressure = tank_pressure;
    packet.stack_voltage = stack_voltage;
    packet.uav_mass = uav_mass;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN, (const char *)&packet, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
#endif
}

/**
 * @brief Send a hydrogen message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hydrogen_send_struct(mavlink_channel_t chan, const mavlink_hydrogen_t* hydrogen)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hydrogen_send(chan, hydrogen->stack_temp, hydrogen->battery_voltage, hydrogen->stack_current, hydrogen->tank_pressure, hydrogen->stack_voltage, hydrogen->uav_mass);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN, (const char *)hydrogen, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
#endif
}

#if MAVLINK_MSG_ID_HYDROGEN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hydrogen_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float stack_temp, float battery_voltage, float stack_current, float tank_pressure, float stack_voltage, float uav_mass)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, stack_temp);
    _mav_put_float(buf, 4, battery_voltage);
    _mav_put_float(buf, 8, stack_current);
    _mav_put_float(buf, 12, tank_pressure);
    _mav_put_float(buf, 16, stack_voltage);
    _mav_put_float(buf, 20, uav_mass);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN, buf, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
#else
    mavlink_hydrogen_t *packet = (mavlink_hydrogen_t *)msgbuf;
    packet->stack_temp = stack_temp;
    packet->battery_voltage = battery_voltage;
    packet->stack_current = stack_current;
    packet->tank_pressure = tank_pressure;
    packet->stack_voltage = stack_voltage;
    packet->uav_mass = uav_mass;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN, (const char *)packet, MAVLINK_MSG_ID_HYDROGEN_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_LEN, MAVLINK_MSG_ID_HYDROGEN_CRC);
#endif
}
#endif

#endif

// MESSAGE HYDROGEN UNPACKING


/**
 * @brief Get field stack_temp from hydrogen message
 *
 * @return Stack temp
 */
static inline float mavlink_msg_hydrogen_get_stack_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field battery_voltage from hydrogen message
 *
 * @return Battery voltage
 */
static inline float mavlink_msg_hydrogen_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field stack_current from hydrogen message
 *
 * @return Stack current
 */
static inline float mavlink_msg_hydrogen_get_stack_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field tank_pressure from hydrogen message
 *
 * @return Tank pressure
 */
static inline float mavlink_msg_hydrogen_get_tank_pressure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field stack_voltage from hydrogen message
 *
 * @return Stack voltage
 */
static inline float mavlink_msg_hydrogen_get_stack_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field uav_mass from hydrogen message
 *
 * @return UAV mass
 */
static inline float mavlink_msg_hydrogen_get_uav_mass(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a hydrogen message into a struct
 *
 * @param msg The message to decode
 * @param hydrogen C-struct to decode the message contents into
 */
static inline void mavlink_msg_hydrogen_decode(const mavlink_message_t* msg, mavlink_hydrogen_t* hydrogen)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hydrogen->stack_temp = mavlink_msg_hydrogen_get_stack_temp(msg);
    hydrogen->battery_voltage = mavlink_msg_hydrogen_get_battery_voltage(msg);
    hydrogen->stack_current = mavlink_msg_hydrogen_get_stack_current(msg);
    hydrogen->tank_pressure = mavlink_msg_hydrogen_get_tank_pressure(msg);
    hydrogen->stack_voltage = mavlink_msg_hydrogen_get_stack_voltage(msg);
    hydrogen->uav_mass = mavlink_msg_hydrogen_get_uav_mass(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HYDROGEN_LEN? msg->len : MAVLINK_MSG_ID_HYDROGEN_LEN;
        memset(hydrogen, 0, MAVLINK_MSG_ID_HYDROGEN_LEN);
    memcpy(hydrogen, _MAV_PAYLOAD(msg), len);
#endif
}
