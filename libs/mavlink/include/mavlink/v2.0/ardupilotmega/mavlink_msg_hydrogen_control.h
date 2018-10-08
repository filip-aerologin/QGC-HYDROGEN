#pragma once
// MESSAGE HYDROGEN_CONTROL PACKING

#define MAVLINK_MSG_ID_HYDROGEN_CONTROL 228

MAVPACKED(
typedef struct __mavlink_hydrogen_control_t {
 uint8_t system_crash; /*< System crash*/
 uint8_t start_hydro; /*< Start hydro*/
}) mavlink_hydrogen_control_t;

#define MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN 2
#define MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN 2
#define MAVLINK_MSG_ID_228_LEN 2
#define MAVLINK_MSG_ID_228_MIN_LEN 2

#define MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC 72
#define MAVLINK_MSG_ID_228_CRC 72



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HYDROGEN_CONTROL { \
    228, \
    "HYDROGEN_CONTROL", \
    2, \
    {  { "system_crash", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hydrogen_control_t, system_crash) }, \
         { "start_hydro", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_hydrogen_control_t, start_hydro) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HYDROGEN_CONTROL { \
    "HYDROGEN_CONTROL", \
    2, \
    {  { "system_crash", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hydrogen_control_t, system_crash) }, \
         { "start_hydro", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_hydrogen_control_t, start_hydro) }, \
         } \
}
#endif

/**
 * @brief Pack a hydrogen_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param system_crash System crash
 * @param start_hydro Start hydro
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t system_crash, uint8_t start_hydro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, system_crash);
    _mav_put_uint8_t(buf, 1, start_hydro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN);
#else
    mavlink_hydrogen_control_t packet;
    packet.system_crash = system_crash;
    packet.start_hydro = start_hydro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
}

/**
 * @brief Pack a hydrogen_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param system_crash System crash
 * @param start_hydro Start hydro
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hydrogen_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t system_crash,uint8_t start_hydro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, system_crash);
    _mav_put_uint8_t(buf, 1, start_hydro);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN);
#else
    mavlink_hydrogen_control_t packet;
    packet.system_crash = system_crash;
    packet.start_hydro = start_hydro;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HYDROGEN_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
}

/**
 * @brief Encode a hydrogen_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hydrogen_control_t* hydrogen_control)
{
    return mavlink_msg_hydrogen_control_pack(system_id, component_id, msg, hydrogen_control->system_crash, hydrogen_control->start_hydro);
}

/**
 * @brief Encode a hydrogen_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hydrogen_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hydrogen_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hydrogen_control_t* hydrogen_control)
{
    return mavlink_msg_hydrogen_control_pack_chan(system_id, component_id, chan, msg, hydrogen_control->system_crash, hydrogen_control->start_hydro);
}

/**
 * @brief Send a hydrogen_control message
 * @param chan MAVLink channel to send the message
 *
 * @param system_crash System crash
 * @param start_hydro Start hydro
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hydrogen_control_send(mavlink_channel_t chan, uint8_t system_crash, uint8_t start_hydro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN];
    _mav_put_uint8_t(buf, 0, system_crash);
    _mav_put_uint8_t(buf, 1, start_hydro);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL, buf, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
#else
    mavlink_hydrogen_control_t packet;
    packet.system_crash = system_crash;
    packet.start_hydro = start_hydro;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
#endif
}

/**
 * @brief Send a hydrogen_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hydrogen_control_send_struct(mavlink_channel_t chan, const mavlink_hydrogen_control_t* hydrogen_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hydrogen_control_send(chan, hydrogen_control->system_crash, hydrogen_control->start_hydro);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL, (const char *)hydrogen_control, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hydrogen_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t system_crash, uint8_t start_hydro)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, system_crash);
    _mav_put_uint8_t(buf, 1, start_hydro);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL, buf, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
#else
    mavlink_hydrogen_control_t *packet = (mavlink_hydrogen_control_t *)msgbuf;
    packet->system_crash = system_crash;
    packet->start_hydro = start_hydro;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HYDROGEN_CONTROL, (const char *)packet, MAVLINK_MSG_ID_HYDROGEN_CONTROL_MIN_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN, MAVLINK_MSG_ID_HYDROGEN_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE HYDROGEN_CONTROL UNPACKING


/**
 * @brief Get field system_crash from hydrogen_control message
 *
 * @return System crash
 */
static inline uint8_t mavlink_msg_hydrogen_control_get_system_crash(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field start_hydro from hydrogen_control message
 *
 * @return Start hydro
 */
static inline uint8_t mavlink_msg_hydrogen_control_get_start_hydro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a hydrogen_control message into a struct
 *
 * @param msg The message to decode
 * @param hydrogen_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_hydrogen_control_decode(const mavlink_message_t* msg, mavlink_hydrogen_control_t* hydrogen_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hydrogen_control->system_crash = mavlink_msg_hydrogen_control_get_system_crash(msg);
    hydrogen_control->start_hydro = mavlink_msg_hydrogen_control_get_start_hydro(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN;
        memset(hydrogen_control, 0, MAVLINK_MSG_ID_HYDROGEN_CONTROL_LEN);
    memcpy(hydrogen_control, _MAV_PAYLOAD(msg), len);
#endif
}
