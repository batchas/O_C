#include "OC_strings.h"

namespace OC {

  namespace Strings {

  const char * const pulsewidth_ms[] = {
    "echo",
    "1ms","2ms","3ms","4ms","5ms","6ms","7ms","8ms","9ms","10ms",
    "11ms","12ms","13ms","14ms","15ms","16ms","17ms","18ms","19ms","20ms",
    "21ms","22ms","23ms","24ms","25ms","26ms","27ms","28ms","29ms","30ms",
    "31ms","32ms","33ms","34ms","35ms","36ms","37ms","38ms","39ms","40ms",
    "41ms","42ms","43ms","44ms","45ms","46ms","47ms","48ms","49ms","50ms",
    "51ms","52ms","53ms","54ms","55ms","56ms","57ms","58ms","59ms","60ms",
    "61ms","62ms","63ms","64ms","65ms","66ms","67ms","68ms","69ms","70ms",
    "71ms","72ms","73ms","74ms","75ms","76ms","77ms","78ms","79ms","80ms",
    "81ms","82ms","83ms","84ms","85ms","86ms","87ms","88ms","89ms","90ms",
    "91ms","92ms","93ms","94ms","95ms","96ms","97ms","98ms","99ms","100ms",
    "101ms","102ms","103ms","104ms","105ms","106ms","107ms","108ms","109ms","110ms",
    "111ms","112ms","113ms","114ms","115ms","116ms","117ms","118ms","119ms","120ms",
    "121ms","122ms","123ms","124ms","125ms","126ms","127ms","128ms","129ms","130ms",
    "131ms","132ms","133ms","134ms","135ms","136ms","137ms","138ms","139ms","140ms",
    "141ms","142ms","143ms","144ms","145ms","146ms","147ms","148ms","149ms","150ms",
    "151ms","152ms","153ms","154ms","155ms","156ms","157ms","158ms","159ms","160ms",
    "161ms","162ms","163ms","164ms","165ms","166ms","167ms","168ms","169ms","170ms",
    "171ms","172ms","173ms","174ms","175ms","176ms","177ms","178ms","179ms","180ms",
    "181ms","182ms","183ms","184ms","185ms","186ms","187ms","188ms","189ms","190ms",
    "191ms","192ms","193ms","194ms","195ms","196ms","197ms","198ms","199ms","200ms",
    "201ms","202ms","203ms","204ms","205ms","206ms","207ms","208ms","209ms","210ms",
    "211ms","212ms","213ms","214ms","215ms","216ms","217ms","218ms","219ms","220ms",
    "221ms","222ms","223ms","224ms","225ms","226ms","227ms","228ms","229ms","230ms",
    "231ms","232ms","233ms","234ms","235ms","236ms","237ms","238ms","239ms","240ms",
    "241ms","242ms","243ms","244ms","245ms","246ms","247ms","248ms","249ms","250ms",
    "251ms","252ms","253ms","254ms",
    "50%"
  };  

  const char * const seq_playmodes[] = {" -", "SEQ+1", "SEQ+2", "SEQ+3", "TR+1", "TR+2", "TR+3", "S+H#1", "S+H#2", "S+H#3", "S+H#4", "CV#1", "CV#2", "CV#3", "CV#4"}; 

  const char * const seq_id[] = { "--> #1", "--> #2", "--> #3", "--> #4", "#1", "#2", "#3", "#4"};

  const char * const scale_id[] = { ">#1", ">#2", ">#3", ">#4", " #1", " #2", " #3", " #4"};
  
  const char * const note_names[12] = { "C ", "C#", "D ", "D#", "E ", "F ", "F#", "G ", "G#", "A ", "A#", "B " };
  
  const char * const note_names_unpadded[12] = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };

  const char * const trigger_input_names[4] = { "TR1", "TR2", "TR3", "TR4" };

  const char * const trigger_input_names_none[5] = { "None", "TR1", "TR2", "TR3", "TR4" };

  const char * const cv_input_names[4] = { "CV1", "CV2", "CV3", "CV4" };

  const char * const no_yes[] = { "No", "Yes" };

