#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

/* thu vien danh rieng cho cam bien dht11 
co tham khao thu vien DHT
duoc sua lai Le Nguyen Quang Duy - 20520467 */

// how many timing transitions we need to keep track of. 2 * number bits + extra
#define MAXTIMINGS 85

class DHT11  {
	private:
		uint8_t data[6];
		uint8_t data[6];
  		uint8_t _pin;
  		boolean read(void);
  		unsigned long _lastreadtime;
  		boolean firstreading;
	public: 
		DHT11(uint8_t pin);
  		void begin(void);
  		float readTemperature(bool S=false);
  		float convertCtoF(float);
		float convertFtoC(float);
  		float readHumidity(void);
}
