/*
 * joystick_driver.h
 *
 * Created: 22.09.2016 10:54:30
 *  Author: Whiskey Dicks
 */ 

#ifndef JOYSTICK_DRIVER_H_
#define JOYSTICK_DRIVER_H_

void joystick_init(int prescaler);
void joystick_manual_calibrate(void);

typedef enum {JOY_X, JOY_Y, LEFT_SLIDER, RIGHT_SLIDER} state;

typedef enum {JOYSTICKBUTTON, LBUTTON, RBUTTON} usb_button_t;

int joystick_button(usb_button_t button);

typedef struct {
	int x, y;
} joystick_position_t;

typedef struct {
	int left, right;
} sliders_position_t;

typedef enum {LEFT, RIGHT, UP, DOWN, NEUTRAL} joystick_direction_t;
	
joystick_position_t joystick_getPosition(void);
joystick_direction_t joystick_getDirection(void);


#endif /* JOYSTICK_DRIVER_H_ */