  const char * const encoder_config_strings[] = { "normal", "R reversed", "L reversed", "LR reversed" };

  const char * const trigger_delay_times[kNumDelayTimes] = {
      "off", "120us", "240us", "360us", "480us", "1ms", "2ms", "4ms"
  };

  const char* const bytebeat_equation_names[] = {
    "hope", "love", "life", "age", "clysm", "monk", "NERV", "Trurl", "Pirx", "Snaut", "Hari" , "Kris", "Tichy", "Bregg", "Avon", "Orac"
  };

  const char* const integer_sequence_names[] = {
    "pi", "phi", "tau", "Euler", "root2", "vnEck", "ssdn", "Dress", "PNinf" 
  };

  const char* const integer_sequence_dirs[] = {
    "swing", "loop"
  };

  const uint8_t pi_digits[256] =     {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,6,9,3,9,9,3,7,5,1,0,5,8,2,0,
  9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0,3,4,8,2,5,3,4,2,1,1,7,0,6,7,9,8,2,1,4,8,0,8,6,5,1,3,2,8,2,3,0,6,6,4,7,0,9,
  3,8,4,4,6,0,9,5,5,0,5,8,2,2,3,1,7,2,5,3,5,9,4,0,8,1,2,8,4,8,1,1,1,7,4,5,0,2,8,4,1,0,2,7,0,1,9,3,8,5,2,1,1,0,5,5,5,9,6,4,4,6,2,2,9,4,8,9,
  5,4,9,3,0,3,8,1,9,6,4,4,2,8,8,1,0,9,7,5,6,6,5,9,3,3,4,4,6,1,2,8,4,7,5,6,4,8,2,3,3,7,8,6,7,8,3,1,6,5,2,7,1,2,0,1,9,0,9,1,4,5,6,4};

  const uint8_t phi_digits[256] =    {1,6,1,8,0,3,3,9,8,8,7,4,9,8,9,4,8,4,8,2,0,4,5,8,6,8,3,4,3,6,5,6,3,8,1,1,7,7,2,0,3,0,9,1,7,9,8,0,5,7,6,2,8,6,2,
  1,3,5,4,4,8,6,2,2,7,0,5,2,6,0,4,6,2,8,1,8,9,0,2,4,4,9,7,0,7,2,0,7,2,0,4,1,8,9,3,9,1,1,3,7,4,8,4,7,5,4,0,8,8,0,7,5,3,8,6,8,9,1,7,5,2,1,2,
  6,6,3,3,8,6,2,2,2,3,5,3,6,9,3,1,7,9,3,1,8,0,0,6,0,7,6,6,7,2,6,3,5,4,4,3,3,3,8,9,0,8,6,5,9,5,9,3,9,5,8,2,9,0,5,6,3,8,3,2,2,6,6,1,3,1,9,9,
  2,8,2,9,0,2,6,7,8,8,0,6,7,5,2,0,8,7,6,6,8,9,2,5,0,1,7,1,1,6,9,6,2,0,7,0,3,2,2,2,1,0,4,3,2,1,6,2,6,9,5,4,8,6,2,6,2,9,6,3,1,3,6,1};
    
  const uint8_t tau_digits[256] =    {6,2,8,3,1,8,5,3,0,7,1,7,9,5,8,6,4,7,6,9,2,5,2,8,6,7,6,6,5,5,9,0,0,5,7,6,8,3,9,4,3,3,8,7,9,8,7,5,0,2,1,1,6,4,1,
  9,4,9,8,8,9,1,8,4,6,1,5,6,3,2,8,1,2,5,7,2,4,1,7,9,9,7,2,5,6,0,6,9,6,5,0,6,8,4,2,3,4,1,3,5,9,6,4,2,9,6,1,7,3,0,2,6,5,6,4,6,1,3,2,9,4,1,8,
  7,6,8,9,2,1,9,1,0,1,1,6,4,4,6,3,4,5,0,7,1,8,8,1,6,2,5,6,9,6,2,2,3,4,9,0,0,5,6,8,2,0,5,4,0,3,8,7,7,0,4,2,2,1,1,1,1,9,2,8,9,2,4,5,8,9,7,9,
  0,9,8,6,0,7,6,3,9,2,8,8,5,7,6,2,1,9,5,1,3,3,1,8,6,6,8,9,2,2,5,6,9,5,1,2,9,6,4,6,7,5,7,3,5,6,6,3,3,0,5,4,2,4,0,3,8,1,8,2,9,1,2,9};

