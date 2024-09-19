#include <Arduino.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <Bounce2.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// TeensyAudioDesign: begin automatically generated code
// the following JSON string contains the whole project, 
// it's included in all generated files.
// JSON string:[{"type":"settings","data":{"main":{},"arduino":{"Board":{"Platform":"","Board":"","Options":""}},"BiDirDataWebSocketBridge":{},"workspaces":{},"sidebar":{},"palette":{},"editor":{},"devTest":{},"IndexedDBfiles":{"testFileNames":"testFile.txt"},"NodeDefGenerator":{},"NodeDefManager":{},"NodeHelpManager":{},"OSC":{}}},{"type":"tab","id":"Main","label":"Main","nodes":[],"links":[],"export":true,"isMain":false,"mainNameType":"tabName","mainNameExt":".ino","isAudioMain":false,"generateCppDestructor":false,"extraClassDeclarations":"","settings":{},"tabOutputs":[],"tabInputs":[]},{"type":"tab","id":"20240906T103341_026Z_168c","label":"Class_2","nodes":[],"links":[],"export":true,"isMain":false,"mainNameType":"tabName","mainNameExt":".ino","isAudioMain":false,"generateCppDestructor":false,"extraClassDeclarations":"","settings":{},"tabOutputs":[],"tabInputs":[]},{"id":"20240906T105442_318Z_e4e0","type":"AudioInputI2SQuad","name":"i2s_quad1","comment":"","anchor":"","locked":false,"x":60,"y":690,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T110704_388Z_da47:0"],["20240906T110756_438Z_2178:0"],["20240906T111000_237Z_1f26:0"],["20240906T111000_238Z_d3b:0"]]},{"id":"20240906T110704_388Z_da47","type":"AudioAmplifier","name":"ampTrimAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":190,"y":585,"z":"Main","bgColor":"#E6E0F8","wires":[["20240902T094313_302Z_d6a4:0","20240902T095217_024Z_949d:3"]]},{"id":"20240906T110756_438Z_2178","type":"AudioAmplifier","name":"ampTrimAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":230,"y":725,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105744_095Z_5f64:0","20240906T105744_097Z_e7f6:3"]]},{"id":"20240906T111000_237Z_1f26","type":"AudioAmplifier","name":"ampTrimBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":205,"y":900,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_238Z_d771:0","20240906T111000_240Z_93fd:3"]]},{"id":"20240906T111000_238Z_d3b","type":"AudioAmplifier","name":"ampTrimBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":245,"y":1040,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_239Z_5210:0","20240906T111000_240Z_bf43:3"]]},{"id":"20240902T094313_302Z_d6a4","type":"AudioFilterStateVariable","name":"filterLAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":345,"y":650,"z":"Main","bgColor":"#E6E0F8","wires":[["20240902T095217_024Z_949d:0"],[],["20240902T120734_059Z_a5e6:0"]]},{"id":"20240906T105744_095Z_5f64","type":"AudioFilterStateVariable","name":"filterLAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":365,"y":770,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105744_097Z_e7f6:0"],[],["20240906T105744_097Z_262f:0"]]},{"id":"20240906T111000_238Z_d771","type":"AudioFilterStateVariable","name":"filterLBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":360,"y":965,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_240Z_93fd:0"],[],["20240906T111000_239Z_af37:0"]]},{"id":"20240906T111000_239Z_5210","type":"AudioFilterStateVariable","name":"filterLBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":380,"y":1085,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_240Z_bf43:0"],[],["20240906T111000_239Z_c653:0"]]},{"id":"20240902T120734_059Z_a5e6","type":"AudioFilterStateVariable","name":"filterMAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":495,"y":685,"z":"Main","bgColor":"#E6E0F8","wires":[["20240902T095217_024Z_949d:1"],[],["20240902T095217_024Z_949d:2"]]},{"id":"20240906T105744_097Z_262f","type":"AudioFilterStateVariable","name":"filterMAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":515,"y":805,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105744_097Z_e7f6:1"],[],["20240906T105744_097Z_e7f6:2"]]},{"id":"20240906T111000_239Z_af37","type":"AudioFilterStateVariable","name":"filterMBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":510,"y":1000,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_240Z_93fd:1"],[],["20240906T111000_240Z_93fd:2"]]},{"id":"20240906T111000_239Z_c653","type":"AudioFilterStateVariable","name":"filterMBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":530,"y":1120,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T111000_240Z_bf43:1"],[],["20240906T111000_240Z_bf43:2"]]},{"id":"20240902T095217_024Z_949d","type":"AudioMixer4","name":"mixerAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":735,"y":645,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T141248_634Z_61b3:0","20240906T110539_792Z_aff7:0","20240906T105952_939Z_40f8:0"]]},{"id":"20240906T105744_097Z_e7f6","type":"AudioMixer4","name":"mixerAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":755,"y":765,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T141331_353Z_6549:0","20240906T110843_185Z_61dd:0","20240906T110153_128Z_8ce1:0"]]},{"id":"20240906T111000_240Z_93fd","type":"AudioMixer4","name":"mixerBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":750,"y":960,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T141346_749Z_57b2:0","20240906T111000_240Z_9f27:0","20240906T105952_939Z_40f8:1"]]},{"id":"20240906T111000_240Z_bf43","type":"AudioMixer4","name":"mixerBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":770,"y":1080,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T141346_750Z_25ef:0","20240906T111000_241Z_3771:0","20240906T110153_128Z_8ce1:1"]]},{"id":"20240906T141248_634Z_61b3","type":"AudioAnalyzePeak","name":"peakAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":840,"y":565,"z":"Main","bgColor":"#E6E0F8","wires":[]},{"id":"20240906T141331_353Z_6549","type":"AudioAnalyzePeak","name":"peakAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":865,"y":715,"z":"Main","bgColor":"#E6E0F8","wires":[]},{"id":"20240906T141346_749Z_57b2","type":"AudioAnalyzePeak","name":"peakBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":870,"y":885,"z":"Main","bgColor":"#E6E0F8","wires":[]},{"id":"20240906T141346_750Z_25ef","type":"AudioAnalyzePeak","name":"peakBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":895,"y":1035,"z":"Main","bgColor":"#E6E0F8","wires":[]},{"id":"20240906T110539_792Z_aff7","type":"AudioAmplifier","name":"ampFaderAL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":900,"y":625,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105854_697Z_c643:0"]]},{"id":"20240906T110843_185Z_61dd","type":"AudioAmplifier","name":"ampFaderAR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":915,"y":750,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105904_599Z_5318:0"]]},{"id":"20240906T111000_240Z_9f27","type":"AudioAmplifier","name":"ampFaderBL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":915,"y":940,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105854_697Z_c643:1"]]},{"id":"20240906T111000_241Z_3771","type":"AudioAmplifier","name":"ampFaderBR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":930,"y":1065,"z":"Main","bgColor":"#E6E0F8","wires":[["20240906T105904_599Z_5318:1"]]},{"id":"20240906T105854_697Z_c643","type":"AudioMixer4","name":"mixerMasterL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1135,"y":635,"z":"Main","bgColor":"#E6E0F8","wires":[["20240914T071658_379Z_dea:0"]]},{"id":"20240906T105904_599Z_5318","type":"AudioMixer4","name":"mixerMasterR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1155,"y":775,"z":"Main","bgColor":"#E6E0F8","wires":[["20240914T071728_934Z_ac46:0"]]},{"id":"20240906T105952_939Z_40f8","type":"AudioMixer4","name":"mixerCueL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1160,"y":865,"z":"Main","bgColor":"#E6E0F8","wires":[["20240914T071805_893Z_b795:0"]]},{"id":"20240906T110153_128Z_8ce1","type":"AudioMixer4","name":"mixerCueR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1175,"y":995,"z":"Main","bgColor":"#E6E0F8","wires":[["20240914T071805_894Z_60df:0"]]},{"id":"20240914T071658_379Z_dea","type":"AudioAmplifier","name":"ampMasterL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1320,"y":640,"z":"Main","bgColor":"#E6E0F8","wires":[["20240905T142613_279Z_bbf8:0"]]},{"id":"20240914T071728_934Z_ac46","type":"AudioAmplifier","name":"ampMasterR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1335,"y":720,"z":"Main","bgColor":"#E6E0F8","wires":[["20240905T142613_279Z_bbf8:1"]]},{"id":"20240914T071805_893Z_b795","type":"AudioAmplifier","name":"ampCueL","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1350,"y":855,"z":"Main","bgColor":"#E6E0F8","wires":[["20240905T142613_279Z_bbf8:2"]]},{"id":"20240914T071805_894Z_60df","type":"AudioAmplifier","name":"ampCueR","comment":"","anchor":"0","locked":false,"arraySize":1,"x":1365,"y":935,"z":"Main","bgColor":"#E6E0F8","wires":[["20240905T142613_279Z_bbf8:3"]]},{"id":"20240905T142613_279Z_bbf8","type":"AudioOutputI2SQuad","name":"i2s_quad","comment":"","anchor":"","locked":false,"x":1575,"y":830,"z":"Main","bgColor":"#E6E0F8","wires":[]}]




