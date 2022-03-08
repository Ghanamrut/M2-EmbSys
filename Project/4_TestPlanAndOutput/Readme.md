# Test Plan And Output: -
|

**S.No.**

 |

**High Level Test Plan**

 |

**Low Level Test Plan**

|

Input

 |

Output

 |

 |

**Status**

 |
|

1

 |

**DC Motor 1 and 2 should move according to the movement of the Joystick sensor**

 |

|

Joystick at Centre(No Input)

 |

No motion in DC motor 1 and 2

 |
|

Joystick Moves Up

 |

DC motor 1 clockwise and DC motor 2 anti-clockwise hence UGV moves forward

 |
|

Joystick Moves Down

 |

DC motor 1 anti-clockwise and DC motor 2 clockwise hence UGV moves backward

 |
|

Joystick Moves to the Right

 |

DC motor 1 and 2 both move clockwise hence UGV moves to the right

 |
|

Joystick Moves to the Right

 |

DC motor 1 and 2 both move anti- clockwise hence UGV moves to the left

 |
|

When Joystick returns to the center position

 |

DC motors in motion should get reset (Stop)

 |

 |

|

Passed

 |
|

Passed

 |
|

Passed

 |
|

Passed

 |
|

Passed

 |
|

Passed

 |

 |
|

2

 |

**Ultrasonic Sensor**

**Displays distance between UGV and nearest object**

 |

|

Potentiometer value less than 20 and not equal to zero

 |

Distance to be displayed in centimeters and display message "Warning : Obstacle"

 |
|

Potentiometer value more than 20

 |

Distance to be displayed in centimeters and display message "Path Clear"

 |
|

No input from potentiometer

 |

Distance displayed 0 cm and no message displayed

 |

 |

|

Passed

 |
|

Passed

 |
|

Passed

 |

 |
|

3

 |

**Servo motor should move according to user requirement for wrist and for each finger**

 |

|

Potentiometer is at max voltage input

 |

Vertically upward movement of wrist or fingers

 |
|

Potentiometer is at min voltage input

 |

Vertically downward movement of wrist or fingers

 |
|

No input from potentiometer

 |

Vertically downward position (default position)of wrist or fingers

 |
|

Potentiometer at any voltage between min and max

 |

Corresponding angle movement achieved by servo

 |

 |

|

Passed

 |
|

Passed

 |
|

Passed

 |
|

Passed

 |

 |