  const uint8_t eul_digits[256] =    {2,7,1,8,2,8,1,8,2,8,4,5,9,0,4,5,2,3,5,3,6,0,2,8,7,4,7,1,3,5,2,6,6,2,4,9,7,7,5,7,2,4,7,0,9,3,6,9,9,9,5,9,5,7,4,
  9,6,6,9,6,7,6,2,7,7,2,4,0,7,6,6,3,0,3,5,3,5,4,7,5,9,4,5,7,1,3,8,2,1,7,8,5,2,5,1,6,6,4,2,7,4,2,7,4,6,6,3,9,1,9,3,2,0,0,3,0,5,9,9,2,1,8,1,
  7,4,1,3,5,9,6,6,2,9,0,4,3,5,7,2,9,0,0,3,3,4,2,9,5,2,6,0,5,9,5,6,3,0,7,3,8,1,3,2,3,2,8,6,2,7,9,4,3,4,9,0,7,6,3,2,3,3,8,2,9,8,8,0,7,5,3,1,
  9,5,2,5,1,0,1,9,0,1,1,5,7,3,8,3,4,1,8,7,9,3,0,7,0,2,1,5,4,0,8,9,1,4,9,9,3,4,8,8,4,1,6,7,5,0,9,2,4,4,7,6,1,4,6,0,6,6,8,0,8,2,2,6};

  const uint8_t rt2_digits[256] =    {1,4,1,4,2,1,3,5,6,2,3,7,3,0,9,5,0,4,8,8,0,1,6,8,8,7,2,4,2,0,9,6,9,8,0,7,8,5,6,9,6,7,1,8,7,5,3,7,6,9,4,8,0,7,3,
  1,7,6,6,7,9,7,3,7,9,9,0,7,3,2,4,7,8,4,6,2,1,0,7,0,3,8,8,5,0,3,8,7,5,3,4,3,2,7,6,4,1,5,7,2,7,3,5,0,1,3,8,4,6,2,3,0,9,1,2,2,9,7,0,2,4,9,2,
  4,8,3,6,0,5,5,8,5,0,7,3,7,2,1,2,6,4,4,1,2,1,4,9,7,0,9,9,9,3,5,8,3,1,4,1,3,2,2,2,6,6,5,9,2,7,5,0,5,5,9,2,7,5,5,7,9,9,9,5,0,5,0,1,1,5,2,7,
  8,2,0,6,0,5,7,1,4,7,0,1,0,9,5,5,9,9,7,1,6,0,5,9,7,0,2,7,4,5,3,4,5,9,6,8,6,2,0,1,4,7,2,8,5,1,7,4,1,8,6,4,0,8,8,9,1,9,8,6,0,9,5,5};

  // van Eck sequence - generated using Python code found at https://oeis.org/A181391
  const uint8_t van_eck[256] =       {0,0,1,0,2,0,2,2,1,6,0,5,0,2,6,5,4,0,5,3,0,3,2,9,0,4,9,3,6,14,0,6,3,5,15,0,5,3,5,2,17,0,6,11,0,3,8,0,3,3,1,42,0,5,
  15,20,0,4,32,0,3,11,18,0,4,7,0,3,7,3,2,31,0,6,31,3,6,3,2,8,33,0,9,56,0,3,8,7,19,0,5,37,0,3,8,8,1,46,0,6,23,0,3,9,21,0,4,42,56,25,0,5,21,8,18,52,0,6,18,
  4,13,0,5,11,62,0,4,7,40,0,4,4,1,36,0,5,13,16,0,4,8,27,0,4,4,1,13,10,0,6,32,92,0,4,9,51,0,4,4,1,14,131,0,6,14,4,7,39,0,6,6,1,12,0,5,39,8,36,44,0,6,10,34,
  0,4,19,97,0,4,4,1,19,6,12,21,82,0,9,43,0,3,98,0,3,3,1,15,152,0,6,17,170,0,4,24,0,3,12,24,4,6,11,98,21,29,0,10,45,0,3,13,84,0,4,14,70,0,4,4,1,34,58,0,6,
  23,144,0,4,9,51,94,0,5,78,0,3} ;

