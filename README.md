# NightWalkie  🕶 

### Path to reach my Idea

I observed that it takes time for our pupil to adjust to the dark, this device would be an instant soultion if developed with proper budget. Furthermore, it can be extended to help blind move _(indoors or short distances)_.

### Overview:
It is a first phase idea to use the concept of obsticle avoidance for the blind and for the people who wanna walk in dark. The design is inspired by 'BAT'. Where it uses a special property called 'echolocation'. Similarly, the design has an ultrasonic sensors placed as a design of spectacles with a servo attached that revolve continuously around an axis and the sensor collects the required data. Here the time period of the signal to reach the receiver is taken as the raw data that we need and is given as input to a piezoelectric buzzer placed near the ears. We know that f = 1/T, Hence if obstacles are far away then the time period (T) is high thereby producing a sound of lower frequency (f) and as we approach the obstacle the sound would be of higher frequency thereby differentiating whether we are approaching any obstacle in front.

![IMG_20210904_233921](https://user-images.githubusercontent.com/69350191/132105486-72b24200-c684-4f67-ad67-284dfd402e0c.jpg)

### Project Requriements:
_(These Materials that are listed are of my choice conisedering the budget you can afford and try exploring the use of balsa wood for making the sensor mount)_

###### Specticles
- https://www.lenskart.com/matte-black-grey-full-rim-wayfarer-shape-small-size-49-50-vincent-chase-nomades-vc-5147-p-c100-polarized-sunglasses.html?utm_source=google&utm_medium=cpc&utm_campaign=Google-PLA-StdShopping-Sunglasses-120720&gclid=Cj0KCQjwssyJBhDXARIsAK98ITQW7GZibX6_RXqXJ_P6L_i_ZHvsPU6tNRngf8zOK6AdHDw07OwViPoaAudgEALw_wcB

###### Nano/Uno 
- https://robu.in/product/original-arduino-nano-33-ble-sense/
- https://robu.in/product/arduino-uno-r3/

###### Jumper wires 
- https://robu.in/product/20-cm-dupont-cable-male-male-male-female-female-female-combo/

###### Servo
- https://robu.in/product/standard-servo-towerpro-sg-5010-5010/

###### Ultrasonic sensor 
- https://robu.in/product/hc-sr04-ultrasonic-range-finder-cartoon-ultrasonic-sensor-mounting-bracket/

###### Buzzers (2)
- https://robu.in/product/5v-passive-buzzer/

###### Solidering System (Optional)
- Used to connect any prototype wires once the desgin is finalised and ready to use it extensively. Can buy in nearby electronics shop

###### Card Board 
- To make personalised Ultrasonic sensor mount, Can use the materials in home to save your expenses.

###### 9V battery with connector 
- https://robu.in/product/9v-battery-snap-connector-dc-jackbattery-connector-cap/
- https://robu.in/product/9v-original-hw-high-quality-battery-5pcs/

#### Sensor Mount:
This is used to fix an ultrasonic sensor on the servo which is used to increase the field of vision of the ultrasonics sensor by giving it a command to sweep for few degrees around its axis for a specific period of time. 

![image](https://user-images.githubusercontent.com/69350191/132105227-fa828fde-6a25-4928-a857-73b36f14dbd8.png)

### Procedure: 🗒️
- Understood the working principle of ultrasonic sensor and coded in IDE. 
- Learnt how to use servo and tune it as per our requriements and coded in IDE. 
- Started solidering the requried components like buzzers. 
- Tested if buzzers are working for certain random frequencies.
- Now, Used the concept of obsticle avoidance in the code using the sensor data - Distance and finalised my code and its working on bread board
- We can clearly observe in code that i created functions that i want to use, which is a organised way to code and debug.
- Have set a distance beyond which the buzzers wont beep in order to indicate users that they are at safe zone.
- If the 1/T concept is not working or is not proper, users can tune the commands in the code for left and right turn indication to their comfortable frequency before uploading the code to the build

![IMG_20210904_233948](https://user-images.githubusercontent.com/69350191/132105896-22f7effb-887f-4abe-a523-8346ede5c011.jpg)

### Device Instructions: 👇🏻 
- Left buzzer gives indication to move left  
- Right buzzer for right  
- Two buzzers for 180 degree shift
- No buzzer beeps if there isn't any obsticle in the set distance range

### Ethics in modeling prototype:
In order to provide users best experience using the device. An _(eye-gel)_ mask can be attached to the rare side of the specticles.
https://www.amazon.in/Gel-Relaxing-Eye-Mask-Sleeping/dp/B08KG3ZYNC/ref=asc_df_B08KG3ZYNC/?tag=googleshopdes-21&linkCode=df0&hvadid=396985008660&hvpos=&hvnetw=g&hvrand=17217870604681999440&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9062134&hvtargid=pla-977512920935&psc=1&ext_vrnc=hi

![image](https://user-images.githubusercontent.com/69350191/132106659-a3c1cc29-7ec4-4015-a3af-6bdb7475b47f.png)

##### Why an eye-gel mask?
It relieves eye tiredness,dry eyes,eye and head aches,restlessness,insomnia. Which provides users to relax and use the device as there is a possibility that users get annoyed with the sound of buzzer and moving mechanical parts of the prototype.

### Future Scope:
As of now, the protype is promising and basic and has a scope to be improved in its mechanical and electronics aspects.
- The existing prototype can be improved with the use of Raspberry Pi and bluetooth module. Where voice instructions can be given to the users to either go left, right, straight or a 180 degree shit. The use of bluetooth comes to play if we want our voice outputs to be given to our earpods and so on.
https://magpi.raspberrypi.org/articles/bluetooth-audio-raspberry-pi-3
- Balsa or any rigid materials that are feasible can be used to have a mount for Ultrasonic sensor and nano in order to use the device more comfortablly.
- The program as of now is inspired from a obsticle avoidance car concept the code can also be tuned and made more optimum 

###### Hope you all enjoy or are inspired by nightwalkiee..
