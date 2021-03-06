#ifndef _PLAYER_ERROR_H_
#define _PLAYER_ERROR_H_

#define P_PRE		(0x02000000)
#define F_PRE		(0x03000000)
 
#define PLAYER_SUCCESS          (0)
#define PLAYER_FAILED           (-(P_PRE|0x01))
#define PLAYER_NOMEM            (-(P_PRE|0x02))
#define PLAYER_EMPTY_P          (-(P_PRE|0x03))
#define PLAYER_NOT_VALID_PID    (-(P_PRE|0x04))
#define PLAYER_CAN_NOT_CREAT_THREADS    (-(P_PRE|0x05))
#define PLAYER_ERROR_PARAM      (-(P_PRE|0x06))

#define PLAYER_RD_FAILED        (-(P_PRE|0x11))
#define PLAYER_RD_EMPTYP        (-(P_PRE|0x12))
#define PLAYER_RD_TIMEOUT       (-(P_PRE|0x13))
#define PLAYER_RD_AGAIN         (-(P_PRE|0x14))

#define PLAYER_WR_FAILED        (-(P_PRE|0x21))
#define PLAYER_WR_EMPTYP        (-(P_PRE|0x22))
#define PLAYER_WR_FINISH        (P_PRE|0x1)

#define PLAYER_PTS_ERROR        (-(P_PRE|0x31))
#define PLAYER_NO_DECODER       (-(P_PRE|0x32))
#define DECODER_RESET_FAILED    (-(P_PRE|0x33))
#define DECODER_INIT_FAILED     (-(P_PRE|0x34))
#define PLAYER_UNSUPPORT        (-(P_PRE|0x35))
#define PLAYER_UNSUPPORT_VIDEO  (-(P_PRE|0x36))
#define PLAYER_UNSUPPORT_AUDIO  (-(P_PRE|0x37))
#define PLAYER_SEEK_OVERSPILL   (-(P_PRE|0x38))
#define PLAYER_CHECK_CODEC_ERROR  (-(P_PRE|0x39))
#define PLAYER_INVALID_CMD      (-(P_PRE|0x40))

#define FFMPEG_SUCCESS          (0)
#define FFMPEG_OPEN_FAILED      (-(F_PRE|0x1))
#define FFMPEG_PARSE_FAILED     (-(F_PRE|0x2))
#define FFMPEG_EMP_POINTER      (-(F_PRE|0x3))
#define FFMPEG_NO_FILE          (-(F_PRE|0x4))

char * player_error_msg(int error);
#endif