  // Sum of squares of digits of n - see https://oeis.org/A003132
  const uint8_t sum_of_squares_of_digits_of_n[256] =       {0,1,4,9,16,25,36,49,64,81,1,2,5,10,17,26,37,50,65,82,4,5,8,13,20,29,40,53,68,85,9,10,13,18,25,
  34,45,58,73,90,16,17,20,25,32,41,52,65,80,97,25,26,29,34,41,50,61,74,89,106,36,37,40,45,52,61,72,85,100,117,49,50,53,58,65,74,85,98,113,130,64,65,68,73,
  80,89,100,113,128,145,81,82,85,90,97,106,117,130,145,162,1,2,5,10,17,26,37,50,65,82,2,3,6,11,18,27,38,51,66,83,5,6,9,14,21,30,41,54,69,86,10,11,14,19,26,
  35,46,59,74,91,17,18,21,26,33,42,53,66,81,98,26,27,30,35,42,51,62,75,90,107,37,38,41,46,53,62,73,86,101,118,50,51,54,59,66,75,86,99,114,131,65,66,69,74,
  81,90,101,114,129,146,82,83,86,91,98,107,118,131,146,163,4,5,8,13,20,29,40,53,68,85,5,6,9,14,21,30,41,54,69,86,8,9,12,17,24,33,44,57,72,89,13,14,17,22,29,
  38,49,62,77,94,20,21,24,29,36,45,56,69,84,101,29,30,33,38,45,54} ;