// Audio Processing Nodes
AudioInputI2SQuad               i2s_quad1; //xy=60,690
AudioAmplifier                  ampTrimAL; //xy=190,585
AudioAmplifier                  ampTrimAR; //xy=230,725
AudioAmplifier                  ampTrimBL; //xy=205,900
AudioAmplifier                  ampTrimBR; //xy=245,1040
AudioFilterStateVariable        filterLAL; //xy=345,650
AudioFilterStateVariable        filterLAR; //xy=365,770
AudioFilterStateVariable        filterLBL; //xy=360,965
AudioFilterStateVariable        filterLBR; //xy=380,1085
AudioFilterStateVariable        filterMAL; //xy=495,685
AudioFilterStateVariable        filterMAR; //xy=515,805
AudioFilterStateVariable        filterMBL; //xy=510,1000
AudioFilterStateVariable        filterMBR; //xy=530,1120
AudioMixer4                     mixerAL; //xy=735,645
AudioMixer4                     mixerAR; //xy=755,765
AudioMixer4                     mixerBL; //xy=750,960
AudioMixer4                     mixerBR; //xy=770,1080
AudioAnalyzePeak                peakAL; //xy=840,565
AudioAnalyzePeak                peakAR; //xy=865,715
AudioAnalyzePeak                peakBL; //xy=870,885
AudioAnalyzePeak                peakBR; //xy=895,1035
AudioAmplifier                  ampFaderAL; //xy=900,625
AudioAmplifier                  ampFaderAR; //xy=915,750
AudioAmplifier                  ampFaderBL; //xy=915,940
AudioAmplifier                  ampFaderBR; //xy=930,1065
AudioMixer4                     mixerMasterL; //xy=1135,635
AudioMixer4                     mixerMasterR; //xy=1155,775
AudioMixer4                     mixerCueL; //xy=1160,865
AudioMixer4                     mixerCueR; //xy=1175,995
AudioAmplifier                  ampMasterL; //xy=1320,640
AudioAmplifier                  ampMasterR; //xy=1335,720
AudioAmplifier                  ampCueL; //xy=1350,855
AudioAmplifier                  ampCueR; //xy=1365,935
AudioOutputI2SQuad              i2s_quad; //xy=1575,830

