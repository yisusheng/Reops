EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATmega:ATmega2560-16AU U?
U 1 1 61CC0B3F
P 3100 3850
F 0 "U?" H 3100 861 50  0000 C CNN
F 1 "ATmega2560-16AU" H 3100 770 50  0000 C CNN
F 2 "Package_QFP:TQFP-100_14x14mm_P0.5mm" H 3100 3850 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-2549-8-bit-AVR-Microcontroller-ATmega640-1280-1281-2560-2561_datasheet.pdf" H 3100 3850 50  0001 C CNN
	1    3100 3850
	1    0    0    -1  
$EndComp
$Comp
L Device:Resonator Y?
U 1 1 61CCCFDC
P 1700 1550
F 0 "Y?" V 1654 1660 50  0000 L CNN
F 1 "Resonator" V 1745 1660 50  0000 L CNN
F 2 "" H 1675 1550 50  0001 C CNN
F 3 "~" H 1675 1550 50  0001 C CNN
	1    1700 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	2300 1450 2000 1450
Wire Wire Line
	2000 1450 2000 1400
Wire Wire Line
	2000 1400 1700 1400
Connection ~ 1700 1400
Wire Wire Line
	1700 1400 1050 1400
Wire Wire Line
	2300 1650 2000 1650
Wire Wire Line
	2000 1650 2000 1700
Wire Wire Line
	2000 1700 1700 1700
Connection ~ 1700 1700
Wire Wire Line
	1700 1700 1050 1700
$Comp
L power:GNDREF #PWR?
U 1 1 61CDC846
P 1350 1550
F 0 "#PWR?" H 1350 1300 50  0001 C CNN
F 1 "GNDREF" V 1355 1422 50  0000 R CNN
F 2 "" H 1350 1550 50  0001 C CNN
F 3 "" H 1350 1550 50  0001 C CNN
	1    1350 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	1500 1550 1350 1550
$Comp
L Device:R R?
U 1 1 61CDDBB1
P 1050 1550
F 0 "R?" H 1120 1596 50  0000 L CNN
F 1 "R" H 1120 1505 50  0000 L CNN
F 2 "" V 980 1550 50  0001 C CNN
F 3 "~" H 1050 1550 50  0001 C CNN
	1    1050 1550
	1    0    0    -1  
$EndComp
$EndSCHEMATC