  //  Digital sum (i.e., sum of digits) of n; also called digsum(n). - see https://oeis.org/A007953
  const uint8_t digsum_of_n[256] =       {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 3, 4,
 5, 6, 7, 8, 9, 10, 11, 12, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9,
 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 
 15, 16, 17, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 3, 4, 5, 6, 7, 8, 9, 10,
 11, 12, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15,
 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11,
 12, 13, 14, 15, 16, 17, 18, 19, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 4, 5, 6, 7,
 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12};

//  const uint8_t rt3_digits[256] =    {1,7,3,2,0,5,0,8,0,7,5,6,8,8,7,7,2,9,3,5,2,7,4,4,6,3,4,1,5,0,5,8,7,2,3,6,6,9,4,2,8,0,5,2,5,3,8,1,0,3,8,0,6,2,8,
//  0,5,5,8,0,6,9,7,9,4,5,1,9,3,3,0,1,6,9,0,8,8,0,0,0,3,7,0,8,1,1,4,6,1,8,6,7,5,7,2,4,8,5,7,5,6,7,5,6,2,6,1,4,1,4,1,5,4,0,6,7,0,3,0,2,9,9,6,
//  9,9,4,5,0,9,4,9,9,8,9,5,2,4,7,8,8,1,1,6,5,5,5,1,2,0,9,4,3,7,3,6,4,8,5,2,8,0,9,3,2,3,1,9,0,2,3,0,5,5,8,2,0,6,7,9,7,4,8,2,0,1,0,1,0,8,4,6,
//  7,4,9,2,3,2,6,5,0,1,5,3,1,2,3,4,3,2,6,6,9,0,3,3,2,2,8,8,6,6,5,0,6,7,2,2,5,4,6,6,8,9,2,1,8,3,7,9,7,1,2,2,7,0,4,7,1,3,1,6,6,0,3,6};

//  const uint8_t rt5_digits[256] =    {2,2,3,6,0,6,7,9,7,7,4,9,9,7,8,9,6,9,6,4,0,9,1,7,3,6,6,8,7,3,1,2,7,6,2,3,5,4,4,0,6,1,8,3,5,9,6,1,1,5,2,5,7,2,4,
//  2,7,0,8,9,7,2,4,5,4,1,0,5,2,0,9,2,5,6,3,7,8,0,4,8,9,9,4,1,4,4,1,4,4,0,8,3,7,8,7,8,2,2,7,4,9,6,9,5,0,8,1,7,6,1,5,0,7,7,3,7,8,3,5,0,4,2,5,
//  3,2,6,7,7,2,4,4,4,7,0,7,3,8,6,3,5,8,6,3,6,0,1,2,1,5,3,3,4,5,2,7,0,8,8,6,6,7,7,8,1,7,3,1,9,1,8,7,9,1,6,5,8,1,1,2,7,6,6,4,5,3,2,2,6,3,9,8,
//  5,6,5,8,0,5,3,5,7,6,1,3,5,0,4,1,7,5,3,3,7,8,5,0,0,3,4,2,3,3,9,2,4,1,4,0,6,4,4,4,2,0,8,6,4,3,2,5,3,9,0,9,7,2,5,2,5,9,2,6,2,7,2,2};

//  The following are redundant - now calculate the Dress sequence on the fly using bit-counting (bit population counts)
//  const uint8_t dress_digits[256] =  {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,
//  5,3,4,4,5,4,5,5,6,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,
//  6,5,6,6,7,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,
//  7,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,4,5,5,6,5,6,6,7,5,6,6,7,6,7,7};
//    
//  const uint8_t dress31_digits[256] ={0,4,5,4,6,4,5,4,7,4,5,4,6,4,5,4,8,4,5,4,6,4,5,4,7,4,5,4,6,4,5,4,9,9,5,5,6,6,5,5,7,7,5,5,6,6,5,5,8,8,5,5,6,6,5,
//  5,7,7,5,5,6,6,5,5,10,9,10,4,6,5,6,4,7,6,7,4,6,5,6,4,8,7,8,4,6,5,6,4,7,6,7,4,6,5,6,4,9,9,9,9,6,6,6,6,7,7,7,7,6,6,6,6,8,8,8,8,6,6,6,6,7,7,
//  7,7,6,6,6,6,11,9,10,9,11,4,5,4,7,5,6,5,7,4,5,4,8,6,7,6,8,4,5,4,7,5,6,5,7,4,5,4,9,9,8,8,9,9,5,5,7,7,6,6,7,7,5,5,8,8,7,7,8,8,5,5,7,7,6,6,7,7,
//  5,5,10,9,10,8,10,9,10,4,7,6,7,5,7,6,7,4,8,7,8,6,8,7,8,4,7,6,7,5,7,6,7,4,9,9,9,9,9,9,9,9,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7};
//
//  const uint8_t dress63_digits[256] ={0,5,6,5,7,5,6,5,8,5,6,5,7,5,6,5,9,5,6,5,7,5,6,5,8,5,6,5,7,5,6,5,10,5,6,5,7,5,6,5,8,5,6,5,7,5,6,5,9,5,6,5,7,5,6,
//  5,8,5,6,5,7,5,6,5,11,11,6,6,7,7,6,6,8,8,6,6,7,7,6,6,9,9,6,6,7,7,6,6,8,8,6,6,7,7,6,6,10,10,6,6,7,7,6,6,8,8,6,6,7,7,6,6,9,9,6,6,7,7,6,6,8,
//  8,6,6,7,7,6,6,12,11,12,5,7,6,7,5,8,7,8,5,7,6,7,5,9,8,9,5,7,6,7,5,8,7,8,5,7,6,7,5,10,9,10,5,7,6,7,5,8,7,8,5,7,6,7,5,9,8,9,5,7,6,7,5,8,7,8,
//  5,7,6,7,5,11,11,11,11,7,7,7,7,8,8,8,8,7,7,7,7,9,9,9,9,7,7,7,7,8,8,8,8,7,7,7,7,10,10,10,10,7,7,7,7,8,8,8,8,7,7,7,7,9,9,9,9,7,7,7,7,8,8,8,8,7,7,7,7} ;

  
 }; // Strings

  // \sa OC_config.h -> kMaxTriggerDelayTicks
  const uint8_t trigger_delay_ticks[kNumDelayTimes] = {
    0, 2, 4, 6, 8, 16, 33, 66
  };

 
};