// Audio Connections (all connections (aka wires or links))
AudioConnection        patchCord1(i2s_quad1, 0, ampTrimAL, 0);
AudioConnection        patchCord2(i2s_quad1, 1, ampTrimAR, 0);
AudioConnection        patchCord3(i2s_quad1, 2, ampTrimBL, 0);
AudioConnection        patchCord4(i2s_quad1, 3, ampTrimBR, 0);
AudioConnection        patchCord5(ampTrimAL, 0, filterLAL, 0);
AudioConnection        patchCord6(ampTrimAL, 0, mixerAL, 3);
AudioConnection        patchCord7(ampTrimAR, 0, filterLAR, 0);
AudioConnection        patchCord8(ampTrimAR, 0, mixerAR, 3);
AudioConnection        patchCord9(ampTrimBL, 0, filterLBL, 0);
AudioConnection        patchCord10(ampTrimBL, 0, mixerBL, 3);
AudioConnection        patchCord11(ampTrimBR, 0, filterLBR, 0);
AudioConnection        patchCord12(ampTrimBR, 0, mixerBR, 3);
AudioConnection        patchCord13(filterLAL, 0, mixerAL, 0);
AudioConnection        patchCord14(filterLAL, 2, filterMAL, 0);
AudioConnection        patchCord15(filterLAR, 0, mixerAR, 0);
AudioConnection        patchCord16(filterLAR, 2, filterMAR, 0);
AudioConnection        patchCord17(filterLBL, 0, mixerBL, 0);
AudioConnection        patchCord18(filterLBL, 2, filterMBL, 0);
AudioConnection        patchCord19(filterLBR, 0, mixerBR, 0);
AudioConnection        patchCord20(filterLBR, 2, filterMBR, 0);
AudioConnection        patchCord21(filterMAL, 0, mixerAL, 1);
AudioConnection        patchCord22(filterMAL, 2, mixerAL, 2);
AudioConnection        patchCord23(filterMAR, 0, mixerAR, 1);
AudioConnection        patchCord24(filterMAR, 2, mixerAR, 2);
AudioConnection        patchCord25(filterMBL, 0, mixerBL, 1);
AudioConnection        patchCord26(filterMBL, 2, mixerBL, 2);
AudioConnection        patchCord27(filterMBR, 0, mixerBR, 1);
AudioConnection        patchCord28(filterMBR, 2, mixerBR, 2);
AudioConnection        patchCord29(mixerAL, 0, peakAL, 0);
AudioConnection        patchCord30(mixerAL, 0, ampFaderAL, 0);
AudioConnection        patchCord31(mixerAL, 0, mixerCueL, 0);
AudioConnection        patchCord32(mixerAR, 0, peakAR, 0);
AudioConnection        patchCord33(mixerAR, 0, ampFaderAR, 0);
AudioConnection        patchCord34(mixerAR, 0, mixerCueR, 0);
AudioConnection        patchCord35(mixerBL, 0, peakBL, 0);
AudioConnection        patchCord36(mixerBL, 0, ampFaderBL, 0);
AudioConnection        patchCord37(mixerBL, 0, mixerCueL, 1);
AudioConnection        patchCord38(mixerBR, 0, peakBR, 0);
AudioConnection        patchCord39(mixerBR, 0, ampFaderBR, 0);
AudioConnection        patchCord40(mixerBR, 0, mixerCueR, 1);
AudioConnection        patchCord41(ampFaderAL, 0, mixerMasterL, 0);
AudioConnection        patchCord42(ampFaderAR, 0, mixerMasterR, 0);
AudioConnection        patchCord43(ampFaderBL, 0, mixerMasterL, 1);
AudioConnection        patchCord44(ampFaderBR, 0, mixerMasterR, 1);
AudioConnection        patchCord45(mixerMasterL, 0, ampMasterL, 0);
AudioConnection        patchCord46(mixerMasterR, 0, ampMasterR, 0);
AudioConnection        patchCord47(mixerCueL, 0, ampCueL, 0);
AudioConnection        patchCord48(mixerCueR, 0, ampCueR, 0);
AudioConnection        patchCord49(ampMasterL, 0, i2s_quad, 0);
AudioConnection        patchCord50(ampMasterR, 0, i2s_quad, 1);
AudioConnection        patchCord51(ampCueL, 0, i2s_quad, 2);
AudioConnection        patchCord52(ampCueR, 0, i2s_quad, 3);

