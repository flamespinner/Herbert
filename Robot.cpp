#include "WPILib.h"
#include <moduleLib.h>
#include <time.h>
#include <Victor.h>

class RobotDemo : public SimpleRobot
{	
private:
	enum PWM_OUT
	{
		PWM_TALON_DRIVE1 = 1,
		PWM_TALON_DRIVE2,
		PWM_TALON_DRIVE3,
		PWM_TALON_DRIVE4,
		PWM_TALON_DRIVE5,
		PWM_TALON_DRIVE6,
		PWM_VICTOR_ROLLER,
		
		PWM_EMPTY_8,
		PWM_EMPTY_9,
		PWM_EMPTY_10
	};
	enum RELAY_OUT
	{
		RELAY_EMTPY_1 = 1,
		RELAY_WINCH_CLUTCH,
		
		RELAY_EMPTY_3,
		RELAY_EMPTY_4,
		RELAY_EMPTY_5,
		RELAY_EMPTY_6,
		RELAY_EMPTY_7,
		RELAY_EMPTY_8,
	};
	enum DIO_PORTS
	{
		DIO_COMP_ONBOARD = 1,
		DIO_COMP_OFFBOARD,
		
		DIO_EMPTY_3,
		DIO_EMPTY_4,
		DIO_EMPTY_5,
		DIO_EMPTY_6,
		DIO_EMPTY_7,
		DIO_EMPTY_8,
		DIO_EMPTY_9,
		DIO_EMPTY_10,
		DIO_EMPTY_11,
		DIO_EMPTY_12,
		DIO_EMPTY_13,
		DIO_EMPTY_14
	};

	enum SOLENOID_PORTS
	{
		SOLENOID_CLAW1 = 1,
		SOLENOID_CLAW2,
		SOLENOID_CHOMP3,
		SOLENOID_CHOMP4,
		
		SOLENOID_EMPTY_5,
		SOLENOID_EMPTY_6,
		SOLENOID_EMPTY_7,  
		SOLENOID_EMPTY_8
	};

	enum JOYSTICK_ID
	{
		CONTROLLER_MAIN = 1,
	};
	
	RobotDrive driveSystem;
	Joystick leftStick;
	Joystick rightStick;

	
		struct JoyStickState
	{
		bool Button1Pressed;
		bool Button2Pressed;
		bool Button3Pressed;
		bool Button4Pressed;
		bool Button5Pressed;
		bool Button6Pressed;
		bool Button7Pressed;
		bool Button8Pressed;
		bool Button9Pressed;
		bool Button10Presssed;
	};
	
	JoyStickState leftState;
	JoyStickState rightState;
	
	bool netConsoleEnabled;
	
public:
	RobotDemo(void):
		//driveSystem(PWM_JAG_FRONT_LEFT, PWM_JAG_FRONT_RIGHT, PWM_JAG_BACK_LEFT, PWM_JAG_BACK_RIGHT),
		leftStick(CONTROLLER_MAIN),
		rightStick(CONTROLLER_MAIN)
	{
			netConsoleEnabled = (moduleFindByName("NetConsole.out") != NULL);
			if (netConsoleEnabled) cerr << "Robot -- started cerr\n";
			leftStick.SetAxisChannel(Joystick::kTwistAxis, 3);
			driveSystem.SetExpiration(0.1);
			
	}
	/**
	 * Runs the motors with Mecanum steering. 
	 */
	void OperatorControl()
	{
		}
	
};

START_ROBOT_CLASS(RobotDemo);