// Control Nodes (all control nodes (no inputs or outputs))



// TeensyAudioDesign: end automatically generated code



#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

int s0 = 9;
int s1 = 10;
int s2 = 11;
int s3 = 12;
//Mux in "SIG" pin
int SIG_pin = 14;

int cueA = false;
int cueB = false;

#define INTERVAL_SCREEN_MS 30

unsigned long timeScreen;

Bounce bouncerA = Bounce();
Bounce bouncerB = Bounce();

void setup() {
  // put your setup code here, to run once:
  bouncerA.attach(SIG_pin);
  bouncerA.interval(5);

  bouncerB.attach(SIG_pin);
  bouncerB.interval(5);

  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(s3, OUTPUT); 
  pinMode(SIG_pin, INPUT);

  Serial.begin(9600);
  AudioMemory(180);
  filterLAL.frequency(1023);
  filterMAL.frequency(4000);
  filterLAR.frequency(1023);
  filterMAR.frequency(4000);

  filterLBL.frequency(1023);
  filterMBL.frequency(4000);
  filterLBR.frequency(1023);
  filterMBR.frequency(4000);

  AudioProcessorUsageMaxReset();
  AudioMemoryUsageMaxReset();

  timeScreen = millis();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentTime = millis();


  // ch A
  mixerAL.gain(0, mapf(readMux(12), 1023, 0, -1.0, 1.0));
  mixerAL.gain(1, mapf(readMux(13), 1023, 0, -1.0, 1.0));
  mixerAL.gain(2, mapf(readMux(14), 1023, 0, -1.0, 1.0));
  mixerAR.gain(0, mapf(readMux(12), 1023, 0, -1.0, 1.0));
  mixerAR.gain(1, mapf(readMux(13), 1023, 0, -1.0, 1.0));
  mixerAR.gain(2, mapf(readMux(14), 1023, 0, -1.0, 1.0));
  ampTrimAL.gain(mapf(readMux(15), 0, 1023, 0, 1.0));
  ampTrimAR.gain(mapf(readMux(15), 0, 1023, 0, 1.0));
  ampFaderAL.gain(mapf(readMux(11), 0, 1023, 0, 1.0));
  ampFaderAR.gain(mapf(readMux(11), 0, 1023, 0, 1.0));

  readMux(5);
  bouncerA.update();
  if(bouncerA.changed()&&bouncerA.read()) cueA = !cueA;
  mixerCueL.gain(0, cueA);
  mixerCueR.gain(0, cueA);


  // ch B
  mixerBL.gain(0, mapf(readMux(7), 1023, 0, -1.0, 1.0));
  mixerBL.gain(1, mapf(readMux(8), 1023, 0, -1.0, 1.0));
  mixerBL.gain(2, mapf(readMux(9), 1023, 0, -1.0, 1.0));
  mixerBR.gain(0, mapf(readMux(7), 1023, 0, -1.0, 1.0));
  mixerBR.gain(1, mapf(readMux(8), 1023, 0, -1.0, 1.0));
  mixerBR.gain(2, mapf(readMux(9), 1023, 0, -1.0, 1.0));
  ampTrimBL.gain(mapf(readMux(10), 0, 1023, 0, 1.0));
  ampTrimBR.gain(mapf(readMux(10), 0, 1023, 0, 1.0));
  ampFaderBL.gain(mapf(readMux(6), 0, 1023, 0, 1.0));
  ampFaderBR.gain(mapf(readMux(6), 0, 1023, 0, 1.0));

  readMux(4);
  bouncerB.update();
  if(bouncerB.changed()&&bouncerB.read()) cueB = !cueB;
  mixerCueL.gain(1, cueB);
  mixerCueR.gain(1, cueB);

  // master
  ampMasterL.gain(mapf(readMux(3), 0, 1023, 0, 1.0));
  ampMasterR.gain(mapf(readMux(3), 0, 1023, 0, 1.0));
  // cue
  ampCueL.gain(mapf(readMux(2), 0, 1023, 0, 1.0));
  ampCueR.gain(mapf(readMux(2), 0, 1023, 0, 1.0));

  

  if(currentTime-timeScreen>INTERVAL_SCREEN_MS){
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0,0);
    display.clearDisplay();
    
    if(cueA){
      display.setCursor(0,0);
      display.print("C");
    }
    if(cueB){
      display.setCursor(0,0);
      display.print(" C");
    }

    int h = (int)(peakAL.read()*2*30.0);
    display.fillRect(0, 30-h, 2, h, WHITE);
    display.fillRect(0, 31, 2, 1, WHITE);

    h = (int)(peakAR.read()*2*30.0);
    display.fillRect(3, 30-h, 2, h, WHITE);
    display.fillRect(3, 31, 2, 1, WHITE);

    h = (int)(peakBL.read()*2*30.0);
    display.fillRect(6, 30-h, 2, h, WHITE);
    display.fillRect(6, 31, 2, 1, WHITE);

    h = (int)(peakBR.read()*2*30.0);
    display.fillRect(9, 30-h, 2, h, WHITE);
    display.fillRect(9, 31, 2, 1, WHITE);

    display.display();
    timeScreen = currentTime;
  }
}

int readMux(int channel){
  int controlPin[] = {s0, s1, s2, s3};

  int muxChannel[16][4]={
    {0,0,0,0}, //channel 0
    {1,0,0,0}, //channel 1
    {0,1,0,0}, //channel 2
    {1,1,0,0}, //channel 3
    {0,0,1,0}, //channel 4
    {1,0,1,0}, //channel 5
    {0,1,1,0}, //channel 6
    {1,1,1,0}, //channel 7
    {0,0,0,1}, //channel 8
    {1,0,0,1}, //channel 9
    {0,1,0,1}, //channel 10
    {1,1,0,1}, //channel 11
    {0,0,1,1}, //channel 12
    {1,0,1,1}, //channel 13
    {0,1,1,1}, //channel 14
    {1,1,1,1}  //channel 15
  };

  //loop through the 4 sig
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
  

  int val = analogRead(SIG_pin);

  //return the value
  return val;
}

float mapf(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
